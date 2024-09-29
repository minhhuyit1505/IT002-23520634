#include<bits/stdc++.h>

#define int long long

using namespace std;

struct PhanSo {
    int tu;
    int mau;
    void input() {
        cin >> tu >> mau;
    }
};

int GCD(int a, int b) {
    return __gcd(a, b);
}

PhanSo rutGon(PhanSo ps) {
    int gcd = GCD(ps.tu, ps.mau);
    ps.tu /= gcd;
    ps.mau /= gcd;
    return ps;
}

bool lonHon(PhanSo ps1, PhanSo ps2) {
    return ps1.tu * ps2.mau > ps2.tu * ps1.mau;
}

void inPhanSo(PhanSo ps) {
    cout << ps.tu << "/" << ps.mau << endl;
}

signed main() {
    PhanSo ps1, ps2;
    ps1.input();
    ps2.input();

    ps1 = rutGon(ps1);
    ps2 = rutGon(ps2);

    cout << "Phan so 1 rut gon: ";
    inPhanSo(ps1);
    cout << "Phan so 2 rut gon: ";
    inPhanSo(ps2);

    if (lonHon(ps1, ps2)) {
        cout << "Phan so lon nhat la: ";
        inPhanSo(ps1);
    } else if (lonHon(ps2, ps1)) {
        cout << "Phan so lon nhat la: ";
        inPhanSo(ps2);
    } else {
        cout << "Hai phan so bang nhau.\n";
    }

    return 0;
}

