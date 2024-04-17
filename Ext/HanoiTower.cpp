#include <bits/stdc++.h>
using namespace std;

int HNT(int so_dia, int nguon, int dich_den, int cot_du_phong) {
    static int step = 0;
    if (so_dia == 1) {
        step++;
        return step;
    }
    HNT(so_dia - 1, nguon, cot_du_phong, dich_den);
    step++;
    HNT(so_dia - 1, cot_du_phong, dich_den, nguon);
    return step;
}


int main() {
    int so_cot, so_dia;
    cin >> so_cot >> so_dia;

    int res = HNT(so_dia, 1, so_cot, 2);
    cout << res;
    return 0;
}
