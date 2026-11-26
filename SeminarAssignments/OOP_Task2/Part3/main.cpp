#include <iostream>
#include "utility.h"

int main() {
	int x = 10;
	int y = 5;

	double dx = 10.5;
	double dy = 4.25;

	std::cout << "add int: " << x << " + " << y << " = " << add(x, y) << "\n";

	std::cout << "add double: " << dx << " + " << dy << " = " << add(dx, dy) << "\n";

	return 0;
}
