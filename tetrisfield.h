#ifndef TETRISFIELD_H
#define TETRISFIELD_H

#include <QWidget>
#include <QTimer>
#include "tetrisitem.h"

class TetrisField : public QWidget
{
    Q_OBJECT
private:
    int rowCount_;
    int columnCount_;
    int *elementsMap_;
    TetrisItem *item_;
    QTimer *timer_;

public:
    explicit TetrisField(QWidget *parent = 0);
    virtual ~TetrisField();
    virtual void paintEvent(QPaintEvent *);
    void addNewItem();
    void startGame();
    void endGame();

signals:

public slots:
    void timerCallback();

};

#endif // TETRISFIELD_H
