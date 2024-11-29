#include "Board.h"
#include "King.h"
#include "Advisor.h"
#include "Elephant.h"
#include "Horse.h"
#include "Chariot.h"
#include "Cannon.h"
#include "Pawn.h"


Board::Board() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 9; j++) {
            board[i][j] = NULL;
        }
    }
    setboard();
}

Board::~Board() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 9; j++) {
            if (board[i][j] != NULL) {
                delete board[i][j];
            }
        }
    }
}

void Board::display() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 9; j++) {
            if (board[i][j] != NULL) {
                board[i][j]->display();
            }
        }
    }
}

void Board::move(int x1, int y1, int x2, int y2) {
    if (board[x1][y1] == NULL) {
        cout << "Không có quân cờ tại vị trí (" << x1 << "," << y1 << ")" << endl;
        return;
    }
    if (board[x2][y2] != NULL) {
        cout << "Vị trí (" << x2 << "," << y2 << ") đã có quân cờ" << endl;
        return;
    }
    board[x2][y2] = board[x1][y1];
    board[x1][y1] = NULL;
    board[x2][y2]->setpos(x2, y2);
}

void Board::setboard() {


    board[1][1] = new Chariot(1, 1, RED);
    board[1][9] = new Chariot(1, 9, RED);
    board[1][2] = new Horse(1, 2, RED);
    board[1][8] = new Horse(1, 8, RED);
    board[1][3] = new Elephant(1, 3, RED);
    board[1][7] = new Elephant(1, 7, RED);
    board[1][4] = new Advisor(1, 4, RED);
    board[1][6] = new Advisor(1, 6, RED);
    board[1][5] = new King(1, 5, RED);
    board[3][2] = new Cannon(3, 2, RED);
    board[3][8] = new Cannon(3, 8, RED);
    board[4][1] = new Pawn(4, 1, RED);
    board[4][3] = new Pawn(4, 3, RED);
    board[4][5] = new Pawn(4, 5, RED);
    board[4][7] = new Pawn(4, 7, RED);
    board[4][9] = new Pawn(4, 9, RED);

    board[10][1] = new Chariot(10, 1, BLACK);
    board[10][9] = new Chariot(10, 9, BLACK);
    board[10][2] = new Horse(10, 2, BLACK);
    board[10][8] = new Horse(10, 8, BLACK);
    board[10][3] = new Elephant(10, 3, BLACK);
    board[10][7] = new Elephant(10, 7, BLACK);
    board[10][4] = new Advisor(10, 4, BLACK);
    board[10][6] = new Advisor(10, 6, BLACK);
    board[10][5] = new King(10, 5, BLACK);
    board[8][2] = new Cannon(8, 2, BLACK);
    board[8][8] = new Cannon(8, 8, BLACK);
    board[7][1] = new Pawn(7, 1, BLACK);
    board[7][3] = new Pawn(7, 3, BLACK);
    board[7][5] = new Pawn(7, 5, BLACK);
    board[7][7] = new Pawn(7, 7, BLACK);
    board[7][9] = new Pawn(7, 9, BLACK);

}

void Board::setpiece(int x, int y, Piece* piece) {
    board[x][y] = piece;
}