#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, val = 1;
    cin >> n;
    vector board(n, vector(n, 0));
    int a = 0, b = n / 2;
    board[a][b] = val++;

    while (val <= n * n) {
        int c = (a - 1 + n) % n;
        int d = (b + 1) % n;

        if (board[c][d] != 0) {
            c = (a + 1) % n;
            d = b;
        }

        a = c;
        b = d;
        board[a][b] = val++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}
