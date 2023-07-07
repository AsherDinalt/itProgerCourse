#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "rus");
 
    std::vector<int> numbers;
    int n = 11;
    numbers.resize(n);
    for(int i=0;i<numbers.size();i++)
        numbers[i] = (i + 1) * (i + 1);
    
    numbers.resize(3);
    numbers.push_back(11);
    numbers.push_back(22);
    numbers.pop_back(); // удаление последнего
    bool isEmpty = numbers.empty();
    //numbers.clear(); // очистка массива

    for(int el : numbers)
        std::cout << el << std::endl;    

    return 0;
};