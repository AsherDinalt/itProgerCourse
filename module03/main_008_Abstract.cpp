#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>

class Person {
protected:
    virtual void talk() = 0;
};

class Player : public Person {
public:
    void talk() override {
        std::cout << "Player talk" << std::endl;
    };
};

class Enemy : public Person {
public:
    void talk() override {
        std::cout << "Enemy talk" << std::endl;
    };
};

int main() {
    setlocale(LC_ALL, "rus");

    Enemy en;
    en.talk();

    return 0;
}