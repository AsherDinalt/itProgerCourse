#include <iostream>
#include <cassert>
#include "my_array.h"

template<typename T>
my_array<T>::my_array(int length) : len(length) {
    assert(len >= 0);
    data = nullptr;
    if(len > 0) { data = new T[len];}
};
template<typename T>
my_array<T>::~my_array() {delete[] data;};

template<typename T>
void my_array<T>::empty() { delete[] data; data = nullptr; len = 0; };

template<typename T>
void my_array<T>::resize(int new_size) {
    if(len == new_size) return;
    if(len <= 0) {
        this->empty();
        return;
    };
    int* new_data = new T[new_size];
    if(len > 0) {
        int elem = (new_size > len) ? len : new_size;
        for(int i = 0; i < elem; i++) 
            new_data[i] = data[i]; // переопределяем далее []
    }    
    delete[] data;
    data = new_data;

};

template<typename T>
T& my_array<T>::operator[](int index) {
    assert(index >=0 && index < len);
    return *(data + index);
};

template<typename T>
void my_array<T>::print() {
    for(int i = 0; i < len; i++) {std::cout << *(data + i) << std::endl; };
};

template<typename T>
int my_array<T>::get_length() { return len;};
