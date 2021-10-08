#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::ifstream;
using std::istringstream;

std::vector<int> ParseLine(std::string line) {
    istringstream sline(line);
    int n;
    char c;
    std::vector<int> row;
    while (sline >> n >> c && c == ',') {
      row.push_back(n);
    }
    return row;
}

int main() {
    std::ifstream myfile("3.20input.txt");
    std::vector<int> ivec {};
    std::vector<int> res_vec{};

    if (myfile) {
        std::string line;
        while (getline(myfile, line))
        {
            ivec = ParseLine(line);
        }    
    }
    
    if (ivec.empty()) {
        std::cout << "invalid input" << std::endl;
        return -1;
    }
    else if (ivec.size() == 1) {
        std::cout << ivec[0] << " don't have any adjacent elements.";
    }
    // else {
    //     res_vec.push_back(ivec[0]);
    //     res_vec.push_back(ivec[ivec.size() - 1]);
    //     for (decltype(ivec.size()) i = 0; i != ivec.size() - 1; ++i) {
    //         res_vec.push_back(ivec[i] + ivec[i + 1]);
    //     }
    // }

    else {
        res_vec.push_back(ivec[0]);
        res_vec.push_back(ivec[ivec.size() - 1]);
        for (auto beg = ivec.begin(); beg != ivec.end() - 1; beg ++) {
            res_vec.push_back(*beg + *(beg + 1));
        }
    }

    for (auto i: res_vec) {
        std::cout << i << " ";
    }
}