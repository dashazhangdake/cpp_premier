#include <iostream>
#include <forward_list>

void remove_odd(std::forward_list<int>& flist) {
    auto prev = flist.before_begin();
    auto curr = flist.begin();
    while (curr != flist.end())
    {
        if (*curr % 2 == 0) {
            prev = curr;
            ++curr;
        }
        else {
            curr = flist.erase_after(prev);
        }
    }
}

int main() {
    std::forward_list<int> l1 {1, 0, 3, 4, 5, 10, 7, 9};
    remove_odd(l1);
    
    for (const auto& ele: l1) {
        std::cout << ele << " ";
    }
    std::cout << std::endl;
    return 0;
}