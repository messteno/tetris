#include "tetrisitem.h"

TetrisItem::TetrisItem()
{
    left_ = 4;
    top_ = 0;
    angle_ = 0;
}

TetrisItem::~TetrisItem()
{

}

bool TetrisItem::moveLeft()
{
    int newLeft = left_ - 1;
    if (check(newLeft, top_, angle_) == true)
    {
        left_ = newLeft;
        return true;
    }
    return false;
}

bool TetrisItem::moveRight()
{
    int newLeft = left_ + 1;
    if (check(newLeft, top_, angle_) == true)
    {
        left_ = newLeft;
        return true;
    }
    return false;
}

bool TetrisItem::moveDown()
{
    int newTop = top_ + 1;
    if (check(left_, newTop, angle_) == true)
    {
        top_ = newTop;
        return true;
    }
    return false;
}

bool TetrisItem::rotate(int angle)
{
    if (angle != 90 && angle != -90)
        return false;
    int newAngle = (angle_ + angle) % 360;
    if (check (left_, top_, newAngle) == true)
    {
        angle_ = newAngle;
        return true;
    }
    return false;
}

void TetrisItem::fall()
{
    while (moveDown())
        ;
}





