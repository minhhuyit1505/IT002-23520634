#include<bits/stdc++.h>

#define int long long

using namespace std;

struct Ngay {
    int ngay;
    int thang;
    int nam;
};

bool laNamNhuan(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int soNgayTrongThang(int month, int year) {
    if (month == 2) {
        return laNamNhuan(year) ? 29 : 28;
    }
    return (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;
}

Ngay ngayKeTiep(Ngay date) {
    date.ngay++;
    if (date.ngay > soNgayTrongThang(date.thang, date.nam)) {
        date.ngay = 1;
        date.thang++;
        if (date.thang > 12) {
            date.thang = 1;
            date.nam++;
        }
    }
    return date;
}

Ngay ngayTruoc(Ngay date) {
    date.ngay--;
    if (date.ngay < 1) {
        date.thang--;
        if (date.thang < 1) {
            date.thang = 12;
            date.nam--;
        }
        date.ngay = soNgayTrongThang(date.thang, date.nam);
    }
    return date;
}

int ngayTrongNam(Ngay date) {
    int dayCount = 0;
    for (int month = 1; month < date.thang; month++) {
        dayCount += soNgayTrongThang(month, date.nam);
    }
    dayCount += date.ngay;
    return dayCount;
}

void nhapNgay(Ngay &date) {
    cin >> date.ngay >> date.thang >> date.nam;
}

signed main() {
    Ngay date;
    nhapNgay(date);

    Ngay next = ngayKeTiep(date);
    Ngay previous = ngayTruoc(date);
    int dayOfYearResult = ngayTrongNam(date);

    cout << "Ngay ke tiep: " << next.ngay << "/" << next.thang << "/" << next.nam << endl;
    cout << "Ngay truoc do: " << previous.ngay << "/" << previous.thang << "/" << previous.nam << endl;
    cout << "Ngay thu " << dayOfYearResult << " trong nam." << endl;

    return 0;
}

