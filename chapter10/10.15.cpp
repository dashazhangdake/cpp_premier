#include <iostream>

int main()
{
    int tocap {5};
    auto fsum = [tocap] (int a, int b) {return tocap + a + b;};
    int res = fsum(2, 3);
    std::cout << res << std::endl;
}