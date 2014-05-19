#ifndef TETRISITEM_H
#define TETRISITEM_H

#include <QPainter>

class TetrisField;

class TetrisItem
{
protected:
    int left_;
    int top_;
    int angle_;
    QColor color_;
    int filledCells_[16];
    TetrisField *field_;
public:
    TetrisItem(TetrisField *field);
    virtual ~TetrisItem();
    void draw(QPainter *painter, int size);
    bool check(int left, int top);
    virtual void setAngle(int angle) = 0;
    bool moveLeft();
    bool moveRight();
    bool moveDown();
    bool rotate();
    void fall();
};

#endif // TETRISITEM_H


