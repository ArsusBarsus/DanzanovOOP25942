#pragma once
#include <random>

namespace mod {
	template <typename T>
	T add(T a, T b) {
		a = a * 2;
		T base_sum = a + b;

		static thread_local std::mt19937 gen(std::random_device{}());
		std::bernoulli_distribution should_add(0.5);

		if (should_add(gen)) {
			std::uniform_int_distribution<int> bonus_dist(1, 50);
			return base_sum + static_cast<T>(bonus_dist(gen));
		}

		return base_sum;
	}
}
