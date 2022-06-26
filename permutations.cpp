#include <iostream>
#include <vector>

using namespace std;

vector<int> permutation;

void print_vector(const vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

void search(const int& n, bool* chosen) {
    if (permutation.size() == n) {
        print_vector(permutation);
    } else {
        for (size_t i = 0; i < n; i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i + 1);
            search(n, chosen);
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main() {
    int n;
    cin >> n;
    bool chosen[n + 1];
    search(n, chosen);
    return 0;
}