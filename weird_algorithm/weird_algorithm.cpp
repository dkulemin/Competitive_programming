#include <iostream>

using namespace std;

void weird_algorithm(long long n) {
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }
    }
    cout << 1 << endl;
}

#ifdef _TEST
#include "gtest/gtest.h"

string capture_stdout(long long n) {
    testing::internal::CaptureStdout();
    weird_algorithm(n);
    return testing::internal::GetCapturedStdout();
}

TEST(WeirdAlgorithm, EQ) {
    EXPECT_EQ(capture_stdout(1), "1\n");
    EXPECT_EQ(capture_stdout(2), "2 1\n");
    EXPECT_EQ(capture_stdout(3), "3 10 5 16 8 4 2 1\n");
    EXPECT_EQ(capture_stdout(5), "5 16 8 4 2 1\n");
    EXPECT_EQ(capture_stdout(447), "447 1342 671 2014 1007 3022 1511 4534 2267 6802 3401 10204 5102 2551 7654 3827 11482 5741 17224 8612 4306 2153 6460 3230 1615 4846 2423 7270 3635 10906 5453 16360 8180 4090 2045 6136 3068 1534 767 2302 1151 3454 1727 5182 2591 7774 3887 11662 5831 17494 8747 26242 13121 39364 19682 9841 29524 14762 7381 22144 11072 5536 2768 1384 692 346 173 520 260 130 65 196 98 49 148 74 37 112 56 28 14 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1\n");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

#else

int main() {
    long long n;
    cin >> n;
    weird_algorithm(n);
    return 0;
}

#endif
