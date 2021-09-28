#include <gtest/gtest.h>

namespace {

	struct Sample {
		int a_;
		int b_;
		int c_;
	};

}

TEST(StructuredBindings, _binding) {
	Sample sample{ 1,2,3 };
	auto& [a, b, c] = sample;
	a = 10;
	b = 11;
	c = 12;

	ASSERT_EQ(sample.a_, 10);
	ASSERT_EQ(sample.b_, 11);
	ASSERT_EQ(sample.c_, 12);
}