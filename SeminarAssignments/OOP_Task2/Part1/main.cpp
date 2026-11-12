#include <iostream>
#include "mod.h"

int main() {
    int x = 10;
    int y = 50;

    std::cout << "Original value: x = " << x << ", y = " << y << "\n\n";

    //2
    std::cout << "Section 2" << "\n";
    int sumConst = addConst(x, y);
    std::cout << "addConst(x, y) = " << sumConst << "\n";
    std::cout << "Current value of x: " << x << "\n\n";

    //1
    std::cout << "Section 1" << "\n";
    int sumModified = addModified(x, y);
    std::cout << "addModified = " << sumModified << "\n";
    std::cout << "Current value of x: " << x << "\n";

    return 0;
}
