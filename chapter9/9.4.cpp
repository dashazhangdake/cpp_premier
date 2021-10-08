#include <iostream>
#include <vector>

bool find(std::vector<int> vect, int target) {
    auto vbegin = vect.cbegin();
    auto vend = vect.cend();
    while (vbegin != vend)
    {
        if (*vbegin == target) {
            return true;           
        }
        else {
            ++vbegin;
        }
    }
    return false;
    
}
int main() {
    std::vector<int> v1 {1, 3, 5, 7, 9};
    std::cout << find (v1, 3) << std::endl;
    return 0;
}