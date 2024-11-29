#include "Advisor.h"

Advisor::Advisor(int x, int y, Color color) : Piece(x, y, color, "Advisor") {}

void Advisor::move() {
    cout << "Sĩ di chuyển một ô theo hướng chéo trong cung." << endl;
}

void Advisor::display() {
    cout << "Sĩ " << (color == RED ? "Đỏ" : "Đen") << " tại (" << x << "," << y << ")" << endl;
}