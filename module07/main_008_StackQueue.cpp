#include <iostream>
#include <vector>
#include <stack>
#include <queue>


int main() {
    setlocale(LC_ALL, "rus");

    std::stack<int> nums;
    for(int i = 1; i <= 10; i++) {nums.push(i * i);};

    while(!nums.empty()) {
        std::cout << nums.top() << std::endl;
        nums.pop();
    }

    std::queue<int> nn1;
    for(int i = 1; i <= 10; i++) {nn1.push(i * i * i);};
    while(!nn1.empty()) {
        std::cout << nn1.front() << std::endl;
        nums.pop();
    }


    return 0;
};