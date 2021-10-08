#include <iostream>

int main() {
    int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
std::cout << ++d << '\n';
std::cout << c++ << '\n'; 
return 0;
}