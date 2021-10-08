#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto &e: ivec) {
        e = (e % 2 == 0) ? e : (e * 2);
    }

    for (auto i : ivec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}