#include <iostream>

void reset (int &op1) {
    op1 = 0;
}

int main() {
    int a = 10;
    int b = 20;
    std::cout << "Prev a: " << a << ". "; 
    reset(a);
    std::cout << "After a: " << a << '\n';
}