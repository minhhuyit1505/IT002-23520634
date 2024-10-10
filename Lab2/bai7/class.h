#ifndef POLYGON_H
#define POLYGON_H

#include <bits/stdc++.h>
using namespace std;

class Diem {
private:
    float x, y;

public:
    Diem();                            // Constructor mặc định
    Diem(float x, float y);             // Constructor có tham số
    void Nhap();                        // Nhập tọa độ điểm
    float GetX() const;                 // Lấy hoành độ
    float GetY() const;                 // Lấy tung độ
};

class Polygon {
private:
    int n;             // Số điểm
    vector<Diem> Dinh; // Mảng các đỉnh

public:
    Polygon(int soDiem = 3);            // Constructor có tham số (mặc định là 3 đỉnh)
    void Nhap();                        // Nhập tọa độ các đỉnh
    float TinhDienTich() const;         // Tính diện tích đa giác
};

#endif
