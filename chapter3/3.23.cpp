#include <vector>
#include <iostream>
#include <iterator>

using std::vector;
using std::iterator;
using std::cout;
using std::endl;

int main()
{
    vector<int> ivec(10, 10);
    for (auto it = ivec.begin(); it != ivec.end(); it++) {
        *it = *it * 2;
    }
    for (auto val: ivec) {
        std::cout << val << " ";
    }

    return 0;
}