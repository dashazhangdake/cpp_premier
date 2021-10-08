#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    //! Exercise 10.3
    std::vector<int> v = {1, 2, 3, 4};
    std::cout << "ex 10.03: " << std::accumulate(v.cbegin(), v.cend(), 0)
              << std::endl;

    //! Exercise 10.4
    std::vector<double> vd = {1.1, 0.5, 3.3};
    std::cout << "ex 10.04: " << std::accumulate(vd.cbegin(), vd.cend(), 0)
              << std::endl; //!   ^<-- note here.

    std::vector<double> vd1 = {1.1, 0.5, 3.3};
    std::cout << "ex 10.04: " << std::accumulate(vd1.cbegin(), vd1.cend(), 0.0)
              << ' ' << int(std::accumulate(vd1.cbegin(), vd1.cend(), 0.0)) << std::endl;
    return 0;
}