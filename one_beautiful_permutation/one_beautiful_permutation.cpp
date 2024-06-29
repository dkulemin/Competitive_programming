#include <iostream>

using namespace std;

int main() {
    string left = "", right = "";
    int n;
    cin >> n;

    if (n > 1 & n <= 3) {
        cout << "NO SOLUTION" << "\n";
    } else {
        for (size_t i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                left += to_string(i) + " ";
            } else {
                right += to_string(i) + " ";
            }
        }

        cout << left << right << "\n";
    }

    return 0;
}