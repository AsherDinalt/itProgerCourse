#include <iostream>
#include <string>
#include <fstream>

class Person {
private:
    std::string name;
    int age;
    bool isHappy;
    std::string hobbies[3] = {"","",""};

public:
    Person() {};
    Person(std::string name, int age, bool isHappy){
        this->name = name;
        this->age = age;
        this->isHappy = isHappy;        
    };
    ~Person(){
        std::cout << "Object " << this->name << " deleted!" << std::endl;
    };

    Person& increase_age(int age) {
        this->age += age;
        return *this;
    };

};


int main() {
    setlocale(LC_ALL, "rus");

    Person* max = new Person("Max", 27, true);
    delete max;

    Person alex("Alex", 23, true);
    alex.increase_age(1).increase_age(5).increase_age(2);
    // std::cout << alex.age << std::endl;

    return 0;
}
