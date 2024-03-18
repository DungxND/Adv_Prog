#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        int count = 0;
        for (int j = a; j <= b; ++j) {
            char c[10001] = "";
            itoa(j, c, 10);
            int len = strlen(c);
            int center;
            (len % 2 == 0) ? center = len / 2 : center = (len + 1) / 2;
            for (int k = 0; k < center; k++) {
                if (c[k] != c[len - k - 1]) {
                    continue;
                } else {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
