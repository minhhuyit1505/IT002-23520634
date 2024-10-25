#include "class.h"

// Constructor mặc định
ThoiGian::ThoiGian() : iGio(0), iPhut(0), iGiay(0) {}

// Constructor có tham số
ThoiGian::ThoiGian(int Gio, int Phut, int Giay) : iGio(Gio), iPhut(Phut), iGiay(Giay) {
    ChuanHoa();
}

// Hàm chuẩn hóa thời gian
void ThoiGian::ChuanHoa() {
    if (iGiay >= 60) {
        iPhut += iGiay / 60;
        iGiay %= 60;
    }
    if (iPhut >= 60) {
        iGio += iPhut / 60;
        iPhut %= 60;
    }
}

// Tính giây tương ứng
int ThoiGian::TinhGiay() const {
    return iGio * 3600 + iPhut * 60 + iGiay;
}

// Tính lại giờ từ giây
void ThoiGian::TinhLaiGio(int Giay) {
    iGiay += Giay;
    ChuanHoa();
}

// Các phương thức operator
ThoiGian ThoiGian::operator+(int Giay) {
    ThoiGian tg = *this;
    tg.TinhLaiGio(Giay);
    return tg;
}

ThoiGian ThoiGian::operator-(int Giay) {
    ThoiGian tg = *this;
    tg.TinhLaiGio(-Giay);
    return tg;
}

ThoiGian ThoiGian::operator+(const ThoiGian &a) {
    return ThoiGian(iGio + a.iGio, iPhut + a.iPhut, iGiay + a.iGiay);
}

ThoiGian ThoiGian::operator-(const ThoiGian &a) {
    return ThoiGian(iGio - a.iGio, iPhut - a.iPhut, iGiay - a.iGiay);
}

ThoiGian& ThoiGian::operator++() {
    TinhLaiGio(1);
    return *this;
}

ThoiGian ThoiGian::operator++(int) {
    ThoiGian temp = *this;
    ++(*this);
    return temp;
}

ThoiGian& ThoiGian::operator--() {
    TinhLaiGio(-1);
    return *this;
}

ThoiGian ThoiGian::operator--(int) {
    ThoiGian temp = *this;
    --(*this);
    return temp;
}

bool ThoiGian::operator==(const ThoiGian &other) {
    return (iGio == other.iGio && iPhut == other.iPhut && iGiay == other.iGiay);
}

bool ThoiGian::operator!=(const ThoiGian &other) {
    return !(*this == other);
}

bool ThoiGian::operator>=(const ThoiGian &other) {
    return (TinhGiay() >= other.TinhGiay());
}

bool ThoiGian::operator<=(const ThoiGian &other) {
    return (TinhGiay() <= other.TinhGiay());
}

bool ThoiGian::operator>(const ThoiGian &other) {
    return (TinhGiay() > other.TinhGiay());
}

bool ThoiGian::operator<(const ThoiGian &other) {
    return (TinhGiay() < other.TinhGiay());
}

// Nhập và xuất
istream& operator>>(istream &in, ThoiGian &tg) {
    in >> tg.iGio >> tg.iPhut >> tg.iGiay;
    tg.ChuanHoa(); // Chuẩn hóa ngay khi nhập
    return in;
}

ostream& operator<<(ostream &out, const ThoiGian &tg) {
    out << tg.iGio << "h " << tg.iPhut << "m " << tg.iGiay << "s";
    return out;
}
