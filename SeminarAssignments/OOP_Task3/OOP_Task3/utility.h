#pragma once

namespace base {
	template <typename TOut, typename TIn>
	TOut add(TIn a, TIn b) {
		return static_cast<TOut>(a) + static_cast<TOut>(b);
	}
}
