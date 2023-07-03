#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "rus");
    for(int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
    };
    
    return 0;
}