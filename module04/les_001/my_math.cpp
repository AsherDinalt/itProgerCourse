#include <iostream>
#include "my_math.h"

MyMath::MyMath(int x, int y) {
    this->x = x;
    this->y = y;
};

void MyMath::add() {
    std::cout << (x + y) << std::endl;
};

[[deprecated]]
void MyMath::mult() {
    std::cout << (x * y) << std::endl;
};

void MyMath::minus() {
    std::cout << (x - y) << std::endl;
};

void MyMath::divide() {
    std::cout << (x / y) << std::endl;
};