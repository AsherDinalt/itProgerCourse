#include <iostream>
#include <string>
#include <fstream>

int main() {
    setlocale(LC_ALL, "rus");

    std::ifstream file;
    file.exceptions(std::ifstream::badbit | std::ifstream::failbit);
    try {
        file.open("some123.txt");
        std::cout << "Success" << std::endl;
        file.close();
    }
    catch(std::ifstream::failure& ex) {
        std::cout << "Error" << std::endl;
    }
    catch(std::exception& ex) { // Ловит вообще все ошибки
        std::cout << ex.what() << std::endl;
    }

    
    return 0;
}