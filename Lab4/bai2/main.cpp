#include "class.h"

signed main() {
    // Khởi tạo các phòng
    Deluxe a(3, 50000, 30000);
    Deluxe b(5, 60000, 40000);
    Premium c(4, 50000);
    Premium d(2, 40000);
    Business e(6);

    // Tính doanh thu cho từng phòng
    double doanhThuA = a.DoanhThu();
    double doanhThuB = b.DoanhThu();
    double doanhThuC = c.DoanhThu();
    double doanhThuD = d.DoanhThu();
    double doanhThuE = e.DoanhThu();

    // Tìm loại phòng có doanh thu cao nhất
    double doanhThuMax = max({doanhThuA, doanhThuB, doanhThuC, doanhThuD, doanhThuE});
    cout << "Doanh thu cao nhat cua loai phong la: " << doanhThuMax << " VND" << endl;

    return 0;
}
