#include <iostream>
#include <vector>

using namespace std;

vector<int> subset;

void print_vector(const vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

void search(int k, const int& n) {
    if (k == n + 1) {
        print_vector(subset);
    }
    else {
        subset.push_back(k);
        search(k + 1, n);
        subset.pop_back();
        search(k + 1, n);
    }
}

int main() {
    int n;
    cin >> n;
    search(1, n);
    return 0;
}