#include "class.h"

// Constructor mặc định
SoPhuc::SoPhuc() : dThuc(0), dAo(0) {}

// Constructor có tham số
SoPhuc::SoPhuc(double thuc, double ao) : dThuc(thuc), dAo(ao) {}

// Các phương thức operator
SoPhuc SoPhuc::operator+(const SoPhuc &other) {
    return SoPhuc(dThuc + other.dThuc, dAo + other.dAo);
}

SoPhuc SoPhuc::operator-(const SoPhuc &other) {
    return SoPhuc(dThuc - other.dThuc, dAo - other.dAo);
}

SoPhuc SoPhuc::operator*(const SoPhuc &other) {
    return SoPhuc(dThuc * other.dThuc - dAo * other.dAo,
                  dThuc * other.dAo + dAo * other.dThuc);
}

SoPhuc SoPhuc::operator/(const SoPhuc &other) {
    if (other.dThuc == 0 && other.dAo == 0) {
        throw invalid_argument("Khong the chia cho so phuc 0.");
    }
    double mau = other.dThuc * other.dThuc + other.dAo * other.dAo;
    return SoPhuc((dThuc * other.dThuc + dAo * other.dAo) / mau,
                  (dAo * other.dThuc - dThuc * other.dAo) / mau);
}

bool SoPhuc::operator==(const SoPhuc &other) {
    return (dThuc == other.dThuc && dAo == other.dAo);
}

bool SoPhuc::operator!=(const SoPhuc &other) {
    return !(*this == other);
}

// Nhập và xuất
istream& operator>>(istream &in, SoPhuc &sp) {
    in >> sp.dThuc >> sp.dAo;
    return in;
}

ostream& operator<<(ostream &out, const SoPhuc &sp) {
    out << sp.dThuc << (sp.dAo >= 0 ? " + " : " - ") << fabs(sp.dAo) << "i";
    return out;
}
