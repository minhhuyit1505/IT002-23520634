#include "class.h"

int32_t main() {
    SoPhuc sp1, sp2;

    // Nhập số phức đầu tiên
    cout << "Nhap so phuc 1 (thuc ao): ";
    cin >> sp1;

    // Nhập số phức thứ hai
    cout << "Nhap so phuc 2 (thuc ao): ";
    cin >> sp2;

    // Xuất các số phức
    cout << "So phuc 1: " << sp1 << endl;
    cout << "So phuc 2: " << sp2 << endl;

    // Thực hiện các phép toán
    cout << "Tong: " << (sp1 + sp2) << endl;
    cout << "Hieu: " << (sp1 - sp2) << endl;
    cout << "Tich: " << (sp1 * sp2) << endl;
    cout << "Thuong: " << (sp1 / sp2) << endl;

    // So sánh các số phức
    cout << "sp1 == sp2: " << (sp1 == sp2) << endl;
    cout << "sp1 != sp2: " << (sp1 != sp2) << endl;

    return 0;
}
