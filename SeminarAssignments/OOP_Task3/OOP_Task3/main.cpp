#include "utility.h"
#include "mod_utility.h"
#include <iostream>

int main() {
	int ix = 7, iy = 4;
	double dx = 7.8, dy = 4.6;

	//1
	std::cout << "1: TIn int -> TOut double/float\n";
	double res_d1 = base::add<double>(ix, iy);
	float res_f1 = mod::add<float>(ix, iy);
	std::cout << "base::add<double>(ix, iy) = " << res_d1 << "\n";
	std::cout << "mod::add<float>(ix, iy) = " << res_f1 << "\n\n";

	//2
	std::cout << "2: TIn double -> TOut int\n";
	int res_i1 = base::add<int>(dx, dy);
	int res_i2 = mod::add<int>(dx, dy);
	std::cout << "base::add<int>(dx, dy) = " << res_i1 << "\n";
	std::cout << "mod::add<int>(dx, dy) = " << res_i2 << "\n";

	return 0;
}
