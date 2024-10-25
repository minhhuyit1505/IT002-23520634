#include "class.h"

int main() {
    NgayThangNam date1, date2;

    // Nhập ngày tháng năm đầu tiên
    cout << "Nhap ngay thang nam 1 (ngay thang nam): ";
    cin >> date1;

    // Nhập ngày tháng năm thứ hai
    cout << "Nhap ngay thang nam 2 (ngay thang nam): ";
    cin >> date2;

    // Xuất các ngày tháng năm
    cout << "Ngay thang nam 1: " << date1 << endl;
    cout << "Ngay thang nam 2: " << date2 << endl;

    // Thực hiện các phép toán
    cout << "Tong (date1 + 10 ngay): " << (date1 + 10) << endl; // Thêm 10 ngày
    cout << "Hieu (date1 - 5 ngay): " << (date1 - 5) << endl;   // Giảm 5 ngày
    cout << "Hieu (date1 - date2): " << (date1 - date2) << endl; // Tính số ngày giữa 2 ngày

    // So sánh các ngày tháng năm
    cout << "date1 == date2: " << (date1 == date2) << endl;
    cout << "date1 != date2: " << (date1 != date2) << endl;

    // Tăng và giảm ngày
    cout << "date1 sau khi tang 1 ngay: " << ++date1 << endl;
    cout << "date1 sau khi giam 1 ngay: " << --date1 << endl;

    return 0;
}
