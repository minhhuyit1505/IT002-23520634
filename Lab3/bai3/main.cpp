#include "class.h"

int32_t main() {
    ThoiGian t1, t2;

    // Nhập thời gian đầu tiên
    cout << "Nhap thoi gian 1 (gio phut giay): ";
    cin >> t1;

    // Nhập thời gian thứ hai
    cout << "Nhap thoi gian 2 (gio phut giay): ";
    cin >> t2;

    // Xuất các thời gian
    cout << "Thoi gian 1: " << t1 << endl;
    cout << "Thoi gian 2: " << t2 << endl;

    // Thực hiện các phép toán
    cout << "Tong (t1 + 3600 giay): " << (t1 + 3600) << endl; // Thêm 1 giờ
    cout << "Hieu (t1 - 1800 giay): " << (t1 - 1800) << endl; // Giảm 30 phút
    cout << "Tong (t1 + t2): " << (t1 + t2) << endl; // Cộng thời gian

    // So sánh các thời gian
    cout << "t1 == t2: " << (t1 == t2) << endl;
    cout << "t1 != t2: " << (t1 != t2) << endl;

    // Tăng và giảm thời gian
    cout << "t1 sau khi tang 1 giay: " << ++t1 << endl;
    cout << "t1 sau khi giam 1 giay: " << --t1 << endl;

    return 0;
}
