#include "class.h"

int32_t main() {
    Diem diem;

    // Nhập tọa độ của điểm
    cout << "Nhap toa do cua diem:" << endl;
    diem.Nhap();

    int n; // Số lượng chỉ thị
    cout << "Nhap so luong chi thi: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x; // Mã chỉ thị
        cout << "Nhap chi thi: ";
        cin >> x;

        if (x == 1) {
            // Nhân đôi tung độ và hoành độ
            diem.NhanDoi();
        } else if (x == 2) {
            // Gán điểm về gốc tọa độ
            diem.VeGocToaDo();
        } else if (x == 3) {
            // Tịnh tiến theo trục x hoặc y
            int k, d;
            cout << "Nhap huong tinh tien (0: theo truc x, khac 0: theo truc y) va do tinh tien: ";
            cin >> k >> d;
            diem.TinhTien(k, d);
        } else {
            // Không làm gì
            cout << "Chi thi khong hop le." << endl;
        }
    }

    // Xuất kết quả cuối cùng
    cout << "Toa do diem cuoi cung: ";
    diem.Xuat();

    return 0;
}
