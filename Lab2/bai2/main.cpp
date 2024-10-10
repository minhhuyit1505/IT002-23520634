#include "class.h"

int32_t main() {
    TamGiac tg;

    // Nhập tam giác
    cout << "Nhap tam giac:" << endl;
    tg.Nhap();

    // Xuất tam giác
    cout << "Tam giac vua nhap la:" << endl;
    tg.Xuat();

    // Tịnh tiến tam giác
    cout << "Tinh tien tam giac 3 don vi ve hoanh do va 2 don vi ve tung do:" << endl;
    tg.TinhTien(3, 2);
    tg.Xuat();

    // Phóng to tam giác
    cout << "Phong to tam giac theo ty le 2.0:" << endl;
    tg.PhongTo(2.0);
    tg.Xuat();

    // Quay tam giác
    cout << "Quay tam giac 90 do:" << endl;
    tg.Quay(90);
    tg.Xuat();

    return 0;
}
