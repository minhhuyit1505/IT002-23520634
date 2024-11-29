#include "Pawn.h"

Pawn::Pawn(int x, int y, Color color) : Piece(x, y, color, "Pawn") {}

void Pawn::move() {
    cout << "Tốt di chuyển một ô mỗi lần, có thể đi ngang nếu đã qua sông." << endl;
}

void Pawn::display() {
    cout << "Tốt " << (color == RED ? "Đỏ" : "Đen") << " tại (" << x << "," << y << ")" << endl;
}

