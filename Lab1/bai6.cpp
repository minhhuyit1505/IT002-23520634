#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n), B(m);

    // Nhập phần tử cho mảng A
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Nhập phần tử cho mảng B
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    int count = 0; // Đếm số lần xuất hiện
    vector<int> tapViTri; // Danh sách chỉ số bắt đầu

    // Tìm kiếm mảng A trong mảng B
    for (int i = 0; i <= m - n; i++) {
        bool found = true;
        for (int j = 0; j < n; j++) {
            if (B[i + j] != A[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            count++;
            tapViTri.push_back(i);
        }
    }

    // Xuất kết quả
    cout << "So lan mang A xuat hien trong mang B: " << count << endl; // In số lần xuất hiện
    cout << "Danh sach cac chi so bat dau: "; // Ghi chú trước khi in chỉ số
    for (auto viTri : tapViTri) {
        cout << viTri << " "; // In từng chỉ số
    }
    cout << endl;

    return 0;
}
