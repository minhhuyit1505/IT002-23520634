#include "Piece.h"

class Horse : public Piece {
    public:
        Horse(int x, int y, Color color);
        void move() override;
        void display() override;
};
