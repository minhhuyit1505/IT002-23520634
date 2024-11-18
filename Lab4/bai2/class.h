#ifndef CLASS_H
#define CLASS_H

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

// Lớp cơ sở Phong
class Phong {
protected:
    int soDem; // Số đêm ở lại

public:
    Phong(int soDem);
    virtual double DoanhThu() const; // Phương thức tính doanh thu (ảo)
};

// Lớp dẫn xuất Deluxe từ Phong
class Deluxe : public Phong {
private:
    double phiDichVu;
    double phiPhucVu;

public:
    Deluxe(int soDem, double phiDichVu, double phiPhucVu);
    double DoanhThu() const override;
};

// Lớp dẫn xuất Premium từ Phong
class Premium : public Phong {
private:
    double phiDichVu;

public:
    Premium(int soDem, double phiDichVu);
    double DoanhThu() const override;
};

// Lớp dẫn xuất Business từ Phong
class Business : public Phong {
public:
    Business(int soDem);
    double DoanhThu() const override;
};

#endif

