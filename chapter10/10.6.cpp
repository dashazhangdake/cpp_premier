#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    std::vector<int> v;
    int size = 10;
    std::fill_n(std::back_inserter(v), size, 0);

    for (const auto &ele: v) {
        std::cout << ele << " ";
    }
    std::cout << std::endl;
}