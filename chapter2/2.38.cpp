#include <iostream>

int main() {
    int a = 3;
    int &r = a;
    // same
    auto i1 = a;
    decltype(a) i2 = a;
    // differ 1
    auto h1 = r;
    decltype(r) h2 = r;
    // differ 2
    const int ca = 10;
    auto ca1 = ca;
    ca1 = 10;
    decltype(ca) ca2 = ca;
 //   ca2 = 100;
}