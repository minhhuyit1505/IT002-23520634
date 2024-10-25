#include "class.h"

// Constructor mặc định
NgayThangNam::NgayThangNam() : iNgay(1), iThang(1), iNam(2000) {}

// Constructor có tham số
NgayThangNam::NgayThangNam(int Nam, int Thang, int Ngay) : iNam(Nam), iThang(Thang), iNgay(Ngay) {
    ChuanHoa();
}

// Hàm chuẩn hóa ngày tháng năm
void NgayThangNam::ChuanHoa() {
    if (iThang < 1) {
        iThang = 1;
    } else if (iThang > 12) {
        iThang = 12;
    }

    int daysInMonth[] = { 31, (iNam % 4 == 0 && (iNam % 100 != 0 || iNam % 400 == 0)) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (iNgay < 1) {
        iNgay = 1;
    } else if (iNgay > daysInMonth[iThang - 1]) {
        iNgay = daysInMonth[iThang - 1];
    }
}

// Tính số ngày trong năm
int NgayThangNam::TinhNgay() const {
    return iNam * 365 + (iThang - 1) * 30 + iNgay; // Tạm thời, không chính xác cho tháng
}

// Các phương thức operator
NgayThangNam NgayThangNam::operator+(int ngay) {
    NgayThangNam temp = *this;
    temp.iNgay += ngay;
    temp.ChuanHoa();
    return temp;
}

NgayThangNam NgayThangNam::operator-(int ngay) {
    NgayThangNam temp = *this;
    temp.iNgay -= ngay;
    temp.ChuanHoa();
    return temp;
}

int NgayThangNam::operator-(const NgayThangNam &other) {
    return TinhNgay() - other.TinhNgay(); // Tính số ngày giữa 2 ngày
}

NgayThangNam& NgayThangNam::operator++() {
    ++iNgay;
    ChuanHoa();
    return *this;
}

NgayThangNam NgayThangNam::operator++(int) {
    NgayThangNam temp = *this;
    ++(*this);
    return temp;
}

NgayThangNam& NgayThangNam::operator--() {
    --iNgay;
    ChuanHoa();
    return *this;
}

NgayThangNam NgayThangNam::operator--(int) {
    NgayThangNam temp = *this;
    --(*this);
    return temp;
}

bool NgayThangNam::operator==(const NgayThangNam &other) {
    return (iNgay == other.iNgay && iThang == other.iThang && iNam == other.iNam);
}

bool NgayThangNam::operator!=(const NgayThangNam &other) {
    return !(*this == other);
}

bool NgayThangNam::operator>=(const NgayThangNam &other) {
    return (TinhNgay() >= other.TinhNgay());
}

bool NgayThangNam::operator<=(const NgayThangNam &other) {
    return (TinhNgay() <= other.TinhNgay());
}

bool NgayThangNam::operator>(const NgayThangNam &other) {
    return (TinhNgay() > other.TinhNgay());
}

bool NgayThangNam::operator<(const NgayThangNam &other) {
    return (TinhNgay() < other.TinhNgay());
}

// Nhập và xuất
istream& operator>>(istream &in, NgayThangNam &ntn) {
    in >> ntn.iNgay >> ntn.iThang >> ntn.iNam;
    ntn.ChuanHoa(); // Chuẩn hóa ngay khi nhập
    return in;
}

ostream& operator<<(ostream &out, const NgayThangNam &ntn) {
    out << ntn.iNgay << "/" << ntn.iThang << "/" << ntn.iNam;
    return out;
}
