#include <iostream>

using namespace std;

int main() {
    unsigned long long n;
    cin >> n;

    long long full_sum, not_full_sum;

    full_sum = not_full_sum = 0;

    for (size_t elem = 1; elem <= n; elem++) {
        full_sum += elem;
    }

    long long temp;

    for (size_t elem = 1; elem < n; elem++) {
        cin >> temp;
        not_full_sum += temp;
    }

    cout << full_sum - not_full_sum << "\n";
    return 0;
}