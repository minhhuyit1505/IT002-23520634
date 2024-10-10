#include "class.h"

int32_t main() {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    cin.ignore(); // Xóa bộ đệm trước khi nhập chuỗi

    ThiSinh *dsThiSinh = new ThiSinh[n]; // Mảng thí sinh

    // Nhập thông tin cho các thí sinh
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin cho thi sinh thu " << i + 1 << ": " << endl;
        dsThiSinh[i].Nhap();
    }

    // In ra thông tin thí sinh có tổng điểm lớn hơn 15
    cout << "\nDanh sach thi sinh co tong diem lon hon 15:" << endl;
    for (int i = 0; i < n; i++) {
        if (dsThiSinh[i].Tong() > 15) {
            dsThiSinh[i].Xuat();
            cout << "Tong diem: " << dsThiSinh[i].Tong() << endl << endl;
        }
    }

    // Tìm thí sinh có điểm cao nhất
    int viTriDiemCaoNhat = 0;
    for (int i = 1; i < n; i++) {
        if (dsThiSinh[i].Tong() > dsThiSinh[viTriDiemCaoNhat].Tong()) {
            viTriDiemCaoNhat = i;
        }
    }

    // In ra thông tin thí sinh có điểm cao nhất
    cout << "Thong tin thi sinh co tong diem cao nhat:" << endl;
    dsThiSinh[viTriDiemCaoNhat].Xuat();
    cout << "Tong diem: " << dsThiSinh[viTriDiemCaoNhat].Tong() << endl;

    // Giả định MSSV của bạn là "123456"
    string MSSV_cua_ban = "123456";
    for (int i = 0; i < n; i++) {
        if (dsThiSinh[i].GetMSSV() == MSSV_cua_ban) {
            cout << "\nThong tin thi sinh co MSSV la " << MSSV_cua_ban << " (ban):" << endl;
            dsThiSinh[i].Xuat();
            cout << "Tong diem: " << dsThiSinh[i].Tong() << endl;
        }
    }

    delete[] dsThiSinh; // Giải phóng bộ nhớ
    return 0;
}
