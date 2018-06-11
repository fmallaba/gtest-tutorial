#include "gtest/gtest.h"


int func(int *ptr)
{
    return (*ptr);
}

TEST(ArrayTest, outOfRange) {
    EXPECT_EXIT((func(nullptr), exit(0)), ::testing::KilledBySignal(SIGSEGV), ".*");
}
