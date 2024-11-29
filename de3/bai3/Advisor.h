#include "Piece.h"

class Advisor : public Piece {
    public:
        Advisor(int x, int y, Color color);
        void move() override;
        void display() override;
};