#include "class.h"

// Constructor mặc định
ThiSinh::ThiSinh() : iNgay(1), iThang(1), iNam(2000), fToan(0), fVan(0), fAnh(0) {}

// Nhập thông tin thí sinh
void ThiSinh::Nhap() {
    cout << "Nhap ten thi sinh: ";
    getline(cin, Ten);
    cout << "Nhap MSSV: ";
    getline(cin, MSSV);
    cout << "Nhap ngay sinh (dd mm yyyy): ";
    cin >> iNgay >> iThang >> iNam;
    cout << "Nhap diem Toan: ";
    cin >> fToan;
    cout << "Nhap diem Van: ";
    cin >> fVan;
    cout << "Nhap diem Anh: ";
    cin >> fAnh;
    cin.ignore(); // Xóa bộ đệm để nhập chuỗi tiếp theo
}

// Xuất thông tin thí sinh
void ThiSinh::Xuat() const {
    cout << "Ten: " << Ten << endl;
    cout << "MSSV: " << MSSV << endl;
    cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl;
    cout << "Diem Toan: " << fToan << endl;
    cout << "Diem Van: " << fVan << endl;
    cout << "Diem Anh: " << fAnh << endl;
}

// Tính tổng điểm
float ThiSinh::Tong() const {
    return fToan + fVan + fAnh;
}

// Getter cho MSSV
string ThiSinh::GetMSSV() const {
    return MSSV;
}

