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
    PhanSo ps;
    ps.input();

    ps = rutGon(ps);

    cout << "Phan so sau khi rut gon: ";
    inPhanSo(ps);
}

