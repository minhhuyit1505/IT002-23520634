#include "class.h"

int32_t main() {
    // Tạo đối tượng điểm sử dụng constructor mặc định
    Diem d1;

    // Tạo đối tượng điểm sử dụng constructor có tham số
    Diem d2(3, 4);

    // Tạo đối tượng điểm sử dụng constructor sao chép
    Diem d3(d2);

    // Xuất tọa độ các điểm
    cout << "Toa do diem d1: ";
    d1.Xuat();

    cout << "Toa do diem d2: ";
    d2.Xuat();

    cout << "Toa do diem d3 (copy cua d2): ";
    d3.Xuat();

    // Thay đổi hoành độ và tung độ của d1
    d1.SetHoanhDo(5);
    d1.SetTungDo(7);
    cout << "Toa do diem d1 sau khi thay doi: ";
    d1.Xuat();

    // Tịnh tiến d2
    d2.TinhTien(2, 3);
    cout << "Toa do diem d2 sau khi tinh tien: ";
    d2.Xuat();

    // Lấy giá trị tung độ và hoành độ của d2
    cout << "Tung do cua d2: " << d2.GetTungDo() << endl;
    cout << "Hoanh do cua d2: " << d2.GetHoanhDo() << endl;

    return 0;
}
