#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

struct PersonInfo {
    std::string name;
    std::vector<std::string> phones;
};

PersonInfo ParseFile(const std::string& fname) {
    PersonInfo pinfo;
    std::ifstream myfile;
    myfile.open(fname);

    std::istringstream linebuf;
    if (myfile) {
        std::string buf;
        std::string phone;
        while (std::getline(myfile, buf))
        {
            linebuf.clear();
            linebuf.str(buf);
            linebuf >> pinfo.name;
            while (linebuf >> phone)
            {
                pinfo.phones.push_back(phone);
            }
        }
    }
    return pinfo;
}


int main()
{
    PersonInfo entry1 = ParseFile("8.11input.txt");
    std::cout << entry1.name << ": ";
    for (const auto &n: entry1.phones) {
        std::cout << n << " ";
    }
    return 0;
}