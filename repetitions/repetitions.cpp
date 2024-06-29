#include <iostream>

using namespace std;

int main() {
    string sequence;
    long long cur_cnt = 0;
    long long max_cnt = 0;
    char cur_char = 'A';
    cin >> sequence;
    for (char& elem : sequence) {
        if (cur_char == elem) cur_cnt++;
        else {
            cur_char = elem;
            if (cur_cnt > max_cnt) max_cnt = cur_cnt;
            cur_cnt = 1;
        }
    }
    if (cur_cnt > max_cnt) max_cnt = cur_cnt;
    cout << max_cnt << "\n";
    return 0;
}