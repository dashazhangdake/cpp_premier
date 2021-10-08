#include "account.h"

int main() {
    Account ac1;
    Account *ac2 = &ac1;

    std::cout << ac2->rate();
}