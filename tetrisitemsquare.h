#ifndef TETRISITEMSQUARE_H
#define TETRISITEMSQUARE_H

#include "tetrisitem.h"

class TetrisItemSquare : public TetrisItem
{
public:
    TetrisItemSquare();
    void draw(QPainter *painter);
    bool check(int left, int top, int angle);
};

#endif // TETRISITEMSQUARE_H
