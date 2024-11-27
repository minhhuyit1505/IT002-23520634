#include "class.h"

using namespace std;

#define int long long

void nhapThongTin(vector<unique_ptr<NhanVien>>& danhSach) {
    danhSach.push_back(make_unique<NhanVienVanPhong>(1, "Nguyen Van A", "01/01/1980", 5000000, 20, 2000000));
    danhSach.push_back(make_unique<NhanVienSanXuat>(2, "Tran Thi B", "05/05/1985", 4500000, 300));
    danhSach.push_back(make_unique<NhanVienQuanLy>(3, "Le Van C", "10/10/1975", 6000000, 1.5, 3000000));
}

void xuatThongTin(const vector<unique_ptr<NhanVien>>& danhSach) {
    for (const auto& nv : danhSach) {
        nv->hienThiThongTin();
        cout << "--------------------------\n";
    }
}

double tinhTongLuong(const vector<unique_ptr<NhanVien>>& danhSach) {
    double tongLuong = 0;
    for (const auto& nv : danhSach) {
        tongLuong += nv->tinhLuong();
    }
    return tongLuong;
}

void timKiemNhanVien(const vector<unique_ptr<NhanVien>>& danhSach, const string& hoTen) {
    bool found = false;
    for (const auto& nv : danhSach) {
        if (nv->layHoTen() == hoTen) {
            nv->hienThiThongTin();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Khong tim thay nhan vien co ten: " << hoTen << "\n";
    }
}

signed main() {
    vector<unique_ptr<NhanVien>> danhSachNhanVien;

    // Nhap thong tin nhan vien
    nhapThongTin(danhSachNhanVien);

    // Xuat thong tin nhan vien
    cout << "Danh sach nhan vien:\n";
    xuatThongTin(danhSachNhanVien);

    // Tinh tong luong
    double tongLuong = tinhTongLuong(danhSachNhanVien);
    cout << "Tong luong cua cong ty: " << tongLuong << "\n";

    // Tim kiem nhan vien theo ho ten
    string hoTen;
    cout << "Nhap ho ten nhan vien can tim: ";
    getline(cin, hoTen);
    timKiemNhanVien(danhSachNhanVien, hoTen);

    return 0;
}
