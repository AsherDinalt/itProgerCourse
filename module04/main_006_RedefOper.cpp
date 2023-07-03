#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>
#include <math.h>

class Point {
private:
    int x,y;
public:
    Point(int x, int y) {this->x = x; this->y = y;}
    int get_x() {return x;};
    int get_y() {return y;};
    Point operator + (Point& p2) { return Point(x + p2.x, y + p2.y); };
    void operator += (int n) {x += n; y += n;};
    bool operator == (Point p) { return (x == p.get_x()) && (y == p.get_y()); };
    void operator () (std::string word) {
        std::cout << word << ": " << x << " - " << y <<std::endl;
    };
    void operator [] (int el) {
        std::cout  << (el == 1 ? x : y)  <<std::endl;
    };
    operator float() const {
        return sqrt(x*x + y*y);
    };

};

auto main() -> int {
    setlocale(LC_ALL, "rus");

    Point p1(5,7), p2(-2,11);
    Point p = p1 + p2;
    std::cout << p.get_x() << " " << p.get_y() << std::endl;
    p += 12;
    std::cout << p.get_x() << " " << p.get_y() << std::endl;
    p("Element");
    p[1];

    float mod = p;
    
    return 0;
}