#include "Board.h"

signed main() {

    Board board;
    board.display();
    board.move(1, 1, 3, 1);
    board.display();
    board.move(1, 1, 1, 2);
    board.display();



    return 0;
}