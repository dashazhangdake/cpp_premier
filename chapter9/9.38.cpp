#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> v;
    std::string word;
    int i = 0;
    while (i != 258) {
        v.push_back(i);
        ++i;
        if (i == 257) {
        std::cout << v.capacity() << "\n";}
    }

    return 0;
}