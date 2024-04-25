#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, k, count = 0;
    cin >> m >> n >> k;
    for (int i = 0; i < k; i++) {
        int x, y, w, h;
        cin >> x >> y >> w >> h;
        if (x < 0 || y < 0 || w <= 0 || h <= 0 || x >= m || y >= n) {
            continue;
        }
        count++;
    }
    cout << count;
}
