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
    cout << "(" << iHoanh << ", " << iTung << ")";
}

// Tịnh tiến điểm
void Diem::TinhTien(int dHoanh, int dTung) {
    iHoanh += dHoanh;
    iTung += dTung;
}

// Quay điểm theo góc
void Diem::Quay(float goc) {
    float rad = goc * M_PI / 180; // Đổi góc sang radian
    int x = iHoanh;
    iHoanh = round(x * cos(rad) - iTung * sin(rad));
    iTung = round(x * sin(rad) + iTung * cos(rad));
}

// Getter và Setter cho iHoanh và iTung
int Diem::GetHoanh() const {
    return iHoanh;
}

int Diem::GetTung() const {
    return iTung;
}

void Diem::SetHoanh(int Hoanh) {
    iHoanh = Hoanh;
}

void Diem::SetTung(int Tung) {
    iTung = Tung;
}

// Nhập các đỉnh của tam giác
void TamGiac::Nhap() {
    cout << "Nhap diem A: " << endl;
    A.Nhap();
    cout << "Nhap diem B: " << endl;
    B.Nhap();
    cout << "Nhap diem C: " << endl;
    C.Nhap();
}

// Xuất các đỉnh của tam giác
void TamGiac::Xuat() const {
    cout << "Dinh A: ";
    A.Xuat();
    cout << endl << "Dinh B: ";
    B.Xuat();
    cout << endl << "Dinh C: ";
    C.Xuat();
    cout << endl;
}

// Tịnh tiến tam giác
void TamGiac::TinhTien(int dHoanh, int dTung) {
    A.TinhTien(dHoanh, dTung);
    B.TinhTien(dHoanh, dTung);
    C.TinhTien(dHoanh, dTung);
}

// Phóng to tam giác
void TamGiac::PhongTo(float tiLe) {
    A.SetHoanh(A.GetHoanh() * tiLe);
    A.SetTung(A.GetTung() * tiLe);

    B.SetHoanh(B.GetHoanh() * tiLe);
    B.SetTung(B.GetTung() * tiLe);

    C.SetHoanh(C.GetHoanh() * tiLe);
    C.SetTung(C.GetTung() * tiLe);
}

// Thu nhỏ tam giác
void TamGiac::ThuNho(float tiLe) {
    A.SetHoanh(A.GetHoanh() / tiLe);
    A.SetTung(A.GetTung() / tiLe);

    B.SetHoanh(B.GetHoanh() / tiLe);
    B.SetTung(B.GetTung() / tiLe);

    C.SetHoanh(C.GetHoanh() / tiLe);
    C.SetTung(C.GetTung() / tiLe);
}

// Quay tam giác theo góc
void TamGiac::Quay(float goc) {
    A.Quay(goc);
    B.Quay(goc);
    C.Quay(goc);
}
