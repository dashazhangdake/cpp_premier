#include <iostream>
#include <memory>

void process(std::shared_ptr<int> ptr) {
    std::cout << "Shared pointer: " << ptr << ":" << *ptr<< " being used: "<< ptr.use_count() << '\n';
}


int main() {
    std::shared_ptr<int> p(new int(42));
    // process(p);
    // std::cout << "Shared pointer: " << p << ":" << *p<< ", being used: "<< p.use_count() << '\n';
    // process(std::shared_ptr<int>(p));
    // std::cout << "Shared pointer: " << p << ":" << *p<< ", being used: "<< p.use_count() << '\n';
    
    process(std::shared_ptr<int>(p.get()));
    std::cout << "Shared pointer: " << p << ":" << *p<< ", being used: "<< p.use_count() << '\n';
    return 0;
}