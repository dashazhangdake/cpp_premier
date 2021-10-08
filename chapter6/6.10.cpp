#include <iostream>

void swap (int *const lhs, int *const rhs) {
    int temp = *lhs;
    *lhs = *rhs;
    *rhs = temp;
}

int main() {
    int a = 10;
    int b = 20;
    std::cout << "Prev a: " << a << "; b: " << b << std::endl;
    swap(&a, &b);
    std::cout << "After a: " << a << "; b: " << b << std::endl;
}