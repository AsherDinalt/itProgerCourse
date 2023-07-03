#include <iostream>
#include <string>
#include <fstream>

template <typename T>
struct t_list {
    long len;
    T* list;
};


class Person {
private:
    std::string name, type;
    int age;
    bool isHappy;
    std::string hobbies[3] = {"","",""};
protected:
    virtual void info() {
        std::cout << name << " " << age << std::endl;
    };
//     int age;

public:
    Person() {};
    Person(std::string name, int age, bool isHappy, std::string type){
        this->name = name;
        this->age = age;
        this->isHappy = isHappy;   
        this->type = type;      
    };
    ~Person(){
        std::cout << "Object " << this->name << " deleted!" << std::endl;
    };

    Person& increase_age(int age) {
        this->age += age;
        return *this;
    };

};

class Player final : public Person {
private:
    std::string magic_power;
public:
    Player(std::string name, int age, bool isHappy,\
             std::string type, std::string magic) \
             : Person(name, age, isHappy, type) {
        this->magic_power = magic;
    }

    void info() override {
        Person::info();
        std::cout << magic_power << std::endl;
    };
};

class Enemy final : public Person {

};


int main() {
    setlocale(LC_ALL, "rus");

    Player alex("Alex", 25, true, "player", "heal");
    alex.info();

    return 0;
}
