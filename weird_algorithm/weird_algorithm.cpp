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

#else

int main() {
    long long n;
    cin >> n;
    weird_algorithm(n);
    return 0;
}

#endif
