#include <bits/stdc++.h>
using namespace std;

int WC(int n, int valArr[]) {
    int val = 0, newVal = 0;
    for (int i = 1; i <= n; i++) {
        newVal += valArr[i] + WC(n - i, valArr);
        val = max(newVal, val);
        newVal = 0;
    }
    return val;
}

int main() {
    int n, x;
    cin >> n;
    int valArr[n + 1] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> x;
        valArr[i] = x;
    }
    int maxv = WC(n, valArr);
    cout << maxv;
    return 0;
}
