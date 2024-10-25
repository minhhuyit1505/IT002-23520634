#ifndef SOPHUC_H
#define SOPHUC_H

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
#define endl "\n"

class SoPhuc {
private:
    double dThuc;  // Phần thực
    double dAo;    // Phần ảo

public:
    // Các constructor
    SoPhuc();                                // Constructor mặc định
    SoPhuc(double thuc, double ao);         // Constructor có tham số

    // Các phương thức operator
    SoPhuc operator+(const SoPhuc &other);
    SoPhuc operator-(const SoPhuc &other);
    SoPhuc operator*(const SoPhuc &other);
    SoPhuc operator/(const SoPhuc &other);
    bool operator==(const SoPhuc &other);
    bool operator!=(const SoPhuc &other);

    // Nhập và xuất
    friend istream& operator>>(istream &in, SoPhuc &sp);
    friend ostream& operator<<(ostream &out, const SoPhuc &sp);
};

#endif
