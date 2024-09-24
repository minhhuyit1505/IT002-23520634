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
        int ucln = gcd(abs(tu), abs(mau)); // Sử dụng abs để tránh âm
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

    bool lonHon(const PhanSo& ps) const {
        return tu * ps.mau > ps.tu * mau;
    }

    PhanSo get() const {
        return PhanSo(tu, mau);
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

    int n;
    cin >> n;

    vector<PhanSo> dsPs(n);
    for (int i = 0; i < n; ++i) {
        dsPs[i].nhap();
    }

    PhanSo tong = dsPs[0].get(); // Bắt đầu với phân số đầu tiên
    PhanSo maxPs = dsPs[0].get();

    for (int i = 1; i < n; ++i) {
        tong = tong.tong(dsPs[i]);
        if (dsPs[i].lonHon(maxPs)) {
            maxPs = dsPs[i].get();
        }
    }

    cout << "Tổng các phân số: ";
    tong.xuat();
    cout << endl;

    cout << "Phân số lớn nhất: ";
    maxPs.xuat();
    cout << endl;

    return 0;
}
