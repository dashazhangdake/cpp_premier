#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

template <typename T>
void printArray (vector<T> v) {
    if (v.empty()) {
        cout << "empty vector: " << "\b";
    }
    else {
        for (auto e : v) {
            std::cout << e << " ";
        }
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    printArray(v1);

    vector<int> v2(10);
printArray(v2);

    vector<int> v3(10, 42);
printArray(v3);

    vector<int> v4{10};
printArray(v4);

    vector<int> v5{10, 42};
printArray(v5);

    vector<string> v6{10};
printArray(v6);

    vector<string> v7{10, "hi"};
printArray(v7);

    return 0;
}