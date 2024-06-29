#include <iostream>
#include <vector>

using namespace std;

vector<int> permutation;
vector<vector<int>> result;
int *chosen;

template <typename T>
void print_vector(const vector<T>& vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

template <typename T>
void search(const T& n) {
    if (permutation.size() == n) {
        result.push_back(permutation);
    } else {
        for (size_t i = 0; i < n; i++) {
            if (chosen[i] | chosen[i + 1]) continue;
            chosen[i] = 1;
            permutation.push_back(i + 1);
            search(n);
            chosen[i] = 0;
            permutation.pop_back();
        }
    }
}

int main() {
    int n;
    cin >> n;

    chosen = (int *) malloc((n + 1) * sizeof(int));
    
    search(n);
    
    free(chosen);

    if (result.size()) {
        print_vector(result.at(0));
    } else {
        cout << "NO SOLUTION" << "\n";
    }

    return 0;
}