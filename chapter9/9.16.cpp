#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::list<int> list{1, 2, 3, 4, 5};
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{1, 2, 3, 4};
    
    std::vector<int> converted_list(list.begin(), list.end()); 
    std::cout << std::boolalpha << (converted_list == vec1) << std::endl;
    std::cout << std::boolalpha << (std::vector<int>(list.begin(), list.end()) == vec2) << std::endl;
}