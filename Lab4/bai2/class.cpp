#include "class.h"

// Constructor của lớp Phong
Phong::Phong(int soDem) : soDem(soDem) {}

// Phương thức tính doanh thu phòng (ảo) cho lớp Phong
double Phong::DoanhThu() const {
    return 0;
}

// Constructor của lớp Deluxe
Deluxe::Deluxe(int soDem, double phiDichVu, double phiPhucVu)
    : Phong(soDem), phiDichVu(phiDichVu), phiPhucVu(phiPhucVu) {}

// Phương thức tính doanh thu cho loại phòng Deluxe
double Deluxe::DoanhThu() const {
    return soDem * 750000 + phiDichVu + phiPhucVu;
}

// Constructor của lớp Premium
Premium::Premium(int soDem, double phiDichVu)
    : Phong(soDem), phiDichVu(phiDichVu) {}

// Phương thức tính doanh thu cho loại phòng Premium
double Premium::DoanhThu() const {
    return soDem * 500000 + phiDichVu;
}

// Constructor của lớp Business
Business::Business(int soDem) : Phong(soDem) {}

// Phương thức tính doanh thu cho loại phòng Business
double Business::DoanhThu() const {
    return soDem * 300000;
}
