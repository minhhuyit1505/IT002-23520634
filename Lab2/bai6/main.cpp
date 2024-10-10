#include "class.h"

int32_t main() {
    TamGiac tamGiac;

    // Nhập tọa độ 3 đỉnh của tam giác
    cout << "Nhap toa do 3 dinh cua tam giac (x1 y1 x2 y2 x3 y3): " << endl;
    tamGiac.Nhap();

    // Nhập hướng tịnh tiến và độ dài tịnh tiến
    float huong, doDai;
    cout << "Nhap huong tinh tien (do): ";
    cin >> huong;
    cout << "Nhap do dai tinh tien: ";
    cin >> doDai;

    // Tịnh tiến tam giác
    tamGiac.TinhTien(huong, doDai);

    // Xuất kết quả sau khi tịnh tiến
    cout << "Toa do cac dinh cua tam giac sau khi tinh tien: " << endl;
    tamGiac.Xuat();

    return 0;
}
