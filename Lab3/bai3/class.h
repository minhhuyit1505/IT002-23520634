#ifndef THOIGIAN_H
#define THOIGIAN_H

#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define endl "\n"

class ThoiGian {
private:
    int iGio;   // Giờ
    int iPhut;  // Phút
    int iGiay;  // Giây

    void ChuanHoa(); // Hàm chuẩn hóa thời gian

public:
    // Các constructor
    ThoiGian();                              // Constructor mặc định
    ThoiGian(int Gio, int Phut, int Giay);  // Constructor có tham số

    // Tính giây tương ứng
    int TinhGiay() const;

    // Tính lại giờ từ giây
    void TinhLaiGio(int Giay);

    // Các phương thức operator
    ThoiGian operator+(int Giay);
    ThoiGian operator-(int Giay);
    ThoiGian operator+(const ThoiGian &a);
    ThoiGian operator-(const ThoiGian &a);
    ThoiGian& operator++(); // Tiền tố
    ThoiGian operator++(int); // Hậu tố
    ThoiGian& operator--(); // Tiền tố
    ThoiGian operator--(int); // Hậu tố
    bool operator==(const ThoiGian &other);
    bool operator!=(const ThoiGian &other);
    bool operator>=(const ThoiGian &other);
    bool operator<=(const ThoiGian &other);
    bool operator>(const ThoiGian &other);
    bool operator<(const ThoiGian &other);

    // Nhập và xuất
    friend istream& operator>>(istream &in, ThoiGian &tg);
    friend ostream& operator<<(ostream &out, const ThoiGian &tg);
};

#endif
