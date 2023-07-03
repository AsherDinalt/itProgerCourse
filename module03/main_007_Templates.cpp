#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>

//template <typename T, int len>
template <typename T>
class WorkArrays {
private:
    T* arr;
    int len;
public:
    // WorkArrays() { arr = new T[len]; this->len = len; };
    WorkArrays(int len) { arr = new T[len]; this->len = len; };
    ~WorkArrays() {delete[] arr;};

    void put_elements() {
        for(int i = 0; i < len; i++) { *(arr + i) = rand() % 100; };
    }

    int minimum() {
        T res = *arr;
        for(int i = 0; i < len; i++) { if(*(arr + i) < res) res = *(arr + i);};
        return res;
    }
};

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    
    int len = 12;
    WorkArrays<int> int_nums(len);
    int_nums.put_elements();
    std::cout << int_nums.minimum() << std::endl;


    return 0;
}