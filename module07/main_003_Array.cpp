#include <iostream>
#include <vector>
#include <array>

int main() {
    setlocale(LC_ALL, "rus");

    std::array<double, 5> numbers ={3.14f, 2.71828f, 2.71f}; 
    std::array<double, 5>::iterator iter = numbers.begin();
    
    numbers[3] = 57.1422f;
    for(double el : numbers) std::cout << el << std::endl;
    numbers.fill(3.14f);
    for(double el : numbers) std::cout << el << std::endl;
    return 0;
};