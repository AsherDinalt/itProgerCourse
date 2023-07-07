#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "rus");

    std::vector<float> nums = {3.14f, 2.71828f};
    std::vector<float>::iterator iter = nums.begin();

    while(iter != nums.end()) {
        std::cout << *iter << std::endl;
        iter++;
    }
    return 0;
};