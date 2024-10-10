#include "class.h"

// Constructor mặc định cho lớp Diem
Diem::Diem() : x(0), y(0) {}

// Constructor có tham số cho lớp Diem
Diem::Diem(float x, float y) : x(x), y(y) {}

// Nhập tọa độ điểm
void Diem::Nhap() {
    cin >> x >> y;
}

// Xuất tọa độ điểm
void Diem::Xuat() const {
    cout << fixed << setprecision(5) << "(" << x << "," << y << ")" << endl;
}

// Tịnh tiến điểm
void Diem::TinhTien(float huong, float doDai) {
    // Chuyển hướng tịnh tiến từ độ sang radian
    float rad = huong * PI / 180.0;
    // Tịnh tiến theo hướng
    x += doDai * cos(rad);
    y += doDai * sin(rad);
}

// Constructor mặc định cho lớp TamGiac
TamGiac::TamGiac() : A(), B(), C() {}

// Nhập tọa độ 3 đỉnh của tam giác
void TamGiac::Nhap() {
    A.Nhap();
    B.Nhap();
    C.Nhap();
}

// Tịnh tiến tam giác
void TamGiac::TinhTien(float huong, float doDai) {
    A.TinhTien(huong, doDai);
    B.TinhTien(huong, doDai);
    C.TinhTien(huong, doDai);
}

// Xuất tọa độ 3 đỉnh của tam giác
void TamGiac::Xuat() const {
    A.Xuat();
    B.Xuat();
    C.Xuat();
}
