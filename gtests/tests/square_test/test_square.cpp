#include "square.hpp"
#include "gtest/gtest.h"

class SquareTest : public ::testing::Test {
public:
	void	SetUp() {}

	void	TearDown() {}
};

TEST_F(SquareTest, Pos) {
	Square four(4);
	Square six(6);
	
	EXPECT_EQ(16, four.getSquare());
	EXPECT_EQ(36, six.getSquare());
}

TEST_F(SquareTest, testDefault) {
	Square zero;

	EXPECT_EQ(0, zero.getSquare());
}
