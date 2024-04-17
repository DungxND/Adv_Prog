#include <bits/stdc++.h>
using namespace std;

void go_right(vector<vector<int> > &board, int &x, int &y, int &val, int row, int col) {
    while (y < col && board[x][y] == 0) {
        board[x][y] = val++;
        y++;
    }
    y--;
    x++;
}

void go_down(vector<vector<int> > &board, int &x, int &y, int &val, int row, int col) {
    while (x < row && board[x][y] == 0) {
        board[x][y] = val++;
        x++;
    }
    x--;
    y--;
}

void go_left(vector<vector<int> > &board, int &x, int &y, int &val, int row, int col) {
    while (y >= 0 && board[x][y] == 0) {
        board[x][y] = val++;
        y--;
    }
    y++;
    x--;
}

void go_up(vector<vector<int> > &board, int &x, int &y, int &val, int row, int col) {
    while (x >= 0 && board[x][y] == 0) {
        board[x][y] = val++;
        x--;
    }
    x++;
    y++;
}

void spiral_board(vector<vector<int> > &board, int row, int col) {
    int val = 1, x = 0, y = 0;
    while (val <= row * col) {
        go_right(board, x, y, val, row, col);
        go_down(board, x, y, val, row, col);
        go_left(board, x, y, val, row, col);
        go_up(board, x, y, val, row, col);
    }
}

void print_board(const vector<vector<int> > &board, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row, col;
    cin >> row >> col;

    vector board(row, vector(col, 0));

    spiral_board(board, row, col);
    print_board(board, row, col);

    return 0;
}
