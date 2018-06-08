#include "array.hpp"
#include "gtest/gtest.h"
#include <iostream>

class ArrayTest : public ::testing::Test {
public:
	void	SetUp() {}

	void	TearDown() {}
};

int func(int *ptr)
{
	return (*ptr);
}

TEST_F(ArrayTest, outOfRange) {
	EXPECT_EXIT((func(nullptr), exit(0)), ::testing::KilledBySignal(SIGSEGV), ".*");
}
