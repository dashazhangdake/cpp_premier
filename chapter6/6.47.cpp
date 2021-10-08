#include <iostream>
#include <vector>

void printvector(std::vector<int> vec) {
    #ifndef NDEBUG
        std::cout << vec.size() <<'\n';
    #endif

    if (vec.size()!=0) {
        std::cout << vec.front() << " ";
        vec.erase(vec.begin());
        printvector(vec);
    }
    else {
        std::cout << '\n';
    }
}

int main()
{
    std::vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    printvector(vec1);
    return 0;
}