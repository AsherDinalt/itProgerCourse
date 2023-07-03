#include <iostream>
#include <string>


int main() {
    setlocale(LC_ALL, "Russian");
    // int num = 6;
    // std::cout << &num << std::endl;    

    // int num2 = 10;
    // int *p, *p2;
    // p = &num2; 
    // std::cout << p << "\t" << *p << std::endl;

    // p2 = &num;

    int a[] = {3,4,5,11,33,7};
    int (*ptr_a)[6] = &a; // массив указателей на элементы массива а[]
    int *ptr = a; // указатель на первый элемент массива

    for(int i = 0; i < 6; ++i) {
        std::cout << ptr[i] << "\t" << *(ptr + i) << std::endl;
    }


    return 0;
}    