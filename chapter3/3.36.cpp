#include <iostream>
#include <vector>
#include <iterator>

using std::begin;
using std::end;
using std::cout;
using std::endl;
using std::vector;

template <typename T>
bool compareArray1 (T a[], T b[], size_t sizea, size_t sizeb) {
    if (sizea != sizeb) {
        return false;
    }
    else {
        for (size_t i = 0; i <= sizea; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
}

template <typename T>
bool compareArray2 (T arr1[], T arr2[]) {
    T *beg1 = begin(arr1);
    T *beg2 = begin(arr2);
    T *end1 = end(arr1);
    T *end2 = end(arr2);

    if ((beg2 - end2) != (beg1 - end1)) {
        return false;
    }
    else {
        for (T *i = beg1,i != end1 ; i++) {
            for (T *j = beg2, j != end2; j++) { 
                if (*i != *j) {
                    return false;
                }
            }
        }
        return true;
    }
}


int main()
{
    int arr1[3] = {0, 2, 4};
    int arr2[3] = {0, 2, 4};

    if (compareArray2(arr1, arr2))
        {cout << "The two arrays are equal." << endl;}
    else
        {cout << "The two arrays are not equal." << endl;}

    cout << "==========" << endl;

    vector<int> vec1 = {0, 1, 2};
    vector<int> vec2 = {0, 1, 2};

    if (vec1 == vec2)
        cout << "The two vectors are equal." << endl;
    else
        cout << "The two vectors are not equal." << endl;

    return 0;
}