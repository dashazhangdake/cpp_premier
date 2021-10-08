#include <iostream>

void printarray (const int ia[], size_t s) {
    for (size_t i = 0; i != s; ++i) {
        std::cout << ia[i] << std::endl;
    }
}

int main() {
    int arr1 [3] = {1, 2, 3};
    printarray(arr1, 3); 
}