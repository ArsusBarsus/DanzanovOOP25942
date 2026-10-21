#include "mod_utility.h"
#include <random>

int addModified(int a, int b) {
	int base_sum = a + b;

	static thread_local std::mt19937 gen(std::random_device{}());
	std::bernoulli_distribution should_add(0.5);

	if (should_add(gen)) {
		std::uniform_int_distribution<int> bonus_dist(1, 50);
		return base_sum + bonus_dist(gen);
	}

	return base_sum;
}
