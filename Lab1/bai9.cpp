#include<bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

struct SoTietKiem {
    string maSo;               // Ma so
    string loaiTietKiem;       // Loai tiet kiem
    string hoTenKhachHang;     // Ho ten khach hang
    string cmnd;               // Chung minh nhan dan
    tm ngayMoSo;               // Ngay mo so
    double soTienGui;          // So tien gui
};

// Ham kiem tra ma so
bool kiemTraMaSo(const string& maSo) {
    if (maSo.length() > 5) return false;
    for (char c : maSo) {
        if (isspace(c) || !isalnum(c)) return false;
    }
    return true;
}

// Ham kiem tra CMND
bool kiemTraCMND(const string& cmnd) {
    if (cmnd.length() != 9 && cmnd.length() != 12) return false;
    for (char c : cmnd) {
        if (!isdigit(c)) return false;
    }
    return true;
}

// Ham kiem tra ngay mo so
bool kiemTraNgay(int day, int month, int year) {
    tm timeIn = {};
    timeIn.tm_year = year - 1900;
    timeIn.tm_mon = month - 1;
    timeIn.tm_mday = day;
    mktime(&timeIn);
    return timeIn.tm_year == year - 1900 && timeIn.tm_mon == month - 1 && timeIn.tm_mday == day;
}

// Ham nhap du lieu so tiet kiem
void nhapSoTietKiem(SoTietKiem& s) {
    cout << "Nhap ma so (max 5 ky tu): ";
    cin >> s.maSo;
    while (!kiemTraMaSo(s.maSo)) {
        cout << "Ma so khong hop le. Vui long nhap lai: ";
        cin >> s.maSo;
    }

    cout << "Nhap loai tiet kiem (max 10 ky tu): ";
    cin >> s.loaiTietKiem;

    cin.ignore();
    cout << "Nhap ho ten khach hang (max 30 ky tu): ";
    getline(cin, s.hoTenKhachHang);

    cout << "Nhap CMND (9 hoac 12 chu so): ";
    cin >> s.cmnd;
    while (!kiemTraCMND(s.cmnd)) {
        cout << "CMND khong hop le. Vui long nhap lai: ";
        cin >> s.cmnd;
    }

    int day, month, year;
    cout << "Nhap ngay mo so (ngay thang nam): ";
    cin >> day >> month >> year;
    while (!kiemTraNgay(day, month, year)) {
        cout << "Ngay mo so khong hop le. Vui long nhap lai: ";
        cin >> day >> month >> year;
    }
    s.ngayMoSo = {0, 0, 0, day, month - 1, year - 1900};

    cout << "Nhap so tien gui (phai la so duong): ";
    cin >> s.soTienGui;
    while (s.soTienGui <= 0) {
        cout << "So tien gui phai la so duong. Vui long nhap lai: ";
        cin >> s.soTienGui;
    }
}

// Ham xuat du lieu so tiet kiem
void xuatSoTietKiem(const SoTietKiem& s) {
    cout << "Ma so: " << s.maSo << endl;
    cout << "Loai tiet kiem: " << s.loaiTietKiem << endl;
    cout << "Ho ten: " << s.hoTenKhachHang << endl;
    cout << "CMND: " << s.cmnd << endl;
    cout << "Ngay mo so: " << setw(2) << setfill('0') << s.ngayMoSo.tm_mday << "/"
         << setw(2) << setfill('0') << (s.ngayMoSo.tm_mon + 1) << "/"
         << (s.ngayMoSo.tm_year + 1900) << endl;
    cout << "So tien gui: " << s.soTienGui << " VND" << endl;
}

// Ham tinh lai suat
double tinhLai(const SoTietKiem& s, double laiSuat) {
    time_t now = time(0);
    tm* currentDate = localtime(&now);

    double lai = 0.0;
    double thoiGianGui = difftime(mktime(currentDate), mktime((tm*)&s.ngayMoSo)) / (365 * 24 * 3600);

    if (thoiGianGui <= 0.5) { // Ngan han
        lai = s.soTienGui * (laiSuat / 100) * thoiGianGui;
    } else { // Dai han
        lai = s.soTienGui * (laiSuat / 100) * thoiGianGui;
    }

    return lai;
}

// Ham rut tien
bool rutTien(SoTietKiem& s, double soTienRut) {
    if (soTienRut > s.soTienGui) {
        cout << "Khong du so du de rut." << endl;
        return false;
    }

    s.soTienGui -= soTienRut;
    cout << "Rut tien thanh cong. So du con lai: " << s.soTienGui << " VND." << endl;
    return true;
}

// Ham tim kiem theo CMND
void timKiemTheoCMND(const vector<SoTietKiem>& ds, const string& cmnd) {
    for (const auto& s : ds) {
        if (s.cmnd == cmnd) {
            xuatSoTietKiem(s);
            return;
        }
    }
    cout << "Khong tim thay so tiet kiem nao co CMND: " << cmnd << endl;
}

// Ham tim kiem theo ma so
void timKiemTheoMaSo(const vector<SoTietKiem>& ds, const string& maSo) {
    for (const auto& s : ds) {
        if (s.maSo == maSo) {
            xuatSoTietKiem(s);
            return;
        }
    }
    cout << "Khong tim thay so tiet kiem nao co ma so: " << maSo << endl;
}

// Ham sap xep danh sach theo so tien gui giam dan
void sapXepTheoSoTienGui(vector<SoTietKiem>& ds) {
    sort(ds.begin(), ds.end(), [](const SoTietKiem& a, const SoTietKiem& b) {
        return a.soTienGui > b.soTienGui;
    });
}

// Ham sap xep danh sach theo ngay mo so tang dan
void sapXepTheoNgayMoSo(vector<SoTietKiem>& ds) {
    sort(ds.begin(), ds.end(), [](const SoTietKiem& a, const SoTietKiem& b) {
        return mktime((tm*)&a.ngayMoSo) < mktime((tm*)&b.ngayMoSo);
    });
}

signed main() {
    vector<SoTietKiem> danhSachSoTietKiem;
    int luaChon;

    do {
        cout << "\n=== Quan ly so tiet kiem ===\n";
        cout << "1. Them so tiet kiem\n";
        cout << "2. Tim kiem so tiet kiem theo CMND\n";
        cout << "3. Tim kiem so tiet kiem theo ma so\n";
        cout << "4. Sap xep theo so tien gui\n";
        cout << "5. Sap xep theo ngay mo so\n";
        cout << "6. Thoat\n";
        cout << "Chon: ";
        cin >> luaChon;

        switch (luaChon) {
            case 1: {
                SoTietKiem s;
                nhapSoTietKiem(s);
                danhSachSoTietKiem.push_back(s);
                break;
            }
            case 2: {
                string cmnd;
                cout << "Nhap CMND: ";
                cin >> cmnd;
                timKiemTheoCMND(danhSachSoTietKiem, cmnd);
                break;
            }
            case 3: {
                string maSo;
                cout << "Nhap ma so: ";
                cin >> maSo;
                timKiemTheoMaSo(danhSachSoTietKiem, maSo);
                break;
            }
            case 4:
                sapXepTheoSoTienGui(danhSachSoTietKiem);
                cout << "Danh sach sau khi sap xep theo so tien gui:\n";
                for (const auto& s : danhSachSoTietKiem) {
                    xuatSoTietKiem(s);
                }
                break;
            case 5:
                sapXepTheoNgayMoSo(danhSachSoTietKiem);
                cout << "Danh sach sau khi sap xep theo ngay mo so:\n";
                for (const auto& s : danhSachSoTietKiem) {
                    xuatSoTietKiem(s);
                }
                break;
            case 6:
                cout << "Thoat chuong trinh." << endl;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                break;
        }
    } while (luaChon != 6);

    return 0;
}
