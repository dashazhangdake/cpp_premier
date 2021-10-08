#include <iostream>
#include <vector>
#include <memory>

std::vector<int>* dynamic_vect(std::initializer_list<int> il) {
    std::vector<int>* pres = new std::vector<int>(il);
    return pres;
}

std::shared_ptr<std::vector<int>> dynamic_vect_shptr (std::initializer_list<int> il) {
    std::vector<int> vi(il);
    auto ptrres = std::make_shared<std::vector<int>>(vi);
    return ptrres;
}

void printvect (std::vector<int>* pvec) {
    for (auto ele: *pvec) {
        std::cout << ele << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::initializer_list<int> ini0 = {1, 3, 5, 7 ,9};
    std::initializer_list<int> ini1 = {1, 6, 5, 7 ,9};
    auto p0 = dynamic_vect(ini0);
    auto p1 = dynamic_vect_shptr(ini1);

    printvect(p0);
    printvect(p1.get());

    delete p0;
    
    return 0;
}