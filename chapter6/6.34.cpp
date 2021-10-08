#include <iostream>

int factorial(int val) {
    if (val != 0) {
        return factorial(val - 1) * val;
    }
    else {
        return 1;
    }
}

int main() {
    int i {1};
    std::cout << ++i << ' '<<  i;
    std::cout << i << '\n'; 
    std::cout << factorial(1);
    return 0;
}