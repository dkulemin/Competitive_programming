#include "number_spiral.h"
#include <iostream>

#include <limits.h>

#include "gtest/gtest.h"


TEST(NumberSpiral, EQ) {
    EXPECT_EQ(13, number_spiral(4, 4));
    EXPECT_EQ(889344699930098742, number_spiral(170550340LL, 943050741LL));
}

using namespace std;

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}