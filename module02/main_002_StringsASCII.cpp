#include <iostream>
#include <string>


int main() {
    setlocale(LC_ALL, "rus");

    std::string word = "hello", word2 = "World!";
    word[0] = 'H';
    std::cout << word << std::endl;
    std::cout << size(word) << std::endl;
    std::cout << word + " " + word2 << std::endl;

    if(!word.empty()) 
        std::cout << size(word) << std::endl;

    // ASCII

    char sym = '0';

    for(short i = 0; i<255; ++i) {
        std::cout << (char)i << std::endl;
    }

    return 0;
}    