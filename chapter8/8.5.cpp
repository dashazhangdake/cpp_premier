#include <fstream>
#include <string>
#include <vector>
#include <iostream>

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

int main() 
{
    std::vector <std::string> contentvec;
    ParseFile("8.4in.txt", contentvec);

    for (const auto& line: contentvec) {
        std::cout << line << std::endl;
    }

    return 0;
}