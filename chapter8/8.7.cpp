#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::vector<std::vector<std::string>> transactioninfo (const std::string& fname) {
    std::ifstream myfile;
    myfile.open(fname);
    std::vector<std::vector<std::string>> info;
    if(myfile) {
        std::string linebuf;
        while (std::getline(myfile, linebuf))
        {
            std::vector<std::string> row;
            std::istringstream sline(linebuf);
            std::string item;
            while (sline >> item)
            {
                row.push_back(item);
            }
            info.push_back(row);
        }
    }
    return info;
}

int main(int argc, char *argv[])
{
    auto info1 = transactioninfo(argv[1]);

    std::ofstream fout(argv[2]);
    std::streambuf *coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(fout.rdbuf());
    
    for (auto& row: info1) {
        for (auto& col: row) {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout.rdbuf(coutbuf);
    std::cout << "DONE" << std::endl;
}