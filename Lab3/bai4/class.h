#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H

#include <bits/stdc++.h>
using namespace std;

class NgayThangNam {
private:
    int iNgay;   // Ngày
    int iThang;  // Tháng
    int iNam;    // Năm

    void ChuanHoa(); // Hàm chuẩn hóa ngày tháng năm

public:
    // Các constructor
    NgayThangNam();                             // Constructor mặc định
    NgayThangNam(int Nam, int Thang, int Ngay); // Constructor có tham số

    // Tính số ngày trong năm
    int TinhNgay() const;

    // Phương thức nhập và xuất
    friend istream& operator>>(istream &in, NgayThangNam &ntn);
    friend ostream& operator<<(ostream &out, const NgayThangNam &ntn);

    // Các phương thức operator
    NgayThangNam operator+(int ngay);
    NgayThangNam operator-(int ngay);
    int operator-(const NgayThangNam &other); // Tính số ngày giữa 2 ngày
    NgayThangNam& operator++(); // Tiền tố
    NgayThangNam operator++(int); // Hậu tố
    NgayThangNam& operator--(); // Tiền tố
    NgayThangNam operator--(int); // Hậu tố
    bool operator==(const NgayThangNam &other);
    bool operator!=(const NgayThangNam &other);
    bool operator>=(const NgayThangNam &other);
    bool operator<=(const NgayThangNam &other);
    bool operator>(const NgayThangNam &other);
    bool operator<(const NgayThangNam &other);
};

#endif
