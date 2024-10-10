#ifndef TAMGIAC_H
#define TAMGIAC_H

#include <bits/stdc++.h>
using namespace std;

#define int long long

class Diem {
private:
    int iHoanh;
    int iTung;

public:
    Diem();                         // Constructor mặc định
    Diem(int Hoanh, int Tung);       // Constructor có tham số
    void Nhap();                     // Nhập tọa độ điểm
    void Xuat() const;               // Xuất tọa độ điểm
    void TinhTien(int dHoanh, int dTung); // Tịnh tiến điểm
    void Quay(float goc);            // Quay điểm theo góc

    // Thêm getter và setter cho iHoanh và iTung
    int GetHoanh() const;
    int GetTung() const;
    void SetHoanh(int Hoanh);
    void SetTung(int Tung);
};

class TamGiac {
private:
    Diem A, B, C;  // 3 đỉnh của tam giác

public:
    void Nhap();                      // Nhập các đỉnh của tam giác
    void Xuat() const;                // Xuất các đỉnh của tam giác
    void TinhTien(int dHoanh, int dTung);  // Tịnh tiến tam giác
    void PhongTo(float tiLe);         // Phóng to tam giác
    void ThuNho(float tiLe);          // Thu nhỏ tam giác
    void Quay(float goc);             // Quay tam giác theo góc
};

#endif
