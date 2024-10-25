#include "class.h"

int32_t main() {
    PhanSo ps1, ps2;

    // Nhập phân số đầu tiên
    cout << "Nhap phan so 1 (tu mau): ";
    cin >> ps1;

    // Nhập phân số thứ hai
    cout << "Nhap phan so 2 (tu mau): ";
    cin >> ps2;

    // Xuất các phân số
    cout << "Phan so 1: " << ps1 << endl;
    cout << "Phan so 2: " << ps2 << endl;

    // Thực hiện các phép toán
    cout << "Tong: " << (ps1 + ps2) << endl;
    cout << "Hieu: " << (ps1 - ps2) << endl;
    cout << "Tich: " << (ps1 * ps2) << endl;
    cout << "Thuong: " << (ps1 / ps2) << endl;

    // So sánh các phân số
    cout << "ps1 == ps2: " << (ps1 == ps2) << endl;
    cout << "ps1 != ps2: " << (ps1 != ps2) << endl;
    cout << "ps1 >= ps2: " << (ps1 >= ps2) << endl;
    cout << "ps1 <= ps2: " << (ps1 <= ps2) << endl;
    cout << "ps1 > ps2: " << (ps1 > ps2) << endl;
    cout << "ps1 < ps2: " << (ps1 < ps2) << endl;

    return 0;
}
