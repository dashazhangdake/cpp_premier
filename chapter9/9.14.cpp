#include <iostream>
#include <string>
#include <vector>
#include <list>

int main()
{
    std::list<const char*> l{"Mooophy", "pezy", "Queeuqueg"};
    std::vector<std::string> v;
    v.assign(l.cbegin(), l.cend());

    for (const auto& ch : v) {
        std::cout << ch << std::endl;
    }

    return 0;
}