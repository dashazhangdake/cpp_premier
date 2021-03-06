#include <initializer_list>
#include <iostream>

int sum(const std::initializer_list<int>& il)
{
    int sum = 0;
    for (auto i : il) sum += i;
    return sum;
}

int main(void)
{
    std::initializer_list<int> arr = {1, 2, 3, 4, 6};
    std::cout << sum(arr) << std::endl;
}