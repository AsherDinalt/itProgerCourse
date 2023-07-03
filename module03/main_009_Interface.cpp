#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>


class IError {
protected:
    virtual void write_error(char* mess) = 0;
};

class FileWork : IError {
public:
      void write_error(char* mess) override {
        std::cout << "Log error to file " << mess << std::endl;
      };  
};

class ConsoleWork : IError {
public:
      void write_error(char* mess) override {
        std::cout << "Log error to console " << mess << std::endl;
      };  
};

int main() {
    setlocale(LC_ALL, "rus");
    ConsoleWork cw;
    char err[] = "err no 123";
    cw.write_error(err);

    return 0;
}