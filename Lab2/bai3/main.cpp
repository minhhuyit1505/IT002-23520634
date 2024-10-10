#include "class.h"

int32_t main() {
    int soDinh;
    cout << "Nhap so dinh cua da giac: ";
    cin >> soDinh;

    DaGiac daGiac(soDinh);

    // Nhập đa giác
    cout << "Nhap da giac:" << endl;
    daGiac.Nhap();

    // Xuất đa giác
    cout << "Da giac vua nhap la:" << endl;
    daGiac.Xuat();

    // Tịnh tiến đa giác
    cout << "Tinh tien da giac 3 don vi ve hoanh do va 2 don vi ve tung do:" << endl;
    daGiac.TinhTien(3, 2);
    daGiac.Xuat();

    // Phóng to đa giác
    cout << "Phong to da giac theo ty le 2.0:" << endl;
    daGiac.PhongTo(2.0);
    daGiac.Xuat();

    // Quay đa giác
    cout << "Quay da giac 90 do:" << endl;
    daGiac.Quay(90);
    daGiac.Xuat();

    return 0;
}
