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
	std::cerr << "Error null ptr";
	return (*ptr);
//	Array arr(5, 42);

//	int n = arr[93];
}

TEST_F(ArrayTest, outOfRange) {
	//EXPECT_EXIT((func(nullptr), exit(0)), ::testing::KilledBySignal(SIGSEGV), ".*");
	ASSERT_DEATH((func(nullptr), exit(0)), "error null .*") << "Success";
}
