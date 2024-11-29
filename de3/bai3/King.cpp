#include "King.h"

King::King(int x, int y, Color color) : Piece(x, y, color, "King") {}

void King::move() {
    cout << "Tướng di chuyển một ô theo hướng ngang hoặc dọc trong cung." << endl;
}

void King::display() {
    cout << "Tướng " << (color == RED ? "Đỏ" : "Đen") << " tại (" << x << "," << y << ")" << endl;
}
