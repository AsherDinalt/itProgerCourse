#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>

class MyString {
private:
    long size;
    char* text;
public:
    MyString(char* text);
    ~MyString();
    char* get_text();
};

MyString::MyString(char* text) {
    size = strlen(text) + 1;
    this->text = new char[size];
    strncpy(this->text, text, size);
};

MyString::~MyString() { delete[] text; };

char* MyString::get_text() { return this->text; };

int main() {
    setlocale(LC_ALL, "rus");
    char some[] = "Hello";
    MyString str(some);
    std::cout << str.get_text() << std::endl;

    return 0;
}