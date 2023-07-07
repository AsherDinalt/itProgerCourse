#include <iostream>
#include <vector>
#include <list>
#include <forward_list>


int main() {
    setlocale(LC_ALL, "rus");

    std::forward_list<int> nums = {1,2,3,4,5,6};
    int first = nums.front();
    nums.pop_front(); // удаление первого эл-та
    nums.push_front(123);


    return 0;
};