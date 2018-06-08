#include "gtest/gtest.h"
#include "factorial.hpp"

class FooTest : public ::testing::TestWithParam<int32_t> {
};

TEST_P(FooTest, pos) {
	EXPECT_GT(factorial(GetParam()), 0);
}

INSTANTIATE_TEST_CASE_P(Numbers, FooTest, ::testing::Values(2, 3, 4, 5, 6));
