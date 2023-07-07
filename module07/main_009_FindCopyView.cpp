#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>

struct Car {
public:
    float speed, weight;
    std::string model;
    Car(float s, float w, std::string m) {
        speed = s; weight = w; model = m;
    }
};

int main() {
    setlocale(LC_ALL, "rus");

    std::vector<Car> cars {
        Car(100.0f, 512.0f, "ZAZ"),
        Car(250.0f, 1212.0f, "BMW"),
        Car(150.0f, 903.0f, "HONDA"),
    };

    //auto res = std::find(cars.begin(), cars.end(), 7);
    auto res = std::find_if(
        cars.begin(), 
        cars.end(), 
        [](const Car& car){ return car.speed >120.0f; }
    );

    if(res != cars.end()) {
        std::cout << "Found " << res->model << std::endl; 
    } else std::cout << "Not found" << std::endl;

    auto output = cars | 
            std::views::filter(
                [](const Car& car){ return car.speed >120.0f; }
        );
    
    std::for_each(
            begin(cars), 
            end(cars),
            [](Car& car){ 
                std::cout << car.model << std::endl; 
            }
        );

    std::sort(
        cars.begin(), 
        cars.end(), 
        [](const Car& a, const Car& b){ return a.speed < b.speed; }
        );
    
    std::cout << "===============" << std::endl;
    std::for_each(
            begin(cars), 
            end(cars),
            [](Car& car){ 
                std::cout << car.model << std::endl; 
            }
        );

    std::vector<Car> cars2;
    std::copy(cars.begin(), cars.end(), std::back_inserter(cars2));
    
    std::vector<Car> cars3;
    // копирование с условием
    std::copy_if(
        cars.begin(), 
        cars.end(), 
        std::back_inserter(cars3),
        [](const Car& car){ return car.speed >120.0f;}
        );    

    std::cout << "===============" << std::endl;
    
    // удаление элементов
    auto out2 = std::remove_if(
        cars.begin(), 
        cars.end(), 
        [](const Car& car){ return car.speed >120.0f; }
    );
    cars.erase(out2, cars.end());

    // for(auto el : output) std::cout << el.model << std::endl;

    return 0;
};