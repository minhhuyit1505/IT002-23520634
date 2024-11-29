#include "Piece.h"

class Elephant : public Piece {
    public:
        Elephant(int x, int y, Color color);
        void move() override;
        void display() override;
};