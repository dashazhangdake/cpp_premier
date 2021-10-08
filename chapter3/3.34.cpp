#include <cstddef>
#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::iterator;

int main()
{
    // use array
    int ia[10];
    for (size_t i = 0; i < 10; ++i) ia[i] = i;
    
    int *p1 = ia;
    int *p2 = &(ia[1]);

    std::cout << p2 - p1 << '\n';
    p1 += p2 - p1; //p1 = p1 + p2 - p1 => p1 = p2
    std::cout << p1 << "\t" << p2 << '\n';
    std::cout << p2 - p1 << '\n';
    return 0;
}