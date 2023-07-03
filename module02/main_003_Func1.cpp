#include <iostream>
#include <string>

void count();

int main() {
    setlocale(LC_ALL, "rus");
    // std::cout << std::to_string(123.45f) << std::endl;
    count();
    count();
    count();
    return 0;
}

void count() {
    static int n = 0;
    ++n;
    std::cout << n << std::endl;

}