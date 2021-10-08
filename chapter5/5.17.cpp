#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool prefix (vector <int> v1, vector <int> v2) {
    auto size = v1.size() < v2.size() ? v1.size() : v2.size();
    for (decltype(v1.size()) i = 0; i != size; ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}



int main() {
    vector <int> v1 {0, 1, 2, 3};
    vector <int> v2 {0, 1, 2, 3, 5, 6, 7};
    vector <int> v3 {0, 2, 2, 3};

    cout << prefix(v1, v3);
    cout << prefix(v1, v2);
}