#pragma once
#include <iostream>

using namespace std;

long long int number_spiral(long long int x, long long int y) {
    bool swapped = false;
    if (x < y) {
        swap(x, y);
        swapped = true;
    }

    long long int diag_elem = x * x - x + 1;
    if (x % 2 == 0) {
        return swapped ? diag_elem - x + y : diag_elem + x - y;
    } else {
        return swapped ? diag_elem + x - y : diag_elem - x + y;
    }
}
