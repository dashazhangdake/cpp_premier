#include <iostream>
#include <stdexcept>
using std::cout;
using std::endl;
using std::runtime_error;


int main()
{
    int a, b;
    a = 10;
    b = 1;

    try {
        if (b==0) {
            throw runtime_error("divisor is 0");
        }
        else if (b == 1) {
            throw runtime_error("i just dont want 1");
        }
        else {
            cout << static_cast<double>(a) / b << endl;
        }
    }

    catch (runtime_error err1) {
        cout << err1.what();
    }

    return 0;
}