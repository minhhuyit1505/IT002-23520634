#ifndef THISINH_H
#define THISINH_H

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define float long double

class ThiSinh {
private:
    string Ten;      // Tên thí sinh
    string MSSV;     // Mã số sinh viên
    int iNgay, iThang, iNam; // Ngày sinh (ngày, tháng, năm)
    float fToan, fVan, fAnh; // Điểm Toán, Văn, Anh văn

public:
    ThiSinh();                       // Constructor mặc định
    void Nhap();                     // Phương thức nhập thông tin thí sinh
    void Xuat() const;               // Phương thức xuất thông tin thí sinh
    float Tong() const;              // Phương thức tính tổng điểm

    // Getter cho MSSV
    string GetMSSV() const;
};

#endif

