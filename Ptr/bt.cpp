#include <iostream>
using namespace std;


int strlen(char a[]) {
    int len = 0;
    while (a[len] != '\0') {
        len++;
    }
    return len;
}

void reverse(char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len / 2; i++) {
        char temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;
    }
}

void delete_char(char a[], char c) {
    int len = strlen(a);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] != c) {
            a[j++] = a[i];
        }
    }
    a[j] = '\0';
}

void pad_right(char a[], int n) {
    int len = strlen(a);
    if (len < n) {
        for (int i = len; i < n; i++) {
            a[i] = ' ';
        }
        a[n] = '\0';
    }
}

void pad_left(char a[], int n) {
    int len = strlen(a);
    if (len < n) {
        for (int i = n - 1; i >= 0; i--) {
            if (i >= n - len) {
                a[i] = a[i - (n - len)];
            } else {
                a[i] = ' ';
            }
        }
        a[n] = '\0';
    }
}

void truncate(char a[], int n) {
    if (strlen(a) > n) {
        a[n] = '\0';
    }
}

bool is_palindrome(char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len / 2; i++) {
        if (a[i] != a[len - i - 1]) {
            return false;
        }
    }
    return true;
}

void trim_left(char a[]) {
    int len = strlen(a);
    int i = 0;
    while (a[i] == ' ') {
        i++;
    }
    if (i > 0) {
        for (int j = 0; j < len; j++) {
            a[j] = a[j + i];
        }
    }
}

void trim_right(char a[]) {
    int len = strlen(a) - 1;
    for (; len >= 0; len--) {
        if (a[len] != ' ') {
            break;
        }
    }
    a[len + 1] = '\0';
}

int main() {
    // int n;
    // cin >> n;
    // int *a = new int[n];
    // for (int i = 0; i < n; i++) {
    // cin >> a[i];

    char str[] = "   Brrrr2222   ";
    cout << str << endl;

    reverse(str);
    cout << str << endl;

    delete_char(str, 'r');
    cout << str << endl;

    pad_right(str, 25);
    cout << str << endl;

    pad_left(str, 40);
    cout << str << endl;

    truncate(str, 15);
    cout << str << endl;

    cout << "palindrome: " << (is_palindrome(str) ? "Yes" : "No") << endl;

    trim_left(str);
    cout << str << endl;

    trim_right(str);
    cout << str << endl;

    // delete[] a;
    return 0;
}
