#include "class.h"

int32_t main() {
    int n;
    cout << "Nhap so diem cua da giac: ";
    cin >> n;

    // Kiểm tra nếu số điểm nhỏ hơn 3 thì không thể tạo thành đa giác
    if (n <= 2) {
        cout << "So diem phai lon hon 2" << endl;
        return 0;
    }

    // Khởi tạo đối tượng đa giác
    Polygon polygon(n);

    // Nhập tọa độ các đỉnh
    polygon.Nhap();

    // Tính diện tích và xuất kết quả
    float dienTich = polygon.TinhDienTich();
    cout << fixed << setprecision(1) << dienTich << endl;

    return 0;
}
