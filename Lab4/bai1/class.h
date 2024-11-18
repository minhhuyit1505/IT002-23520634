#ifndef CLASS_H
#define CLASS_H

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define double long double

// Lớp cơ sở NhanVien
class NhanVien {
protected:
    int maSo;
    string hoTen;
    double luongCoBan;

public:
    NhanVien(int ms, string ten, double luongCB);
    virtual double TienThuong() const;  // Phương thức tính tiền thưởng (ảo)
    virtual void Xuat() const;          // Phương thức xuất thông tin
};

// Lớp dẫn xuất QuanLy từ NhanVien
class QuanLy : public NhanVien {
private:
    double tyLeThuong;

public:
    QuanLy(int ms, string ten, double luongCB, double tlThuong);
    double TienThuong() const override;
    void Xuat() const override;
};

// Lớp dẫn xuất KySu từ NhanVien
class KySu : public NhanVien {
private:
    int soGioLamThem;

public:
    KySu(int ms, string ten, double luongCB, int gioLamThem);
    double TienThuong() const override;
    void Xuat() const override;
};

#endif

