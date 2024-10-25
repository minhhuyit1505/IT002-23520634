#include "class.h"

// Constructor mặc định
PhanSo::PhanSo() : iTu(0), iMau(1) {}

// Constructor có tham số
PhanSo::PhanSo(int Tu, int Mau) : iTu(Tu), iMau(Mau) {
    ChuanHoa();
}

// Phương thức chuẩn hóa phân số
void PhanSo::ChuanHoa() {
    if (iMau == 0) {
        throw invalid_argument("Mau so khong duoc bang 0.");
    }
    if (iMau < 0) {  // Đưa mẫu số về dương
        iTu = -iTu;
        iMau = -iMau;
    }
    int gcd = std::__gcd(iTu, iMau);
    iTu /= gcd;
    iMau /= gcd;
}

// Các phương thức operator
PhanSo PhanSo::operator+(const PhanSo &other) {
    return PhanSo(iTu * other.iMau + other.iTu * iMau, iMau * other.iMau);
}

PhanSo PhanSo::operator-(const PhanSo &other) {
    return PhanSo(iTu * other.iMau - other.iTu * iMau, iMau * other.iMau);
}

PhanSo PhanSo::operator*(const PhanSo &other) {
    return PhanSo(iTu * other.iTu, iMau * other.iMau);
}

PhanSo PhanSo::operator/(const PhanSo &other) {
    if (other.iTu == 0) throw invalid_argument("Khong the chia cho phan so co tu bang 0.");
    return PhanSo(iTu * other.iMau, iMau * other.iTu);
}

bool PhanSo::operator==(const PhanSo &other) {
    return (iTu == other.iTu && iMau == other.iMau);
}

bool PhanSo::operator!=(const PhanSo &other) {
    return !(*this == other);
}

bool PhanSo::operator>=(const PhanSo &other) {
    return (*this > other || *this == other);
}

bool PhanSo::operator<=(const PhanSo &other) {
    return (*this < other || *this == other);
}

bool PhanSo::operator>(const PhanSo &other) {
    return (iTu * other.iMau > other.iTu * iMau);
}

bool PhanSo::operator<(const PhanSo &other) {
    return (iTu * other.iMau < other.iTu * iMau);
}

// Nhập và xuất
istream& operator>>(istream &in, PhanSo &ps) {
    in >> ps.iTu >> ps.iMau;
    ps.ChuanHoa();
    return in;
}

ostream& operator<<(ostream &out, const PhanSo &ps) {
    out << ps.iTu << "/" << ps.iMau;
    return out;
}
