#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    char temp;
    cin >> m >> n;
    vector board(m, vector(n, '.'));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (temp == '*')
                board[i][j] = '*';
            else
                board[i][j] = '0';
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '*') {
                for (int k = -1; k <= 1; k++) {
                    for (int l = -1; l <= 1; l++) {
                        if (i + k >= 0 && i + k < m && j + l >= 0 && j + l < n && board[i + k][j + l] != '*') {
                            board[i + k][j + l]++;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
