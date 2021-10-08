#include "Debug.h"

int main() {
    constexpr Debug prob(true, false, true);
    if (prob.any()) {
        std::cerr << "error message" << '\n';
    }
}