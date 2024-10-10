#include "class.h"

// Constructor mặc định cho lớp Diem
Diem::Diem() : x(0), y(0) {}

// Constructor có tham số cho lớp Diem
Diem::Diem(float x, float y) : x(x), y(y) {}

// Nhập tọa độ điểm
void Diem::Nhap() {
    cin >> x >> y;
}

// Lấy hoành độ của điểm
float Diem::GetX() const {
    return x;
}

// Lấy tung độ của điểm
float Diem::GetY() const {
    return y;
}

// Constructor có tham số cho lớp Polygon
Polygon::Polygon(int soDiem) : n(soDiem), Dinh(soDiem) {}

// Nhập tọa độ các đỉnh của đa giác
void Polygon::Nhap() {
    for (int i = 0; i < n; i++) {
        cout << "Nhap toa do diem " << i + 1 << ": ";
        Dinh[i].Nhap();
    }
}

// Tính diện tích đa giác
float Polygon::TinhDienTich() const {
    float dienTich = 0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n; // Điểm tiếp theo (điểm cuối nối với điểm đầu)
        dienTich += Dinh[i].GetX() * Dinh[j].GetY() - Dinh[i].GetY() * Dinh[j].GetX();
    }
    return fabs(dienTich) / 2.0; // Trả về diện tích tuyệt đối chia 2
}

