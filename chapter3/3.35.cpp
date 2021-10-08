#include <iostream>
#include <iterator>

using std::begin;
using std::end;
using std::cout;
using std::endl;

int main()
{
    int arr[10] = {10, 29, 39, 45, 50, 50, 20, 30, 40, 55};
    int* b = begin(arr);
    int* e = end(arr);

    for (int* i = b; i != e; ++i) *i = 0;

    for (auto i : arr) cout << i << " ";
    cout << endl;

    return 0;
}