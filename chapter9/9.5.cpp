#include <iostream>
#include <vector>

std::vector<int>::iterator find(std::vector<int> vect, int target) {
    auto vbegin = vect.begin();
    auto vend = vect.end();
    while (vbegin != vend)
    {
        if (*vbegin == target) {
            return vbegin;           
        }
        else {
            ++vbegin;
        }
    }
    return vend;
    
}
int main() {
    std::vector<int> v1 {1, 3, 5, 7, 9};
    std::cout << *(find (v1, 3)) << std::endl;
    return 0;
}