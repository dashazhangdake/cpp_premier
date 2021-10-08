#include <iostream>
#include <string>
#include <memory>

using std::string;
using std::unique_ptr;

int main()
{
    unique_ptr<string> p1(new string("haoqiu"));
    std::cout << *p1 << std::endl;
    
    // unique_ptr<string> p2a(p1);
    // unique_ptr<string> p2b = p1;
    
    // Correct ways to transfer ownerships
    // a) using release 
    unique_ptr<string> p3(p1.release());
    std::cout << *p3 << std::endl;
    // b) using reset; release pairs
    unique_ptr<string> p4(new string("lala"));
    p4.reset(p3.release());
    std::cout << *p4 << std::endl;

    std::cout << "final states\n";
    // std::cout << *p1 << std::endl;
    // std::cout << *p3 << std::endl;
    std::cout << *p4 << std::endl;
    return 0;
}