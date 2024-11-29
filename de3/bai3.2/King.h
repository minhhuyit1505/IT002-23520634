#include "Piece.h"

class King : public Piece {
    public:
        King(int x, int y, Color color);
        void move() override;
        void display() override;
};
