#include <iostream>
#include "utility.h"
#include "mod_utility.h"

int main() {
	int a = 0;
	int b = 0;

	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;

	std::cout << "add: " << add(a, b) << std::endl;


	std::cout << "\naddModified tries:\n";
	for (int i = 1; i <= 5; ++i) {
		std::cout << "Try " << i << ": " << addModified(a, b) << std::endl;
	}

	return 0;
}
