#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>

template <typename T1, typename T2>
T2 average(T1* nums, int num) {
    T2 sum = 0;
    for(int i = 0; i < num; i++) {
        sum += *(nums + i);
    };
    return sum / num;
};

int main() {
    setlocale(LC_ALL, "rus");
    //std::cout << "Hello, World!" << std::endl;
    int nums[] = {1,2,33,4,5,6,7,8,9};
    float ave;
    ave = average<int, float>(nums,9);
    std::cout << ave << std::endl; 
    
    return 0;
}