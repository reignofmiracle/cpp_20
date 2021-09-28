#include <gtest/gtest.h>

#include <numbers>

TEST(NumbersTest, _test) {
	std::clog << std::numbers::e << std::endl;
	std::clog << std::numbers::pi << std::endl;
	std::clog << std::numbers::sqrt2 << std::endl;
}