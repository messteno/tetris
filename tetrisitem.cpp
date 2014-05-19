#include "tetrisitem.h"

TetrisItem::TetrisItem(TetrisField *field)
{
    left_ = 4;
    top_ = 0;
    angle_ = 0;
    color_ = QColor(0, 0, 0);
    field_ = field;
}

TetrisItem::~TetrisItem()
{

}

void TetrisItem::draw(QPainter *painter, int size)
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (filledCells_[4 * i + j] != 0)
            {
                painter->fillRect((left_ + j) * size,
                                  (top_ + i ) * size,
                                  size, size, color_);
            }
        }
    }
}

bool TetrisItem::check(int left, int top)
{
    return true;
}

bool TetrisItem::moveLeft()
{
    int newLeft = left_ - 1;
    if (check(newLeft, top_) == true)
    {
        left_ = newLeft;
        return true;
    }
    return false;
}

bool TetrisItem::moveRight()
{
    int newLeft = left_ + 1;
    if (check(newLeft, top_) == true)
    {
        left_ = newLeft;
        return true;
    }
    return false;
}

bool TetrisItem::moveDown()
{
    int newTop = top_ + 1;
    if (check(left_, newTop) == true)
    {
        top_ = newTop;
        return true;
    }
    return false;
}

bool TetrisItem::rotate()
{
    int oldAngle = angle_;
    int newAngle = (angle_ + 90) % 360;

    setAngle(newAngle);
    if (check(left_, top_) == false)
    {
        setAngle(oldAngle);
        return false;
    }

    return true;
}

void TetrisItem::fall()
{
    while (moveDown())
        ;
}





