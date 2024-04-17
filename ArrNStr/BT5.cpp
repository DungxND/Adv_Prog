#include <bits/stdc++.h>
using namespace std;

int const m = 5, n = 5;

void go_right(int board[][n], int &x, int &y, int &val) {
    while (board[x][y] == 0 && y < n) {
        board[x][y] = val;
        val++;
        y++;
    }
    y--;
    x++;
}

void go_down(int board[][n], int &x, int &y, int &val) {
    cout << "goin down" << x << "and" << y << endl;;;
    while (board[x][y] == 0 && x < m) {
        board[x][y] = val;
        val++;
        x++;
    }
    x--;
    y--;
}

void go_left(int board[m][n], int &x, int &y, int &val) {
    cout << "goin left" << x << "and" << y << endl;
    while (board[x][y] == 0 && y >= 0) {
        board[x][y] = val;
        val++;
        y--;
    }
    y++;
    x--;
}

void go_up(int board[m][n], int &x, int &y, int &val) {
    cout << "goin up" << x << "and" << y << endl;
    while (board[x][y] == 0 && x < m) {
        board[x][y] = val;
        val++;
        x--;
    }
    x++;
    y++;
}

void spiral_board(int board[][n]) {
    int val = 1, x = 0, y = 0;
    while (val <= m * n) {
        go_right(board, x, y, val);
        go_down(board, x, y, val);
        go_left(board, x, y, val);
        go_up(board, x, y, val);
    }
}

void print_board(int board[][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {

    int board[m][n] = {};
    spiral_board(board);
    print_board(board);
    return 0;
}
