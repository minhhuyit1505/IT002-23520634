#include"Piece.h"

class Board {
    private:
        Piece* board[11][10];
    public:
        Board();
        ~Board();
        void display();
        void move(int x1, int y1, int x2, int y2);
        void setboard();
        void setpiece(int x, int y, Piece* piece);
        Piece* getpiece(int x, int y);
};
