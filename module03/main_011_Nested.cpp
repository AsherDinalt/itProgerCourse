#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <string.h>
#include <ctime>

class Car {
private:
    float speed;
    std::string model;
    class Engine {
    private:
        int horse_power;
        std::string model;
    public:
        Engine(int hp, std::string md) { horse_power = hp; model = md;};
        Engine() {};
        void start() {std::cout << "Start engine" << std::endl;};
        void turn_off() {std::cout << "Start stopped" << std::endl;};   
    };
    Engine* engine;
public:
    Car(float sp, std::string md, int hp, std::string mde) 
    {speed = sp; model = md; engine = new Engine(hp, mde);};


};

int main() {
    setlocale(LC_ALL, "rus");

   

    return 0;
}