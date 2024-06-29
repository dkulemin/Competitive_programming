#include "number_spiral.h"
#include <iostream>

#include <limits.h>

#include "gtest/gtest.h"


// extern long long int number_spiral(long long int x, long long int y);

TEST(NumericSpiral, EQ) {
    // EXPECT_EQ(13, 13);
    EXPECT_EQ(13, number_spiral(4, 4));
    // cout << number_spiral(4LL, 4LL) << "\n";
}

using namespace std;

int main(int argc, char **argv) {
// int main() {
    // cout << "aaaa!";
    // cout << number_spiral(170550340LL, 943050741LL) << "\n";
    testing::InitGoogleTest(&argc, argv);
    cout << number_spiral(4LL, 4LL) << "\n";
    return RUN_ALL_TESTS();
    // return 0;
}