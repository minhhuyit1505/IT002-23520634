#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <bits/stdc++.h>
using namespace std;

#define int long long

class NhanVien {
protected:
    int maNV;
    string hoTen;
    string ngaySinh;
    double luongCoBan;

public:
    NhanVien(int maNV, const string &hoTen, const string &ngaySinh, double luongCoBan);
    virtual double tinhLuong() const = 0;
    virtual void hienThiThongTin() const;
    string layHoTen() const;
};

class NhanVienVanPhong : public NhanVien {
private:
    int soNgayLam;
    double troCap;

public:
    NhanVienVanPhong(int maNV, const string &hoTen, const string &ngaySinh, double luongCoBan, int soNgayLam, double troCap);
    double tinhLuong() const override;
    void hienThiThongTin() const override;
};

class NhanVienSanXuat : public NhanVien {
private:
    int soSanPham;

public:
    NhanVienSanXuat(int maNV, const string &hoTen, const string &ngaySinh, double luongCoBan, int soSanPham);
    double tinhLuong() const override;
    void hienThiThongTin() const override;
};

class NhanVienQuanLy : public NhanVien {
private:
    double heSoChucVu;
    double thuong;

public:
    NhanVienQuanLy(int maNV, const string &hoTen, const string &ngaySinh, double luongCoBan, double heSoChucVu, double thuong);
    double tinhLuong() const override;
    void hienThiThongTin() const override;
};

#endif

