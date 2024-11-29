#include "Elephant.h"

Elephant::Elephant(int x, int y, Color color) : Piece(x, y, color, "Elephant") {}

void Elephant::move() {
    cout << "Tượng di chuyển 2 ô theo hướng chéo trong cung." << endl;
}

void Elephant::display() {
    cout << "Tuong " << (color == RED ? "Do" : "Den") << " tai (" << x << "," << y << ")" << endl;
}

