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

int number;
int number_work(int value) {
    std::this_thread::sleep_for(2s);
    number = value;
    return number;
};

int main() {
    setlocale(LC_ALL, "rus");
    
    // всегда ждем завершения функции
    // deferred - запуск производится при вызове future.get()
    /* std::future<int> future = \
        std::async(std::launch::deferred, number_work, 50); */

    // async - запуск производится прямо в вызывающей строке
    std::future<int> future = \
        std::async(std::launch::async, number_work, 50);

    std::cout << future.get() << std::endl; 
 

    return 0;
}
    

