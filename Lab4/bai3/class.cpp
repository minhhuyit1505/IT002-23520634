#include "class.h"
#include <cstdlib> // Để sử dụng hàm rand()

// Constructor của lớp GiaSuc
GiaSuc::GiaSuc(int soLuong) : soLuong(soLuong) {}

// Phương thức sinh con (ảo)
int GiaSuc::SinhCon() {
    int tongCon = 0;
    for (int i = 0; i < soLuong; i++) {
        tongCon += rand() % 3 + 1; // Số con mỗi gia súc ngẫu nhiên trong khoảng 1-3
    }
    soLuong += tongCon;
    return tongCon;
}

// Constructor của lớp Bo
Bo::Bo(int soLuong) : GiaSuc(soLuong) {}

// Phương thức cho sữa của bò
int Bo::ChoSua() const {
    int tongSua = 0;
    for (int i = 0; i < soLuong; i++) {
        tongSua += rand() % 21; // Lượng sữa ngẫu nhiên trong khoảng 0-20 lít
    }
    return tongSua;
}

// Tiếng kêu của bò
string Bo::Keu() const {
    return "Boo!";
}

// Constructor của lớp Cuu
Cuu::Cuu(int soLuong) : GiaSuc(soLuong) {}

// Phương thức cho sữa của cừu
int Cuu::ChoSua() const {
    int tongSua = 0;
    for (int i = 0; i < soLuong; i++) {
        tongSua += rand() % 6; // Lượng sữa ngẫu nhiên trong khoảng 0-5 lít
    }
    return tongSua;
}

// Tiếng kêu của cừu
string Cuu::Keu() const {
    return "Bee!";
}

// Constructor của lớp De
De::De(int soLuong) : GiaSuc(soLuong) {}

// Phương thức cho sữa của dê
int De::ChoSua() const {
    int tongSua = 0;
    for (int i = 0; i < soLuong; i++) {
        tongSua += rand() % 11; // Lượng sữa ngẫu nhiên trong khoảng 0-10 lít
    }
    return tongSua;
}

// Tiếng kêu của dê
string De::Keu() const {
    return "Mee!";
}

