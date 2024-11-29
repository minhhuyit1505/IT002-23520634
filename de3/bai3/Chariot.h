#include "Piece.h"

class Chariot : public Piece {
    public:
        Chariot(int x, int y, Color color);
        void move() override;
        void display() override;
};