#include <iostream>
#include <memory>


int main() {
    auto sp = std::make_shared<int>(52);
    auto p = sp.get();
    delete p;
    
    return 0;
}