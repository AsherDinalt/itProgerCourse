#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>

class User {
public:
    static int count;

    User() {
        count++;
        std::cout << count << std::endl;
    }
};

int User::count = 0;

class MyMath {
public:
    static void add(int a, int b) {
        std::cout << a + b << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "rus");

    //User us1, us2, us3;
    MyMath::add(3,4);

    return 0;
}