#include <iostream>
#include "weird_algorithm.h"

#include "gtest/gtest.h"

using namespace std;


TEST(WeirdAlgorithm, EQ) {
    testing::internal::CaptureStdout();
    weird_algorithm(3);
    string out = testing::internal::GetCapturedStdout();
    EXPECT_EQ(out, "3 10 5 16 8 4 2 1\n");
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
