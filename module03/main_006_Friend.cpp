#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>

class Drink;
class Cat;

class Person {
    friend void check_person(Person &person, Drink &drink);
private:
    int age;
    std::string name;
public:
    Person(int age, std::string name) {
        this->age = age;
        this->name = name;
    };
    void damage(Cat cat) {
        cat.health -= 10;
    };
    void heal(Cat cat) {
        cat.health += 10;
    };
};

class Drink {
    friend void check_person(Person &person, Drink &drink);
private:
    std::string name;
    bool isSpirit;
public:
    Drink(bool isSpirit, std::string name) {
        this->isSpirit = isSpirit;
        this->name = name;
    };

};

void check_person(Person &person, Drink &drink) {
    if(drink.isSpirit && person.age < 18) {
        std::cout << person.name << ", нельзя!" << std::endl;
    } else {
        std::cout << person.name << ", можно!" << std::endl;
    }
};

class Cat {
    friend class Person;
private:
    int health = 100;
};

int main() {
    setlocale(LC_ALL, "rus");

    Person alex(25, "Alex");
    Drink whiskey(true, "Whiskey");
    check_person(alex, whiskey);

    return 0;
}