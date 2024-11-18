#ifndef CLASS_H
#define CLASS_H

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

// Lớp cơ sở GiaSuc
class GiaSuc {
protected:
    int soLuong;

public:
    GiaSuc(int soLuong);
    virtual int SinhCon(); // Phương thức sinh con
    virtual int ChoSua() const = 0; // Phương thức cho sữa (ảo thuần túy)
    virtual string Keu() const = 0; // Phương thức tiếng kêu (ảo thuần túy)
    int getSoLuong() const { return soLuong; }
};

// Lớp dẫn xuất Bo từ GiaSuc
class Bo : public GiaSuc {
public:
    Bo(int soLuong);
    int ChoSua() const override;
    string Keu() const override;
};

// Lớp dẫn xuất Cuu từ GiaSuc
class Cuu : public GiaSuc {
public:
    Cuu(int soLuong);
    int ChoSua() const override;
    string Keu() const override;
};

// Lớp dẫn xuất De từ GiaSuc
class De : public GiaSuc {
public:
    De(int soLuong);
    int ChoSua() const override;
    string Keu() const override;
};

#endif

