#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>
#include <future>

using namespace std::chrono_literals;

std::promise<int> number;
std::future<int> num_future = number.get_future();

void number_work(std::promise<int> num, int value) {
    // num.set_value(value);
    std::this_thread::sleep_for(1s);
    num.set_value(value + 12);
};


int main() {
    setlocale(LC_ALL, "rus");

    std::thread t1(number_work, std::move(number), 50);

    std::cout << num_future.get() << std::endl;

    t1.join();

    return 0;
}