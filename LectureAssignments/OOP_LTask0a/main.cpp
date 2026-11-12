#include <iostream>
#include "module1.h"
#include "midule2.h"

int main(int argc, char** argv) {
	std::cout << "Hello World!" << "\n";

	std::cout << Module1::getMyName() << "\n";
	std::cout << Module2::getMyName() << "\n";

	using namespace Module1;
	std::cout << getMyName() << "\n";
	std::cout << Module1::getMyName() << "\n";

	//using namespace Module2;
	//std::cout << getMyName() << "\n";

	using Module2::getMyName;
	std::cout << getMyName() << "\n";
}
