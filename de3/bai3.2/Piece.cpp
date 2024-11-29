#include "Piece.h"

Piece::Piece(int x, int y, Color color, string type) {
    this->x = x;
    this->y = y;
    this->color = color;
    this->type = type;
}

void Piece::setpos(int x, int y) {
    this->x = x;
    this->y = y;
}

pair<int, int> Piece::getpos() {
    return make_pair(x, y);
}

Color Piece::getcolor() {
    return color;
}

string Piece::gettype() {
    return type;
}



