#ifndef PHANSO_H
#define PHANSO_H

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
#define endl "\n"

class PhanSo {
private:
    int iTu;   // Tử
    int iMau;  // Mẫu

    // Phương thức chuẩn hóa phân số
    void ChuanHoa();

public:
    // Các constructor
    PhanSo();                               // Constructor mặc định
    PhanSo(int Tu, int Mau);                // Constructor có tham số

    // Các phương thức operator
    PhanSo operator+(const PhanSo &other);
    PhanSo operator-(const PhanSo &other);
    PhanSo operator*(const PhanSo &other);
    PhanSo operator/(const PhanSo &other);
    bool operator==(const PhanSo &other);
    bool operator!=(const PhanSo &other);
    bool operator>=(const PhanSo &other);
    bool operator<=(const PhanSo &other);
    bool operator>(const PhanSo &other);
    bool operator<(const PhanSo &other);

    // Nhập và xuất
    friend istream& operator>>(istream &in, PhanSo &ps);
    friend ostream& operator<<(ostream &out, const PhanSo &ps);
};

#endif
