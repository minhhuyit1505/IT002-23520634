#include "class.h"
#include <iostream>

NhanVien::NhanVien(int maNV, const string &hoTen, const string &ngaySinh, double luongCoBan)
    : maNV(maNV), hoTen(hoTen), ngaySinh(ngaySinh), luongCoBan(luongCoBan) {}

void NhanVien::hienThiThongTin() const {
    cout << "Ma NV: " << maNV << "\nHo Ten: " << hoTen << "\nNgay Sinh: " << ngaySinh << "\nLuong Co Ban: " << luongCoBan << "\n";
}

string NhanVien::layHoTen() const {
    return hoTen;
}

NhanVienVanPhong::NhanVienVanPhong(int maNV, const string &hoTen, const string &ngaySinh, double luongCoBan, int soNgayLam, double troCap)
    : NhanVien(maNV, hoTen, ngaySinh, luongCoBan), soNgayLam(soNgayLam), troCap(troCap) {}

double NhanVienVanPhong::tinhLuong() const {
    return luongCoBan + soNgayLam * 200000 + troCap;
}

void NhanVienVanPhong::hienThiThongTin() const {
    NhanVien::hienThiThongTin();
    cout << "So Ngay Lam: " << soNgayLam << "\nTro Cap: " << troCap << "\nLuong Thang: " << tinhLuong() << "\n";
}

NhanVienSanXuat::NhanVienSanXuat(int maNV, const string &hoTen, const string &ngaySinh, double luongCoBan, int soSanPham)
    : NhanVien(maNV, hoTen, ngaySinh, luongCoBan), soSanPham(soSanPham) {}

double NhanVienSanXuat::tinhLuong() const {
    return luongCoBan + soSanPham * 2000;
}

void NhanVienSanXuat::hienThiThongTin() const {
    NhanVien::hienThiThongTin();
    cout << "So San Pham: " << soSanPham << "\nLuong Thang: " << tinhLuong() << "\n";
}

NhanVienQuanLy::NhanVienQuanLy(int maNV, const string &hoTen, const string &ngaySinh, double luongCoBan, double heSoChucVu, double thuong)
    : NhanVien(maNV, hoTen, ngaySinh, luongCoBan), heSoChucVu(heSoChucVu), thuong(thuong) {}

double NhanVienQuanLy::tinhLuong() const {
    return luongCoBan * heSoChucVu + thuong;
}

void NhanVienQuanLy::hienThiThongTin() const {
    NhanVien::hienThiThongTin();
    cout << "He So Chuc Vu: " << heSoChucVu << "\nThuong: " << thuong << "\nLuong Thang: " << tinhLuong() << "\n";
}
