#include "Strblob.h"
#include <fstream>
#include <iostream>

int main()
{
    std::ifstream ifs("12.20input.txt");
    StrBlob blob;
    for (std::string str; std::getline(ifs, str);) {
        blob.push_back(str);
        std::cout << str << '\n';
        }
    for (StrBlobPtr pbeg(blob.begin()), pend(blob.end()); pbeg != pend;
         pbeg.incr())
        std::cout << pbeg.deref() << std::endl;
    return 0;
}