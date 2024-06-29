#include <iostream>

using namespace std;

int main() {
    size_t n, moves;
    moves = 0;
    cin >> n;
    long long prev, cur;
    cin >> prev;
    for (size_t i = 0; i < n - 1; i++) {
        cin >> cur;
        if (cur < prev) moves += prev - cur;
        else prev = cur;
    }
    cout << moves << "\n";
    return 0;
}