#include <iostream>
#include <string>
#include <fstream>

namespace my_first {
    int some = 9;
    int test_func() { 
        std::cout << "func from namespace" << std::endl;
        return 0;
    }
}
namespace my_second {
    int some = 11;
}

using my_first::some;



int main() {
    setlocale(LC_ALL, "rus");

    my_first::test_func();
    
    return 0;
}