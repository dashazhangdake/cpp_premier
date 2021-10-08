#include <iostream>
#include <memory>

void process(std::shared_ptr<int> ptr) {
    std::cout << "Shared pointer: " << ptr << ":" << *ptr<< " being used: "<< ptr.use_count() << '\n';
}


int main() {
    auto p = new int(52);
    auto sp = std::make_shared<int> ();
    *sp = 42;

    // process(p);  // plain ptr cannot be converted to smt ptr
    // process(new int ()) // plain ptr cannot be converted to smt ptr

    process(sp); // perfectly fine

    process(std::shared_ptr<int>(p)); // okay but danger
    // delete p;  // double free
    
    return 0;
}