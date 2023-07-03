#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>
#include <functional>

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


    //std::function<int(int, int)> f;
    int nums[] = {1,0,0,6,4,3,55};
    // arr_work(nums, 7, not_zero);
    // arr_work(nums, 7, [](int el) { 
    //     if(el > 0)
    //         std::cout << "el: " << el <<std::endl;});

    // auto f = [](){
    //     std::cout << "Hello world!" << std::endl;
    // };

    // std::function<void()> f = [](){
    //     std::cout << "Hello world!" << std::endl;
    // };
    // f();

    std::string word = "Hi!!!";
    std::function<void()> f = [&word](){ // [&] [=] - передаются все переменные
        std::cout << "word" << std::endl;
    };
    f();



    return 0;
}