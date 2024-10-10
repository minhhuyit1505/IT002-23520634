#ifndef DAGIAC_H
#define DAGIAC_H

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

    // Getter và Setter cho iHoanh và iTung
    int GetHoanh() const;
    int GetTung() const;
    void SetHoanh(int Hoanh);
    void SetTung(int Tung);
};

class DaGiac {
private:
    int n;         // Số đỉnh của đa giác
    Diem *Dinh;    // Mảng các đỉnh của đa giác

public:
    DaGiac(int soDinh = 3);          // Constructor có tham số, mặc định là 3 đỉnh
    ~DaGiac();                       // Destructor để giải phóng bộ nhớ
    void Nhap();                     // Nhập tọa độ các đỉnh
    void Xuat() const;               // Xuất tọa độ các đỉnh
    void TinhTien(int dHoanh, int dTung); // Tịnh tiến toàn bộ đa giác
    void PhongTo(float tiLe);        // Phóng to đa giác
    void ThuNho(float tiLe);         // Thu nhỏ đa giác
    void Quay(float goc);            // Quay đa giác theo góc
};

#endif
