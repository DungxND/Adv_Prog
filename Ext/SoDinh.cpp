#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, soDinh = 0;
    cin >> m >> n;
    vector<vector<int> > arr(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cin >> arr[i][j];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            bool dinh = true;
            if (i >= 1)
                if (arr[i - 1][j] >= arr[i][j]) dinh = false;
            if (j >= 1)
                if (arr[i][j - 1] >= arr[i][j]) dinh = false;
            if (j < n - 1)
                if (arr[i][j + 1] >= arr[i][j]) dinh = false;
            if (i < m - 1)
                if (arr[i + 1][j] >= arr[i][j]) dinh = false;
            if (dinh) soDinh++;
        }
    }
    cout << soDinh;
    return 0;
}
