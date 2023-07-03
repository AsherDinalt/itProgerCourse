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

using namespace std::chrono_literals;

int score = 0;
std::mutex m;
std::condition_variable cv;

void add_score(int amount) {
    std::lock_guard<std::mutex> lg(m);
    std::this_thread::sleep_for(500ms);

    score += amount;
    std::cout << "1) Score is: " << score << std::endl;
};

void check_score() {
    std::unique_lock<std::mutex> ul(m);
    cv.wait(ul, []() { return score > 50;});
    std::cout << "2) Score is: " << score << std::endl;
};

void increase() {
    std::this_thread::sleep_for(700ms);
    score += 51;
    std::cout << "3) Score is: " << score << std::endl;
    cv.notify_one(); // уведомление о проверке блокировок
    // cv.notify_all()
};


int main() {
    setlocale(LC_ALL, "rus");
    std::thread t1(add_score, 20);
    std::thread t2(check_score);
    std::thread t3(increase);


    t1.join();
    t2.join();
    t3.join();

    // std::cout << num << std::endl;

    return 0;
}