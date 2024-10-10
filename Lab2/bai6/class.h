#ifndef TAMGIAC_H
#define TAMGIAC_H

#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define int long long
#define double long double

class Diem {
private:
    float x;
    float y;

public:
    Diem();                         // Constructor mặc định
    Diem(float x, float y);          // Constructor có tham số
    void Nhap();                     // Nhập tọa độ điểm
    void Xuat() const;               // Xuất tọa độ điểm
    void TinhTien(float huong, float doDai); // Tịnh tiến điểm
};

class TamGiac {
private:
    Diem A, B, C;  // 3 đỉnh của tam giác

public:
    TamGiac();                       // Constructor mặc định
    void Nhap();                     // Nhập tọa độ 3 đỉnh
    void TinhTien(float huong, float doDai); // Tịnh tiến tam giác
    void Xuat() const;               // Xuất tọa độ 3 đỉnh
};

#endif
