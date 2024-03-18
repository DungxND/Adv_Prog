#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";

    return 0;
}
