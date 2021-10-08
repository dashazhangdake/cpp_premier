#include <iostream>

using std::begin;
using std::cout;
using std::end;
using std::endl;

// Use marker to specify the extent of an array
void print_charstring(const char* cstring_ptr) {
    if (cstring_ptr) {
        while (*cstring_ptr)
        {
            std::cout << *cstring_ptr;
            cstring_ptr = cstring_ptr + 1;
        }
    }
    std::cout << std::endl;
}

// Use standard lib conventions
void print_intarr(const int*beg, const int *end) {
    while (beg != end)
    {
        cout << *beg << " ";
        beg++;
    }
    std::cout << std::endl;
}

// Explicit Passing the size parameters
void print_arr(const int arri[], size_t size) {
    for (size_t i = 0; i != size; ++i) {
        std::cout << arri[i] << " ";
    }
    std::cout << std::endl;
}

// Array Reference
void print_by_ref(int (&arr)[5]) {
    for (auto ele: arr) {
        cout << ele << " ";
    }
    cout << endl;
}
 


int main()
{
    int i = 0, j[5] = {0, 1, 2, 3, 4};
    char ch[7] = "haoqiu";

    print_charstring(ch);
    print_intarr(begin(j), end(j));
    print_by_ref(j);

    return 0;
}