#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <iostream>
#include <list>

void ParseFile(const std::string& fname, std::vector<std::string> &vec) {
    std::ifstream myfile;
    myfile.open(fname);

    if (myfile) {
        std::string buf;
        while (myfile >> buf)
        {
            vec.push_back(buf);   
        }
    }
}

std::deque<std::string> fillingdeque(std::vector<std::string> vi) {
    std::deque<std::string> d;
    for (auto iterator = vi.begin(); iterator != vi.end(); ++iterator) {
           d.push_back(*iterator);
    }
    return d;
}

std::list<std::string> fillinglist(std::vector<std::string> vi) {
    std::list<std::string> l;
    auto iter = l.begin();
    for (auto iterator = vi.begin(); iterator != vi.end(); ++iterator) {
        // iter = l.insert(iter, *iterator);
        l.push_back(*iterator);
    }
    return l;
}

int main()
{
    std::vector<std::string> v1;
    std::deque<std::string> d1;
    std::list<std::string> l1;
    ParseFile("9.3input.txt", v1);
    d1 = fillingdeque(v1);
    l1 = fillinglist(v1);

    for (auto &ele: d1) {
        std::cout << ele << " " ;
    }
    std::cout << std::endl;

    for (auto &ele: l1) {
        std::cout << ele << " ";
    }

    return 0;
}