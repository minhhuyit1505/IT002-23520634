#ifndef PIECE_H
#define PIECE_H

#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

enum Color {RED, BLACK};

class Piece {
    protected:
        int x, y;
        Color color;
        string type;
    public:
        Piece(int x, int y, Color color, string type);
        virtual void move() = 0;
        virtual void display() = 0;
        virtual void setpos(int x, int y);
        virtual pair<int, int> getpos();
        virtual Color getcolor();
        virtual string gettype();
};

#endif // PIECE_H
