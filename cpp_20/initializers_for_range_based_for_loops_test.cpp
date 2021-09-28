#include <gtest/gtest.h>

#include <array>

TEST(InitializersForRangeBasedForLoops, _binding) {
	for (std::array arr {1,2,3,4,5}; auto& item : arr) {
		std::clog << item << std::endl;
	}
}