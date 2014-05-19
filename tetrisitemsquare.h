#ifndef TETRISITEMSQUARE_H
#define TETRISITEMSQUARE_H

#include "tetrisitem.h"

class TetrisField;

class TetrisItemSquare : public TetrisItem
{
private:
    static const int initialCells0[];
    static const int initialCells90[];
    static const int initialCells180[];
    static const int initialCells270[];
public:
    TetrisItemSquare(TetrisField *field);
    void setAngle(int angle);
};

#endif // TETRISITEMSQUARE_H
