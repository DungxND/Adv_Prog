#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> vec1(m);
    vector<int> vec2(n);
    for (int i = 0; i < m; i++) {
        cin >> vec1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }
    int count = 0;
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    for (int i = vec1[m - 1]; i <= vec2[0]; i++) {
        bool check1 = true;
        bool check2 = true;
        for (int j = 0; j < m; j++) {
            if (i % vec1[j] != 0) {
                check1 = false;
            }
        }
        for (int j = 0; j < n; j++) {
            if (vec2[j] % i != 0) {
                check2 = false;
            }
        }
        if (check1 == true && check2 == true) {
            count++;
        }
    }
    cout << count;
}
