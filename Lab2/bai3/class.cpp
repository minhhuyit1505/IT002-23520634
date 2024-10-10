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

// Constructor của lớp DaGiac
DaGiac::DaGiac(int soDinh) : n(soDinh) {
    Dinh = new Diem[n];
}

// Destructor của lớp DaGiac
DaGiac::~DaGiac() {
    delete[] Dinh;
}

// Nhập các đỉnh của đa giác
void DaGiac::Nhap() {
    for (int i = 0; i < n; i++) {
        cout << "Nhap dinh " << i + 1 << ": " << endl;
        Dinh[i].Nhap();
    }
}

// Xuất các đỉnh của đa giác
void DaGiac::Xuat() const {
    for (int i = 0; i < n; i++) {
        cout << "Dinh " << i + 1 << ": ";
        Dinh[i].Xuat();
        cout << endl;
    }
}

// Tịnh tiến toàn bộ đa giác
void DaGiac::TinhTien(int dHoanh, int dTung) {
    for (int i = 0; i < n; i++) {
        Dinh[i].TinhTien(dHoanh, dTung);
    }
}

// Phóng to đa giác
void DaGiac::PhongTo(float tiLe) {
    for (int i = 0; i < n; i++) {
        Dinh[i].SetHoanh(Dinh[i].GetHoanh() * tiLe);
        Dinh[i].SetTung(Dinh[i].GetTung() * tiLe);
    }
}

// Thu nhỏ đa giác
void DaGiac::ThuNho(float tiLe) {
    for (int i = 0; i < n; i++) {
        Dinh[i].SetHoanh(Dinh[i].GetHoanh() / tiLe);
        Dinh[i].SetTung(Dinh[i].GetTung() / tiLe);
    }
}

// Quay toàn bộ đa giác theo góc
void DaGiac::Quay(float goc) {
    for (int i = 0; i < n; i++) {
        Dinh[i].Quay(goc);
    }
}

