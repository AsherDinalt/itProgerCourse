#include <iostream>
#include <vector>
#include <map>


int main() {
    setlocale(LC_ALL, "rus");

    // std::pair<std::string, float> p;
    // p.first = " ";
    // p.second = 3.115f;
    
    std::map<std::string, bool> apps;
    apps.insert(std::make_pair("Finder", true));
    apps.insert(std::pair<std::string, bool>("PhotoShop", false));
    apps.emplace("MS Word", true);

    std::string find_str = "Finder";
    auto find_item = apps.find(find_str);
    std::cout << find_item->first << std::endl;
    
    if(apps.contains("Finder")) apps.erase("Finder");

    for(auto el : apps) {
        std::cout << el.first << " " << el.second << std::endl;
    }

    std::multimap<std::string, float> acc_trans;
    acc_trans.emplace("Viktor", 2.18f);
    acc_trans.emplace("Viktor", 3.14f);
    


    // std::cout << apps["PhotoShop"] << std::endl;

    

    return 0;
};