#include <iostream>
#include <stdexcept>

int main(void)
{
    int a, b;
    a = 10;
    b = 5;

    if (b == 0) throw std::runtime_error("divisor is 0");

    std::cout << static_cast<double>(a) / b << std::endl;

    return 0;
}