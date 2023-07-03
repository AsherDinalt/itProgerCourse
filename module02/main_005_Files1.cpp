#include <iostream>
#include <string>
#include <fstream>

int main() {
    setlocale(LC_ALL, "rus");

    // std::ofstream file0;
    // file0.open("some.txt");
    // file0 << "My text file";
    // file0 << "\nSecond line";
    // file0.close();
    // std::ofstream file;
    // file.open("some.txt", std::ofstream::app);
    // file << "\nLine 3";
    // file << "\nLine 4";;
    // file.close();
    // std::ifstream infile;
    // std::string file_text;
    // infile.open("some.txt");
    // while(getline(infile, file_text)) {
    //     std::cout << file_text << std::endl;
    // };
    // infile.close();

    std::string file_name, user_text;
    std::cout << "Enter file name -> ";
    getline(std::cin, file_name);
    std::cout << "Enter text line -> ";
    getline(std::cin, user_text);
    std::ofstream file;
    file.open(file_name, std::ofstream::app);
    file << user_text +"\n";
    file.close();

    return 0;
}