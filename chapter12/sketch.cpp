#include <iostream>
#include <memory>

std::shared_ptr<int> fool() {
    int i = 42;
    int q = 412;
    auto p =  std::make_shared<int>(i);
    std::cout << p.use_count() << std::endl;
    auto r =  std::make_shared<int>(q);
    r = p;
    std::cout << r.use_count();
    std::cout << std::endl;
    return p;
}

int main() {
    std::cout << fool().use_count();

    return 0;
}