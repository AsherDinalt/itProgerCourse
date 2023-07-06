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

class Paint {
private:
    char ch = '#';
public:
    void draw_char_line(int len, int lines) {
        for(int j = 0; j < lines; j++) {
            for(int i = 0; i < len; i++) {
                std::cout << ch;
                std::this_thread::sleep_for(500ms);
            }
            std::cout << std::endl;
            };
    };
    void print(int n) {};
};

int main() {
    setlocale(LC_ALL, "rus");
    Paint paint;
    std::thread t1(&Paint::draw_char_line, &paint, 3, 4);
    t1.join();

    // std::future <std::string> future = \
    //     std::async(std::launch::deferred, &Paint::print, 3);

    // std::future<Paint> future = std::async(std::launch::async, &Paint::draw_char_line, 3, 3);
}