#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::ifstream;
using std::istringstream;

template <typename T>
void printArray (std::vector<T> v) {
    if (v.empty()) {
        std::cout << "empty vector: " << "\b";
    }
    else {
        for (auto e : v) {
            std::cout << e << ",";
        }
    }
    std::cout << std::endl;
}

std::vector<std::string> ParseLine(std::string line) {
    istringstream sline(line);
    std::string words;
    std::vector<std::string> row;
    while (sline >> words) {
      row.push_back(words);
    }
    return row;
}

int main() {
    std::ifstream myfile("3.17input.txt");
    std::vector<std::string> ivec {};
    // std::vector<std::string> res_vec{};

    if (myfile) {
        std::string line;
        while (getline(myfile, line))
        {
            ivec = ParseLine(line);
        }    
    }

    for (decltype(ivec.size()) i = 0; i != ivec.size(); i++) {
        for (auto &c: ivec[i]) {
            c = toupper(c);
            std::cout << c;
        }
        if ((i+1) % 8 == 0) {
            std::cout << "\tROW: " << (i + 1) / 8 <<  std::endl;
        } else {
            std::cout << "; ";
        }
    }
    std::cout << '\n' << "METHOD using iterators" << std::endl;
    int col = 1;
    bool empty;
    for (auto e = ivec.begin(); e != ivec.end(); ++e) {
        empty = (*e).empty();
        for (auto c = (*e).begin(); c != (*e).end() && !isspace(*c); c++) {
            *c = toupper(*c);
            std::cout << *c;
        }
        if ((col) % 8 == 0) {
            std::cout << "\tROW: " << col / 8 <<  std::endl;
        } else {
            std::cout << "; ";
        }
        col = col + 1;
    }

    return 0;
}