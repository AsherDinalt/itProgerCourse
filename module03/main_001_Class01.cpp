#include <iostream>
#include <string>
#include <fstream>

class Person {
public:
    std::string name;
    int age;
    bool isHappy;
    std::string hobbies[3] = {"","",""};
    void set_data(std::string name, int age, bool isHappy);
    void set_hobby(std::string* p, int n);    
    void get_hobby(std::string* p, int n);
};

void Person::set_data(std::string name, int age, bool isHappy) {
    this->name = name;
    this->age = age;
    this->isHappy = isHappy;
};

void Person::set_hobby(std::string* p, int n) {
        for(int i = 0; i < n; i++) 
            this->hobbies[i] = *(p + i);
}

void Person::get_hobby(std::string* p, int n) {
        for(int i = 0; i < 3; i++) 
            std::cout << hobbies[i] << std::endl;
}


int main() {
    setlocale(LC_ALL, "rus");

    Person alex;
    alex.set_data("Alex", 23, true);
    Person* p_alex = &alex;
    std::cout << p_alex->name << std::endl;
    std::cout << (*p_alex).age << std::endl;

    Person* max = new Person;
    max->isHappy = true;
    delete max;

    return 0;
}
