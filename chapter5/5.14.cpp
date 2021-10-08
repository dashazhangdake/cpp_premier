#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string prevword;
    string word;
    string repeat_word;

    int repeat = 0;
    int maxrepeat = 0;
    string sinput = "how now now now brown cow cow";
    std::istringstream wdss(sinput);
    while (wdss)
    {
        wdss >> word;
        if (word == prevword) {
            ++repeat;
        }
        else {
            repeat = 1;
            prevword = word;
        }

        if (maxrepeat < repeat) {
            maxrepeat = repeat;
            repeat_word = prevword;
        }
    }
    
    if (maxrepeat <= 1) {
        cout << "no repeat" << endl;
    }
    else {
        cout << "word " << repeat_word << " occured " << maxrepeat << "times" << endl;
    }

}