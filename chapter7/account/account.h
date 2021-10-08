#include <iostream>

class Account {
public:
    void calculate();
    static double rate();
    static void rate(double r);

private:
    std::string owner = "default";
    double amount = 100;
    static double interestRate;
    static double initRate();
};
