#include <iostream>

void print_intarr(const int*beg, const int *end) {
    while (beg != end)
    {
        std::cout << *beg << " ";
        beg++;
    }
    std::cout << std::endl;
}

int &get(int *arry, int index) 
{
    return arry[index];
}

int main(void)
{
    int ia[10];
    for(int i = 0; i !=10; ++i) {
        get(ia, i) = i;
    }
    print_intarr(std::begin(ia), std::end(ia));
    
    return 0;
}