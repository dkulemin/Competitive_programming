#include <iostream>
#include "number_spiral.h"

using namespace std;

// long long int number_spiral(long long int x, long long int y) {
//     bool swapped = false;
//     if (x < y) {
//         swap(x, y);
//         swapped = true;
//     }

//     long long int diag_elem = x * x - x + 1;
//     if (x % 2 == 0) {
//         return swapped ? diag_elem - x + y : diag_elem + x - y;
//     } else {
//         return swapped ? diag_elem + x - y : diag_elem - x + y;
//     }
// }

int main() {
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++) {
        long long int x, y;
        cin >> x;
        cin >> y;

        cout << number_spiral(x, y) << "\n";
    }

    return 0;
}