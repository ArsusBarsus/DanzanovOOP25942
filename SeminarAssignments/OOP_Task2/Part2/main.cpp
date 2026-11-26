#include <iostream>
#include "mod_utility.h"
#include "utility.h"

int main() {
	int x = 10;
	int y = 5;

	std::cout << "Current value of x = " << x << ", y = " << y << "\n\n";

	std::cout << "Current value of base::add(x, y) = " << base::add(x, y) << "\n";

	std::cout << "Current value of mod::add(x, y) = " << mod::add(x, y) << "\n";

	return 0;
}
