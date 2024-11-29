#include "King.h"

King::King(int x, int y, Color color) : Piece(x, y, color, "King") {}

void King::move() {
    cout << "Tướng di chuyển một ô theo hướng ngang hoặc dọc trong cung." << endl;
}

void King::display() {
    cout << "King " << (color == RED ? "Do" : "Den") << " tai (" << x << "," << y << ")" << endl;
}
