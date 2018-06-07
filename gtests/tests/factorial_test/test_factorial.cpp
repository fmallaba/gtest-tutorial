#include "factorial.hpp"
#include "gtest/gtest.h"

namespace {
	TEST(factorialTest, neg) {
		EXPECT_EQ(1, factorial(-5));
		EXPECT_EQ(1, factorial(-2));
		EXPECT_EQ(1, factorial(-8));
	}

	TEST(factorialTest, pos) {
		EXPECT_EQ(120, factorial(5));
		EXPECT_EQ(2, factorial(2));
		EXPECT_EQ(0, factorial(8));
	}
}
