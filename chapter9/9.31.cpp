#include <iostream>
#include <forward_list>
#include <list>
#include <vector>

using std::vector;
using std::list;
using std::forward_list;
using std::cout;
using std::endl;

template <typename T>
void print_container (T const & conti) {
    typename T::const_iterator iter = conti.begin();
    typename T::const_iterator end = conti.end();
    while (iter != end)
    {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;
}

void RemoveDuplicateVec (vector<int> &v1) {
    auto iter = v1.begin();
    while (iter != v1.end())
    {
        if (*iter % 2 != 0) {
            v1.insert(iter, *iter);
            iter = iter + 2;
        }
        else {
            iter = v1.erase(iter);
        }
    }
}

void RemoveDuplicateList (list<int> &v1) {
    auto iter = v1.begin();
    while (iter != v1.end())
    {
        if (*iter % 2 != 0) {
            v1.insert(iter, *iter);
            ++iter;
        }
        else {
            iter = v1.erase(iter);
        }
    }
}

void RemoveDuplicateFwdlist (forward_list<int> &v1) {
    auto curr = v1.begin();
    auto prev = v1.before_begin();

    while (curr != v1.end())
    {
        if (*curr % 2 != 0) {
            curr = v1.insert_after(curr, *curr);
            prev = curr;
            ++curr;
        }
        else {
            curr = v1.erase_after(prev);
        }
    }
}

int main() {
    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> li = {0, 1, 2, 4 , 3, 33, 4, 5, 6, 7, 8, 9};
    forward_list<int> fi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    RemoveDuplicateVec(vi);
    print_container(vi);

    RemoveDuplicateList(li);
    print_container(li);

    RemoveDuplicateFwdlist(fi);
    print_container(fi);

    return 0;
}