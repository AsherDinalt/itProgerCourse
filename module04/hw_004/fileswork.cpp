#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include "fileswork.h"

FilesWork::FilesWork(std::string name) { this->name = name; };
void FilesWork::read_file() {
    std::ifstream file;
    std::string file_text;
    file.open(name);  
    while(getline(file, file_text)) {
        std::cout << file_text << std::endl;
    };
    file.close(); 
};
void FilesWork::write_file(std::string text) {
    std::ofstream file;
    file.open(name);
    file << text;
    file.close();
    std::cout << text << std::endl;    
};
void FilesWork::operator+=(std::string text) {
    std::ofstream file;
    file.open(name, std::ios_base::app);
    file << text;
    file.close();    
};
