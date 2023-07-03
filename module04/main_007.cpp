#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>
#include <math.h>

auto main() -> int {
    setlocale(LC_ALL, "rus");
    std::string word = "Hello";
    std::cout << word.starts_with("He") << std::endl;
    std::cout << word.ends_with("llo") << std::endl;
    return 0;
}