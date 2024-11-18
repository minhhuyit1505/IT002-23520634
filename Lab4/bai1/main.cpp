#include "class.h"

signed main() {
    // Nhập thông tin cho quản lý
    QuanLy ql(101, "Nguyen Van A", 2000000, 0.1);

    // Nhập thông tin cho kỹ sư
    KySu ks(102, "Tran Thi B", 1500000, 5);

    // Xuất thông tin quản lý
    cout << "Thong tin Quan Ly:" << endl;
    ql.Xuat();

    // Xuất thông tin kỹ sư
    cout << "Thong tin Ky Su:" << endl;
    ks.Xuat();

    return 0;
}
