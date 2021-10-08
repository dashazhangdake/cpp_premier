#include <iostream>

int main()
{
    auto fsum = [] (int a, int b) {return a + b;};
    int res = fsum(2, 3);
    std::cout << res << std::endl;
}