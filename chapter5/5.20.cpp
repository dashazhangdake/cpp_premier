#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::ifstream;
using std::istringstream;

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
    std::ifstream myfile("5.20input.txt");
    std::vector<std::string> ivec {};

    if (myfile) {
        std::string line;
        while (getline(myfile, line))
        {
            ivec = ParseLine(line);
        }    
    }

    std::string prev_word;
    decltype(ivec.size()) cnt {0};
    while (cnt != ivec.size())
    {
        // if (isupper(ivec[cnt][0])) {
        //     if (ivec[cnt] == prev_word) {
        //         std::cout << "detected: ";
        //         std::cout << ivec[cnt] << std::endl;
        //         break;
        //     }
        //     else {
        //         prev_word = ivec[cnt];
        //     }
        // }
        if (!isupper(ivec[cnt][0])) {
            ++cnt;
            continue;
        }
        else{
            if (ivec[cnt] == prev_word) {
                std::cout << "detected: ";
                std::cout << ivec[cnt] << std::endl;
                break;
            }
            else {
                prev_word = ivec[cnt];
            }
        }
        ++cnt;
    }

    if (cnt == ivec.size()) {
        std::cout << "no repeat word";
    }


    return 0;
}