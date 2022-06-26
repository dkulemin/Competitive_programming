#include <iostream>
#include <vector>

using namespace std;

vector<int> permutation;

template <typename T>
void print_vector(const vector<T>& vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

template <typename T>
void print_array(const T* arr, const int n) {
    for (size_t i = 0; i < n; i++) {
        cout << arr[i] << " ";
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
    // print_array(chosen, n);
    search(n, chosen);
    return 0;
}