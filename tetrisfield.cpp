#include "tetrisfield.h"
#include <QPainter>
#include <QDebug>
#include <string.h>
#include "tetrisitemsquare.h"

TetrisField::TetrisField(QWidget *parent) :
    QWidget(parent)
{
    rowCount_ = 20;
    columnCount_ = 10;

    elementsMap_ = new int[rowCount_ * columnCount_];
    memset (elementsMap_, 0,
            rowCount_ * columnCount_ * sizeof(int));

    timer_ = new QTimer(this);
    connect(timer_, SIGNAL(timeout()),
            this, SLOT(timerCallback()));

    item_ = 0;
    addNewItem();
    startGame();
}

TetrisField::~TetrisField()
{
    delete [] elementsMap_;
    delete item_;
}

void TetrisField::paintEvent(QPaintEvent *)
{
    QPainter painter;
    painter.begin(this);
    painter.fillRect(0, 0, width(), height(),
                     QColor(33, 77, 110));

    int elementHeight = height() / rowCount_;
    int elementWidth = width() / columnCount_;

    painter.setPen(QColor(0xaa, 0xaa, 0xaa));
    for(int i = 0; i < rowCount_; ++i)
    {
        for (int j = 0; j < columnCount_; ++j)
        {
            painter.drawRect(j * elementWidth,
                             i * elementHeight,
                             elementWidth,
                             elementHeight);
        }
    }
    item_->draw(&painter, elementWidth);
    painter.end();
}

void TetrisField::addNewItem()
{
    if (item_ != 0)
        delete item_;
    item_ = new TetrisItemSquare(this);
}

void TetrisField::startGame()
{
    timer_->start(200);
}

void TetrisField::endGame()
{
    timer_->stop();
}

void TetrisField::timerCallback()
{
    item_->moveDown();
    update();
}
