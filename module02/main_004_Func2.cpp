#include <iostream>
#include <string>

void summa(int a, int b);
void summa(float a, float b);
void summa(std::string *a, std::string *b);

int minimal(int *a, int n) {
    int res = *a;
    if (n < 2) return res;
    for(int i = 1; i < n; i++) {
        if (*(a + i) < res) res = *(a + i);
    };
    return res;
};

int main() {
    setlocale(LC_ALL, "rus");

    // std::string hello = "Hello,", world = " World!";
    // summa(&hello, &world);

    int a1[] = {34, 17856, 33, 1, -8, -256, 1024, 4096};
    int *p_a1 = a1;
    //std::cout << sizeof(a1)/sizeof(a1[0]) << std::endl;
    std::cout << minimal(p_a1, sizeof(a1)/sizeof(a1[0])) << std::endl;

    return 0;
}

void summa(int a, int b) {
    std::cout << a + b << std::endl;
}

void summa(float a, float b) {
    std::cout << a + b << std::endl;
}

void summa(std::string *a, std::string *b) {
    std::cout << *a + *b << std::endl;
}
