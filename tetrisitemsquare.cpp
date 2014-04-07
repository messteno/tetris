#include "tetrisitemsquare.h"

TetrisItemSquare::TetrisItemSquare()
{
}

void TetrisItemSquare::draw(QPainter *painter)
{
    painter->fillRect(left_ * 20, top_ * 20,
                      20, 20, QColor(Qt::red));
}

bool TetrisItemSquare::check(int left, int top, int angle)
{
    return true;
}
