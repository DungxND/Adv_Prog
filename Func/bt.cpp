#include <bits/stdc++.h>
using namespace std;


void bt5(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            cout << ' ';
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << '*';
        }
        cout << endl;
    }
}

int btUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int bt9(int n) {
    return rand() % n;
}

int main() {
    srand(time(nullptr));
    bt5(5);
    cout << btUCLN(20, 30) <<endl;
    cout << bt9(20);
    return 0;
}
