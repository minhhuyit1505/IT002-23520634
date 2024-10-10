#include "class.h"

// Constructor mặc định cho lớp Diem
Diem::Diem() : iHoanh(0), iTung(0) {}

// Constructor có tham số cho lớp Diem
Diem::Diem(int Hoanh, int Tung) : iHoanh(Hoanh), iTung(Tung) {}

// Nhập tọa độ điểm
void Diem::Nhap() {
    cout << "Nhap hoanh do: ";
    cin >> iHoanh;
    cout << "Nhap tung do: ";
    cin >> iTung;
}

// Xuất tọa độ điểm
void Diem::Xuat() const {
    cout << "(" << iHoanh << ", " << iTung << ")" << endl;
}

// Nhân đôi hoành độ và tung độ
void Diem::NhanDoi() {
    iHoanh *= 2;
    iTung *= 2;
}

// Gán điểm về gốc tọa độ
void Diem::VeGocToaDo() {
    iHoanh = 0;
    iTung = 0;
}

// Tịnh tiến điểm
void Diem::TinhTien(int k, int d) {
    if (k == 0) {
        iHoanh += d;  // Tịnh tiến theo trục x
    } else {
        iTung += d;   // Tịnh tiến theo trục y
    }
}

