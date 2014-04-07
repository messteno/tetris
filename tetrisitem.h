#ifndef TETRISITEM_H
#define TETRISITEM_H

#include <QPainter>

class TetrisItem
{
protected:
    int left_;
    int top_;
    int angle_;
public:
    TetrisItem();
    virtual ~TetrisItem();
    virtual void draw(QPainter *painter) = 0;
    virtual bool check(int left, int top, int angle) = 0;
    bool moveLeft();
    bool moveRight();
    bool moveDown();
    bool rotate(int angle);
    void fall();
};

#endif // TETRISITEM_H
