#include <iostream>
#include "weird_algorithm.h"

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