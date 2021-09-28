#include <gtest/gtest.h>

TEST(LikelyUnlikely, _binding) {
	auto sample = 10;
	switch (sample) {
	[[unlikely]] case 1: break;
	[[likely]] case 10: break;
	}
}