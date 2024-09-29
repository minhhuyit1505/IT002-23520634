#include <bits/stdc++.h>

#define int long long
#define double long double

using namespace std;

struct HocSinh {
    string hoTen;
    double diemToan;
    double diemVan;
    double diemNgoaiNgu;
    double diemTrungBinh;
    string xepLoai;
};

bool kiemTraHoTen(const string &hoTen) {
    for (char c : hoTen) {
        if (isdigit(c)) return false; // Kiểm tra xem có ký tự số không
    }
    return true;
}

double nhapDiem(const string &mon) {
    double diem;
    while (true) {
        cin >> diem;
        if (cin.fail() || diem < 0 || diem > 10) {
            cin.clear(); // Xóa cờ lỗi
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Xóa input sai
            cout << "Diem khong hop le! Vui long nhap lai." << endl;
        } else {
            break;
        }
    }
    return diem;
}

void nhapThongTin(HocSinh &hs) {
    cin.ignore();
    getline(cin, hs.hoTen);
    while (!kiemTraHoTen(hs.hoTen)) {
        getline(cin, hs.hoTen);
    }

    hs.diemToan = nhapDiem("Toan");
    hs.diemVan = nhapDiem("Van");
    hs.diemNgoaiNgu = nhapDiem("Ngoai ngu");

    // Tính điểm trung bình
    hs.diemTrungBinh = (2 * hs.diemToan + hs.diemVan + hs.diemNgoaiNgu) / 4;

    // Phân loại
    if (hs.diemTrungBinh >= 9) hs.xepLoai = "Xuat sac";
    else if (hs.diemTrungBinh >= 8) hs.xepLoai = "Gioi";
    else if (hs.diemTrungBinh >= 6.5) hs.xepLoai = "Kha";
    else if (hs.diemTrungBinh >= 5) hs.xepLoai = "Trung binh";
    else hs.xepLoai = "Yeu";
}

void inThongTinHocSinh(const HocSinh &hs) {
    cout << "Ho ten: " << hs.hoTen << ", Diem Toan: " << hs.diemToan
         << ", Diem Van: " << hs.diemVan << ", Diem Ngoai ngu: " << hs.diemNgoaiNgu
         << ", Diem TB: " << fixed << setprecision(2) << hs.diemTrungBinh
         << ", Xep loai: " << hs.xepLoai << endl;
}

signed main() {
    int n;
    cin >> n;

    vector<HocSinh> danhSach(n);

    // Nhập thông tin cho từng học sinh
    for (int i = 0; i < n; i++) {
        nhapThongTin(danhSach[i]);
    }

    // Tìm học sinh có điểm trung bình cao nhất
    HocSinh *hsMax = &danhSach[0];
    for (int i = 1; i < n; i++) {
        if (danhSach[i].diemTrungBinh > hsMax->diemTrungBinh) {
            hsMax = &danhSach[i];
        }
    }

    cout << "\nHoc sinh co diem trung binh cao nhat:" << endl;
    inThongTinHocSinh(*hsMax);

    // Tìm kiếm học sinh theo tên
    string tuKhoa;
    cin.ignore();
    getline(cin, tuKhoa);
    cout << "Ket qua tim kiem:\n";
    for (const auto &hs : danhSach) {
        if (hs.hoTen.find(tuKhoa) != string::npos) {
            inThongTinHocSinh(hs);
        }
    }

    // Xuất danh sách học sinh có điểm toán thấp nhất
    double minDiemToan = danhSach[0].diemToan;
    for (const auto &hs : danhSach) {
        if (hs.diemToan < minDiemToan) {
            minDiemToan = hs.diemToan;
        }
    }

    cout << "\nDanh sach hoc sinh co diem Toan thap nhat:\n";
    for (const auto &hs : danhSach) {
        if (hs.diemToan == minDiemToan) {
            inThongTinHocSinh(hs);
        }
    }

    return 0;
}
