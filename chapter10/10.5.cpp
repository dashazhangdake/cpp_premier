#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

int main()
{
    char c1[7] = "eipi10";
    char c2[7] = "eipi10";
    std::vector<std::string> roster1{c1};
    std::vector<std::string> roster2{c2};

    // std::vector<char*> roster1{c1};
    // std::list<char*> roster2{c2};
    
    std::cout << std::equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
    return 0;
}