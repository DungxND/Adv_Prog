#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, arrs;
    cin >> n >> q;
    vector<vector<int> > arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arrs;
        for (int j = 0; j < arrs; j++) {
            int x;
            cin >> x;
            arr[i].push_back(x);
        }
    }

    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }
 return 0;
}
