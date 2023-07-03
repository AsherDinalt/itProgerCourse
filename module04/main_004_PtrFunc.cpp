#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>
#include <functional>

int add(int x, int y) {
    return x + y;
};

int minus(int x, int y) {
    return x - y;
};

void print_error(std::string (*func)()) {
    std::cout << func() << std::endl;
};

std::string console_write() {
    return "Console write";
};

std::string file_write() {
    return "File write";
};
// void arr_work(int* nums, int num, void(*f)(int))
void arr_work(int* nums, int num, std::function<void(int)> f) {
    for(int i = 0; i < num; i++) {
        f(nums[i]);
    }
};

void not_zero(int n) {
    if(n != 0) std::cout << n << std::endl;
};

int main() {
    setlocale(LC_ALL, "rus");
    int(*my_math)(int, int); // вместо имени функции стоит (*my_math)

    // my_math = add;
    // std::cout << my_math(8,14) << std::endl;  
    // print_error(file_write);

    //std::function<int(int, int)> f;
    int nums[] = {1,0,0,6,4,3,55};
    arr_work(nums, 7, not_zero);

    return 0;
}