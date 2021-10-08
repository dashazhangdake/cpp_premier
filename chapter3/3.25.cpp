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
            std::cout << e << " ";
        }
    }
    std::cout << std::endl;
}

std::vector<int> ParseLine(std::string line) {
    istringstream sline(line);
    int n;
    std::vector<int> row;
    while (sline >> n) {
      row.push_back(n);
    }
    return row;
}

int main() {
    std::ifstream myfile("3.25input.txt");
    std::vector<int> ivec {};
    std::vector<int> res_vec{};

    if (myfile) {
        std::string line;
        while (getline(myfile, line))
        {
            ivec = ParseLine(line);
        }    
    }

    std::vector <unsigned> scores(11, 0);
    for (auto g = ivec.begin(); g != ivec.end(); g++) {
        if (*g <= 100) {
            scores[(*g)/10]++ ;
        }    
    }

    printArray(scores);    
}