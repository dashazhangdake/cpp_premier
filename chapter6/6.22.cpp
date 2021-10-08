#include <iostream>

void swap(const int *&lhs, const int *&rhs)
{
    const int *temp = lhs;
    lhs = rhs;
    rhs = temp;
}

int main()
{
    const int i = 42, j = 99;
    const int *ptri = &i;
    const int *ptrj = &j; 
    std::cout << ptri << "; " << ptrj << std::endl;
    swap(ptri, ptrj);
    std::cout << ptri << "; " << ptrj << std::endl;
}