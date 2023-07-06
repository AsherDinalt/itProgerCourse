#include <iostream>
#include <cassert>
#include "my_array.h"

int main() {
    setlocale(LC_ALL, "rus");
    
    my_array<int> intArr(10);
    for(int i = 0; i < intArr.get_length(); i++) {
        intArr[i] = i * i;
    };

    intArr.print();

    return 0;
};