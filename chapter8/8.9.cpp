#include <iostream>
#include <sstream>

std::istream& func(std::istream& is)
{
    std::string buf;
    while (is >> buf) {
        std::cout << buf << "; ";
    } 
    std::cout << std::endl;
    is.clear();
    return is;
}

int main()
{
    std::string s1 = "Philadelphia Museum Of Art steps";
    std::istringstream testline(s1);
    std::istream& is = func(testline);
    std::cout << is.rdstate() << std::endl;
    return 0;
}