#include <bits/stdc++.h>

#define int long long
#define double long double

using namespace std;

struct ChuyenBay {
    string maChuyenBay;
    string ngayBay;
    string gioBay;
    string noiDi;
    string noiDen;
};

bool kiemTraMaChuyenBay(const string &ma) {
    return regex_match(ma, regex("^[A-Z]{2}\\d{3}$")); // Ví dụ: VN123
}

bool kiemTraTenDiaDanh(const string &ten) {
    return regex_match(ten, regex("^[A-Za-z\\s]+$")); // Chỉ cho phép chữ cái và khoảng trắng
}

bool kiemTraNgay(const string &ngay) {
    return regex_match(ngay, regex("^\\d{2}/\\d{2}/\\d{4}$"));
}

bool kiemTraGio(const string &gio) {
    return regex_match(gio, regex("^([01]\\d|2[0-3]):[0-5]\\d$"));
}

void nhapChuyenBay(ChuyenBay &cb) {
    cin >> cb.maChuyenBay;
    while (!kiemTraMaChuyenBay(cb.maChuyenBay)) {
        cin >> cb.maChuyenBay;
    }

    cin >> cb.ngayBay;
    while (!kiemTraNgay(cb.ngayBay)) {
        cin >> cb.ngayBay;
    }

    cin >> cb.gioBay;
    while (!kiemTraGio(cb.gioBay)) {
        cin >> cb.gioBay;
    }

    cin.ignore();
    getline(cin, cb.noiDi);
    while (!kiemTraTenDiaDanh(cb.noiDi)) {
        getline(cin, cb.noiDi);
    }

    getline(cin, cb.noiDen);
    while (!kiemTraTenDiaDanh(cb.noiDen)) {
        getline(cin, cb.noiDen);
    }
}

void inChuyenBay(const ChuyenBay &cb) {
    cout << "Ma chuyen bay: " << cb.maChuyenBay
         << ", Ngay bay: " << cb.ngayBay
         << ", Gio bay: " << cb.gioBay
         << ", Noi di: " << cb.noiDi
         << ", Noi den: " << cb.noiDen << endl;
}

bool soSanhChuyenBay(const ChuyenBay &cb1, const ChuyenBay &cb2) {
    if (cb1.ngayBay == cb2.ngayBay)
        return cb1.gioBay < cb2.gioBay;
    return cb1.ngayBay < cb2.ngayBay;
}

signed main() {
    int n;
    cin >> n;

    vector<ChuyenBay> danhSach(n);

    for (int i = 0; i < n; i++) {
        nhapChuyenBay(danhSach[i]);
    }

    sort(danhSach.begin(), danhSach.end(), soSanhChuyenBay);

    cout << "\nDanh sach chuyen bay sau khi sap xep:\n";
    for (const auto &cb : danhSach) {
        inChuyenBay(cb);
    }

    string maTimKiem;
    cin >> maTimKiem;
    bool timThay = false;
    for (const auto &cb : danhSach) {
        if (cb.maChuyenBay == maTimKiem) {
            inChuyenBay(cb);
            timThay = true;
            break;
        }
    }
    if (!timThay) {
        cout << "Khong tim thay chuyen bay voi ma: " << maTimKiem << endl;
    }

    string noiDiTimKiem, ngayBayTimKiem;
    cin.ignore();
    getline(cin, noiDiTimKiem);
    cin >> ngayBayTimKiem;

    cout << "Danh sach chuyen bay tu " << noiDiTimKiem << " vao ngay " << ngayBayTimKiem << ":\n";
    for (const auto &cb : danhSach) {
        if (cb.noiDi == noiDiTimKiem && cb.ngayBay == ngayBayTimKiem) {
            inChuyenBay(cb);
        }
    }

    string noiDi, noiDen;
    cin.ignore();
    getline(cin, noiDi);
    getline(cin, noiDen);
    int count = 0;
    for (const auto &cb : danhSach) {
        if (cb.noiDi == noiDi && cb.noiDen == noiDen) {
            count++;
        }
    }
    cout << "So chuyen bay tu " << noiDi << " den " << noiDen << ": " << count << endl;

    return 0;
}
