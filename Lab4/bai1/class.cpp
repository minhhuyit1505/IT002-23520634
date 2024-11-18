#include "class.h"

// Constructor của lớp NhanVien
NhanVien::NhanVien(int ms, string ten, double luongCB) : maSo(ms), hoTen(ten), luongCoBan(luongCB) {}

// Phương thức tính tiền thưởng (ảo) cho lớp NhanVien
double NhanVien::TienThuong() const {
    return 0;
}

// Phương thức xuất thông tin nhân viên
void NhanVien::Xuat() const {
    cout << "Ma so: " << maSo << ", Ten: " << hoTen << ", Luong co ban: " << luongCoBan << endl;
}

// Constructor của lớp QuanLy
QuanLy::QuanLy(int ms, string ten, double luongCB, double tlThuong) : NhanVien(ms, ten, luongCB), tyLeThuong(tlThuong) {}

// Phương thức tính tiền thưởng cho lớp QuanLy
double QuanLy::TienThuong() const {
    return luongCoBan * tyLeThuong;
}

// Phương thức xuất thông tin cho lớp QuanLy
void QuanLy::Xuat() const {
    NhanVien::Xuat();
    cout << "Tien thuong: " << TienThuong() << endl;
}

// Constructor của lớp KySu
KySu::KySu(int ms, string ten, double luongCB, int gioLamThem) : NhanVien(ms, ten, luongCB), soGioLamThem(gioLamThem) {}

// Phương thức tính tiền thưởng cho lớp KySu
double KySu::TienThuong() const {
    return soGioLamThem * 100000;
}

// Phương thức xuất thông tin cho lớp KySu
void KySu::Xuat() const {
    NhanVien::Xuat();
    cout << "Tien thuong: " << TienThuong() << endl;
}

