#include "Piece.h"

class Pawn : public Piece {
    public:
        Pawn(int x, int y, Color color);
        void move() override;
        void display() override;
};