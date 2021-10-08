#include <iostream>

int main() {
    int sum = 0, val = 1;
    while (val <= 10)
    {
        // sum = sum + val;
        // val = val + 1;

        // using comma operator
        sum = sum + val, val = val + 1;
    }
    std::cout << sum << std::endl;
    return 0;
}