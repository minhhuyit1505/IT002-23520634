#ifndef DIEM_H
#define DIEM_H

#include <bits/stdc++.h>
using namespace std;

#define int long long

class Diem {
private:
    int iHoanh;  // Hoành độ (x)
    int iTung;   // Tung độ (y)

public:
    // Các constructor
    Diem();                                 // Constructor mặc định
    Diem(int Hoanh, int Tung);              // Constructor có tham số
    Diem(const Diem &x);                    // Constructor sao chép

    // Phương thức xuất tọa độ
    void Xuat() const;

    // Getter và Setter cho iTung và iHoanh
    int GetTungDo() const;
    int GetHoanhDo() const;
    void SetTungDo(int Tung);
    void SetHoanhDo(int Hoanh);

    // Phương thức tính tọa độ mới sau khi tịnh tiến
    void TinhTien(int dHoanh, int dTung);
};

#endif


