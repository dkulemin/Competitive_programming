#include <iostream>

using namespace std;

int n;
int cnt = 0;
int *col, *diag1, *diag2;

void search(int y) {
    if (y == n) {
        cnt++;
        return;
    }
    for (int x = 0; x < n; x++) {
        if (col[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
        search(y + 1);
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
    }
}

int main() {
    cin >> n;
    col = (int *) malloc(n * sizeof(int));
    diag1 = (int *) malloc(2 * n * sizeof(int));
    diag2 = (int *) malloc(2 * n * sizeof(int));

    search(0);

    cout << "posible positions of queens: " << cnt << "\n";

    free(col);
    free(diag1);
    free(diag2);

    return 0;
}