#include "class.h"

int32_t main() {
    List myList;
    int n;

    // Vòng lặp nhập các chỉ thị từ người dùng
    while (true) {
        cout << "Nhap chi thi: ";
        cin >> n;

        if (n == -1) {
            // Nếu n = -1 thì thoát vòng lặp
            break;
        }

        if (n == 0) {
            // Thêm phần tử vào list
            double x;
            cout << "Nhap gia tri x: ";
            cin >> x;
            myList.Add(x);
        } else if (n == 1) {
            // Xóa phần tử đầu tiên có giá trị x
            double x;
            cout << "Nhap gia tri x can xoa: ";
            cin >> x;
            myList.RemoveFirst(x);
        } else if (n == 2) {
            // Xóa tất cả các phần tử có giá trị x
            double x;
            cout << "Nhap gia tri x can xoa het: ";
            cin >> x;
            myList.RemoveAll(x);
        } else if (n == 3) {
            // Thay thế phần tử tại vị trí x bằng y
            unsigned int index;
            double y;
            cout << "Nhap vi tri index va gia tri y: ";
            cin >> index >> y;
            myList.Replace(index, y);
        } else {
            cout << "Chi thi khong hop le!" << endl;
        }
    }

    // In list hiện tại sau khi thực hiện các chỉ thị
    myList.Print();

    return 0;
}
