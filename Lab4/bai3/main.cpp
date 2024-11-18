#include "class.h"


signed main() {
    srand(time(0)); // Khởi tạo seed cho hàm rand

    // Khởi tạo số lượng gia súc
    Bo bo(10);
    Cuu cuu(15);
    De de(20);

    // a) Tiếng kêu khi tất cả gia súc đói
    cout << "Tieng keu khi tat ca gia suc doi:" << endl;
    for (int i = 0; i < bo.getSoLuong(); i++) {
        cout << bo.Keu() << " ";
    }
    cout << endl;
    for (int i = 0; i < cuu.getSoLuong(); i++) {
        cout << cuu.Keu() << " ";
    }
    cout << endl;
    for (int i = 0; i < de.getSoLuong(); i++) {
        cout << de.Keu() << " ";
    }
    cout << endl;

    // b) Thống kê sau một lứa sinh và một lượt cho sữa
    int soConBo = bo.SinhCon();
    int soConCuu = cuu.SinhCon();
    int soConDe = de.SinhCon();

    int suaBo = bo.ChoSua();
    int suaCuu = cuu.ChoSua();
    int suaDe = de.ChoSua();

    cout << "\nThong ke sau mot lua sinh va cho sua:" << endl;
    cout << "So luong bo: " << bo.getSoLuong() << ", Tong so con bo sinh: " << soConBo << ", Tong sua: " << suaBo << " lit" << endl;
    cout << "So luong cuu: " << cuu.getSoLuong() << ", Tong so con cuu sinh: " << soConCuu << ", Tong sua: " << suaCuu << " lit" << endl;
    cout << "So luong de: " << de.getSoLuong() << ", Tong so con de sinh: " << soConDe << ", Tong sua: " << suaDe << " lit" << endl;

    return 0;
}
