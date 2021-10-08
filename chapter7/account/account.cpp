#include "account.h"

void Account::calculate() {
    amount = amount + amount * interestRate;
}

double Account::rate() {return interestRate;}