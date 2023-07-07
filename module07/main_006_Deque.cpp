#include <iostream>
#include <vector>
#include <list>
#include <deque>


int main() {
    setlocale(LC_ALL, "rus");

    std::deque<int> nums {1,2,3,4,5,6,7,8,9};
    std::deque<int>::iterator iter;
    
    std::cout << nums[3] << '\n';
    std::cout << nums.front() << std::endl;

    for(int el : nums) std::cout << el << std::endl;
    iter = nums.begin();
    iter += 2;
    nums.erase(iter);
    for(int el : nums) std::cout << el << std::endl;
    
    return 0;
};