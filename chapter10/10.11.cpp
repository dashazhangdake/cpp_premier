#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// print containers like vector,deque, list, etc.
template <typename Sequence> auto println(Sequence const& seq) -> std::ostream &
{
    for (auto const& elem : seq) std::cout << elem << " ";
    return std::cout << std::endl;
}

void elimdups(std::vector<std::string>& vs)
{
    std::sort(vs.begin(), vs.end());
    auto new_end = std::unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

bool is_shorter(std::string const &lhs, std::string const &rhs) {
    return lhs.size() < rhs.size();
}

int main() {
    std::vector <std::string> vec1 {"1234", "2234", "1234", "Hi", "alan", "wang"};
    elimdups (vec1);
    std::stable_sort(vec1.begin(), vec1.end(), is_shorter);
    std::cout << "ex10.11 :\n";
    println(vec1);


    return 0;
}