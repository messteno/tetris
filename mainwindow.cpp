#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "tetrisitemsquare.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    field_ = new TetrisField();
    setCentralWidget(field_);
    setFixedSize(200, 400);
}

MainWindow::~MainWindow()
{
    delete ui;
}
