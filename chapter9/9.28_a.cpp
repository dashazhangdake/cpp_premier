#include <iostream>
#include <forward_list>

void addstr(std::forward_list<std::string>& flist, std::string str1, std::string str2) {
    auto prev = flist.before_begin();
    auto curr = flist.begin();
    bool foundflag = false;

    while (curr != flist.end())
    {
        if (*curr == str1) {
            foundflag = true;
            curr = flist.insert_after(curr, str2);
            prev = curr;
            ++curr;
        }
        else {
            prev = curr;
            ++curr;
        }
    }

    if (!foundflag) {
        flist.insert_after(prev, str2);
    }
}

int main() {
    std::forward_list<std::string> l1 {"king", "queen", "king", "kin", "kin"};

    addstr(l1, "kin", "prince");
    for (const auto& ele: l1) {
        std::cout << ele << " ";
    }
    std::cout << std::endl;

    return 0;
}