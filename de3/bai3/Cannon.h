#include "Piece.h"

class Cannon : public Piece {
    public:
        Cannon(int x, int y, Color color);
        void move() override;
        void display() override;
};