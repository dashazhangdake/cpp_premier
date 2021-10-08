#include <iostream>
#include <list>
#include <vector>

std::vector<double> l2i (std::list<int> list1) {
    std::vector<double> res (list1.begin(), list1.end());
    return res;
}

int main() {
    std::list<int> l1 {1, 2, 5, 0, 9};

    std::vector<double> v1 = l2i(l1);
    for (auto const&ele: v1) {
        std::cout << ele << " ";
    }
    std::cout << '\n';
    return 0;
}