#include "Chariot.h"

Chariot::Chariot(int x, int y, Color color) : Piece(x, y, color, "Chariot") {}

void Chariot::move() {
    cout << "Xe di chuyển ngang hoặc dọc trên bàn cờ." << endl;
}

void Chariot::display() {
    cout << "Xe " << (color == RED ? "Đỏ" : "Đen") << " tại (" << x << "," << y << ")" << endl;
}



