#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> arr;
    vector<string> result;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n-1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    string str = to_string(arr[i]) + " " + to_string(arr[j]) + " " + to_string(arr[k]);
                    bool push = true;
                    for (const auto &l: result) {
                        if (l == str) {
                            push = false;
                            break;
                        }
                    }
                    if (push) {
                        result.push_back(str);
                    }
                }
            }
        }
    }

    for (const auto &i: result) {
        cout << i << endl;
    }
    return 0;
}
