#include "class.h"

// Constructor mặc định
Diem::Diem() : iHoanh(0), iTung(0) {}

// Constructor có tham số
Diem::Diem(int Hoanh, int Tung) : iHoanh(Hoanh), iTung(Tung) {}

// Constructor sao chép
Diem::Diem(const Diem &x) : iHoanh(x.iHoanh), iTung(x.iTung) {}

// Phương thức xuất tọa độ
void Diem::Xuat() const {
    cout << "(" << iHoanh << ", " << iTung << ")" << endl;
}

// Getter và Setter cho iHoanh và iTung
int Diem::GetTungDo() const {
    return iTung;
}

int Diem::GetHoanhDo() const {
    return iHoanh;
}

void Diem::SetTungDo(int Tung) {
    iTung = Tung;
}

void Diem::SetHoanhDo(int Hoanh) {
    iHoanh = Hoanh;
}

// Phương thức tịnh tiến tọa độ
void Diem::TinhTien(int dHoanh, int dTung) {
    iHoanh += dHoanh;
    iTung += dTung;
}
