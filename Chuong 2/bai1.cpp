#include <bits/stdc++.h>
using namespace std;

#define int long long

class PhanSo {
private:
    int tu;
    int mau;

    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    void rutGon() {
        int ucln = gcd(tu, mau);
        tu /= ucln;
        mau /= ucln;
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
    }

public:
    PhanSo(int t = 0, int m = 1) : tu(t), mau(m) {
        if (m == 0) {
            cout << "Mẫu số không thể bằng 0. Đặt lại mẫu số là 1." << endl;
            mau = 1;
        }
        rutGon();
    }

    void nhap() {
        cin >> tu;
        do {
            cin >> mau;
            if (mau == 0) {
                cout << "Mẫu số không thể bằng 0. Vui lòng nhập lại." << endl;
            }
        } while (mau == 0);
        rutGon();
    }

    void xuat() const {
        cout << tu << "/" << mau;
    }

    PhanSo tong(const PhanSo& ps) const {
        PhanSo result(tu * ps.mau + ps.tu * mau, mau * ps.mau);
        result.rutGon();
        return result;
    }

    PhanSo hieu(const PhanSo& ps) const {
        PhanSo result(tu * ps.mau - ps.tu * mau, mau * ps.mau);
        result.rutGon();
        return result;
    }

    PhanSo tich(const PhanSo& ps) const {
        PhanSo result(tu * ps.tu, mau * ps.mau);
        result.rutGon();
        return result;
    }

    PhanSo thuong(const PhanSo& ps) const {
        if (ps.tu == 0) {
            cout << "Không thể chia cho 0." << endl;
            return PhanSo(0, 1);
        }
        PhanSo result(tu * ps.mau, mau * ps.tu);
        result.rutGon();
        return result;
    }
};

signed main() {

    #ifndef ONLINE_JUDGE
    freopen("ab.inp", "r", stdin);
    freopen("ab.out", "w", stdout);
    #else
    // freopen("task.inp", "r", stdin);
    // freopen("task.out", "w", stdout);
    #endif

    PhanSo ps1, ps2;

    ps1.nhap();
    ps2.nhap();

    cout << "Tổng: ";
    (ps1.tong(ps2)).xuat();
    cout << endl;

    cout << "Hiệu: ";
    (ps1.hieu(ps2)).xuat();
    cout << endl;

    cout << "Tích: ";
    (ps1.tich(ps2)).xuat();
    cout << endl;

    cout << "Thương: ";
    (ps1.thuong(ps2)).xuat();
    cout << endl;

    return 0;
}
