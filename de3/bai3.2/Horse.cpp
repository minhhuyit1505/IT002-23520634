#include "Horse.h"

Horse::Horse(int x, int y, Color color) : Piece(x, y, color, "Horse") {}

void Horse::move() {
    cout << "Mã di chuyển theo kiểu L: ngang 2, dọc 1 (hoặc dọc 2, ngang 1)." << endl;
}

void Horse::display() {
    cout << "Ma " << (color == RED ? "Do" : "Den") << " tai (" << x << "," << y << ")" << endl;
}

