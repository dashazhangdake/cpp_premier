#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::vector<std::string> ParseFile(const std::string& fname) {
    std::vector<std::string> linevec; 
    std::ifstream myfile;
    myfile.open(fname);

    if (myfile) {
        std::string buf;
        while (std::getline(myfile, buf))
        {
            linevec.push_back(buf);   
        }
    }
    return linevec;
}

void readlinevec (std::vector<std::string> vi) {
    for (auto &ele: vi) {
        std::istringstream linestream(ele);
        std::string word;
        while (linestream >> word)
        {
            std::cout << word << " ";
        }
        std::cout << std::endl;
    }   
}

int main() 
{
    auto filecontent = ParseFile("8.4in.txt");
    readlinevec(filecontent);

    return 0;
}