#include <iostream>
#include <string>
#include <fstream>

float divide(int a, int b) {
    if(b == 0)
        throw "Divide by zero";
    if(a == 5)
        throw "Number 5 is forbidden!!";

    return a / b;
}

int main() {
    setlocale(LC_ALL, "rus");

    try {
        std::cout << divide(6,0) << std::endl;
    }
    catch(const char* msg) {
        std::cout << msg << std::endl;
    };

    return 0;
}