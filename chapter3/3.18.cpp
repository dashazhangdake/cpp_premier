#include <vector>
#include <iostream>

using std::vector;

int main()
{
    // vector<int> ivec;
    vector <int> ivec (1);
    ivec[0] = 42;
    std::cout << ivec[0];
    return 0;
}