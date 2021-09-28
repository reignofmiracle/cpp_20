#include <gtest/gtest.h>

#include <initializer_list>

namespace {

void print(std::initializer_list<int> values) {
	for (auto& item : values) {
		std::clog << item << std::endl;
	}
}

}

TEST(InitializerLists, _binding) {
	print({ 1,2,3,4,5,6 });
}