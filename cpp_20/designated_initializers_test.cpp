#include <gtest/gtest.h>

struct Employee {
	char a_;
	char b_;
	int c_;
	int d_ {10'000};
};

TEST(DesignatedInitializersTest, _binding) {
	auto sample = Employee{
		.a_ = 1,
		.b_ = 2,
		.c_ = 3,
		.d_ = 4,
	};

	ASSERT_TRUE(sample.a_, 1);
	ASSERT_TRUE(sample.b_, 2);
	ASSERT_TRUE(sample.c_, 3);
	ASSERT_TRUE(sample.d_, 4);
}