#include <iostream>
#include <string>
#include <fstream>

namespace my_homework {
    void create_files(int f_num, std::string *f_names, std::string *f_texts) {
        std::ofstream file;
        for(int i = 0; i < f_num; i++) {
            file.open(f_names[i], std::ofstream::app);
            file << f_texts[i];
            file.close();
            std::cout << f_texts[i] << std::endl;
        }
    };
}


int main() {
    setlocale(LC_ALL, "rus");
    int f_num = 3;

    std::string *f_names = new std::string[f_num];
    std::string *f_texts = new std::string[f_num];

    for (int i = 0; i < f_num; i++) {
        std::cout << "Enter name for " << i + 1 << " file: ";
        getline(std::cin, f_names[i]);
        std::cout << "Enter content for " << i + 1 << " file: ";
        getline(std::cin, f_texts[i]);
    };

    try {
        my_homework::create_files(f_num, f_names, f_texts);
    } 
    catch(std::exception& ex) {
        std::cout << ex.what() << std::endl;
    };

    delete[] f_names;
    delete[] f_texts;
    return 0;
}