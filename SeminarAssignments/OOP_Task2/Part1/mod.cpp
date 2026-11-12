#include "mod.h"

// 1
int addModified(int& a, int b) {
	a = a * 2;
	return a + b;
}

// 2
int addConst(const int& a, const int& b) {
	return a + b;
}
