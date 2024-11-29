#include "Cannon.h"

Cannon::Cannon(int x, int y, Color color) : Piece(x, y, color, "Cannon") {}

void Cannon::move() {
    cout << "Pháo di chuyển ngang hoặc dọc trên bàn cờ, nhảy qua một quân cờ bất kỳ để ăn quân cờ khác." << endl;
}

void Cannon::display() {
    cout << "Pháo " << (color == RED ? "Đỏ" : "Đen") << " tại (" << x << "," << y << ")" << endl;
}