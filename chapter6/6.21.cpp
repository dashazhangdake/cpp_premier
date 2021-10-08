#include <iostream>

int larger (const int *lhs, int rhs) {
    int res = (*lhs > rhs) ? (*lhs): rhs;
    return res;
}

int main() {
    int a = 10;
    int b = 20;
    
    int l = larger(&a, b);
    std::cout << l << '\n';
    
    return 0;
}