#include <iostream>
#include "number_spiral.h"

using namespace std;


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