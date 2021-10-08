#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <iostream>
#include <list>

int main() {
    std::list <int> l1 {2, 1, 3, 5, 7, 8, 10, 11};
    std::deque <int> odd;
    std::deque <int> even;
    for (auto &e: l1) {
        if (e % 2 == 0) {
            even.push_back(e);
        }
        else{
            odd.push_back(e);
        }
    }
    for (auto i : odd) {std::cout << i << " ";}
    std::cout << std::endl;
    for (auto i : even) {std::cout << i << " ";}
    std::cout << std::endl;
    return 0;
}