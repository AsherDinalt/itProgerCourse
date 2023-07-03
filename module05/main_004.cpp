#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std::chrono_literals;

int num = 10;
std::mutex m;
//std::timed_mutex m;
std::lock_guard<std::mutex> lg(m);


void increase() {
    //std::this_thread::sleep_for(1s);
    {
        std::lock_guard<std::mutex> lg(m); // срабатывает внутри скобок
        num++;
        num++;
    };
};

void increase1() {
    std::unique_lock<std::mutex> ul(m); // lock
    num++;
    num++;
    ul.unlock(); // unlock
    std::this_thread::sleep_for(1s);
}; // unlock

std::recursive_mutex rm;

void rec(int num) {
    if(num == 0) return;
    rm.lock();
    std::cout << num << std::endl;
    rec(--num);
    rm.unlock();
};


int main() {
    setlocale(LC_ALL, "rus");
    std::thread t1(rec, 5);
    std::thread t2(rec, 4);

    t1.join();
    t2.join();

    std::cout << num << std::endl;

    return 0;
}
