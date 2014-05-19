#-------------------------------------------------
#
# Project created by QtCreator 2014-03-24T10:56:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tetrisitem.cpp \
    tetrisitemsquare.cpp \
    tetrisfield.cpp

HEADERS  += mainwindow.h \
    tetrisitem.h \
    tetrisitemsquare.h \
    tetrisfield.h

FORMS    += mainwindow.ui
