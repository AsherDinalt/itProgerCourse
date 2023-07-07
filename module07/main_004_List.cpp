#include <iostream>
#include <vector>
#include <list>


int main() {
    setlocale(LC_ALL, "rus");

    std::list<int> nums = {33,1,2,89};
    std::list<int>::iterator iter;

    // std::cout << nums.front() << std::endl;
    // std::cout << nums.back() << std::endl; 
    nums.push_back(123);
    nums.push_front(0);
    // nums.pop_back();
    // nums.pop_front();
   
    iter = nums.begin();
    iter++;
    nums.insert(iter, -12);
    iter = nums.begin();
    while(iter != nums.end()) {
        std::cout << *iter << std::endl;
        iter++;
    };


    return 0;
};