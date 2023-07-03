#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>

#include "my_math.h"

typedef float car_speed;

int main() {
    setlocale(LC_ALL, "rus");
    //std::cout << "Hello, World!" << std::endl;
    MyMath pair(12,3);
    pair.add();
    pair.divide();

    car_speed sp = 6.0f;
    
    return 0;
}