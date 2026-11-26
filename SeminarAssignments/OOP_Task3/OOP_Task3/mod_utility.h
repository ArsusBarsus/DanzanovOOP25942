#pragma once
#include <random>

namespace mod {
	template <typename TOut, typename TIn>
	TOut add(TIn a, TIn b) {
		a = a * 2;
		TOut base_sum = static_cast<TOut>(a) + static_cast<TOut>(b);

		static thread_local std::mt19937 gen(std::random_device{}());
		std::bernoulli_distribution should_add(0.5);

		if (should_add(gen)) {
			std::uniform_int_distribution<int> bonus_dist(1, 50);
			return base_sum + static_cast<TOut>(bonus_dist(gen));
		}

		return base_sum;
	}
}
