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

PhanSo tong(PhanSo ps1, PhanSo ps2) {
    PhanSo ps;
    ps.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    ps.mau = ps1.mau * ps2.mau;
    return rutGon(ps);
}

PhanSo hieu(PhanSo ps1, PhanSo ps2) {
    PhanSo ps;
    ps.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    ps.mau = ps1.mau * ps2.mau;
    return rutGon(ps);
}

PhanSo tich(PhanSo ps1, PhanSo ps2) {
    PhanSo ps;
    ps.tu = ps1.tu * ps2.tu;
    ps.mau = ps1.mau * ps2.mau;
    return rutGon(ps);
}

PhanSo thuong(PhanSo ps1, PhanSo ps2) {
    PhanSo ps;
    ps.tu = ps1.tu * ps2.mau;
    ps.mau = ps1.mau * ps2.tu;
    return rutGon(ps);
}

void inPhanSo(PhanSo ps) {
    cout << ps.tu << "/" << ps.mau << endl;
}

signed main() {
    PhanSo ps1, ps2;
    ps1.input();
    ps2.input();

    PhanSo psTong = tong(ps1, ps2);
    PhanSo psHieu = hieu(ps1, ps2);
    PhanSo psTich = tich(ps1, ps2);
    PhanSo psThuong = thuong(ps1, ps2);

    cout << "Tong: ";
    inPhanSo(psTong);
    cout << "Hieu: ";
    inPhanSo(psHieu);
    cout << "Tich: ";
    inPhanSo(psTich);
    cout << "Thuong: ";
    inPhanSo(psThuong);

    return 0;
}

