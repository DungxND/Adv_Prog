#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char c[101] = "";
    cin >> c;
    int n = strlen(c);
    int center;
    (n % 2 == 0) ? center = n / 2 : center = (n + 1) / 2;
    for (int i = 0; i < center; i++) {
        if (c[i] != c[n - i - 1]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}
