#include <iostream>
#include "utility.h"
#include "mod_utility.h"

int main() {
	int ix = 10, iy = 5;
	double dx = 10.5, dy = 4.25;

	std::cout << "base::add(10, 5) = " << base::add(ix, iy) << "\n";
	std::cout << "mod::add(10, 5) = " << mod::add(ix, iy) << "\n\n";

	std::cout << "base::add(10.5, 4.25) = " << base::add(dx, dy) << "\n";
	std::cout << "mod::add(10.5, 4.25) = " << mod::add(dx, dy) << "\n";

	return 0;
}
