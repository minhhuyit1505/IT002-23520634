#ifndef DIEM_H
#define DIEM_H

#include <bits/stdc++.h>
using namespace std;

class Diem {
private:
    int iHoanh;  // Hoành độ
    int iTung;   // Tung độ

public:
    Diem();                         // Constructor mặc định
    Diem(int Hoanh, int Tung);       // Constructor có tham số
    void Nhap();                     // Nhập tọa độ điểm
    void Xuat() const;               // Xuất tọa độ điểm
    void NhanDoi();                  // Nhân đôi hoành độ và tung độ
    void VeGocToaDo();               // Gán điểm về gốc tọa độ
    void TinhTien(int k, int d);     // Tịnh tiến điểm theo chỉ thị
};

#endif
