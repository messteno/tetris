#include "tetrisitemsquare.h"
#include <QDebug>

const int TetrisItemSquare::initialCells0[] = { 0, 1, 1, 0,
                                                0, 1, 1, 0,
                                                0, 0, 0, 0,
                                                0, 0, 0, 0 };

const int TetrisItemSquare::initialCells90[] = { 0, 1, 1, 0,
                                                 0, 1, 1, 0,
                                                 0, 0, 0, 0,
                                                 0, 0, 0, 0 };

const int TetrisItemSquare::initialCells180[] = { 0, 1, 1, 0,
                                                  0, 1, 1, 0,
                                                  0, 0, 0, 0,
                                                  0, 0, 0, 0 };

const int TetrisItemSquare::initialCells270[] = { 0, 1, 1, 0,
                                                  0, 1, 1, 0,
                                                  0, 0, 0, 0,
                                                  0, 0, 0, 0 };

TetrisItemSquare::TetrisItemSquare(TetrisField *field) :
    TetrisItem(field)
{
    color_ = QColor(0, 255, 0);
    memcpy (filledCells_, TetrisItemSquare::initialCells0,
            16 * sizeof (int));
}

void TetrisItemSquare::setAngle(int angle)
{
    switch (angle)
    {
    case 0:
        memcpy (filledCells_, TetrisItemSquare::initialCells0,
                16 * sizeof (int));
        break;
    case 90:
        memcpy (filledCells_, TetrisItemSquare::initialCells90,
                16 * sizeof (int));
        break;
    case 180:
        memcpy (filledCells_, TetrisItemSquare::initialCells180,
                16 * sizeof (int));
        break;
    case 270:
        memcpy (filledCells_, TetrisItemSquare::initialCells270,
                16 * sizeof (int));
        break;
    default:
        return;
    }
    angle_ = angle;
}



