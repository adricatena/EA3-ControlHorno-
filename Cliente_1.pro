#-------------------------------------------------
#
# Project created by QtCreator 2014-10-16T11:58:30
#
#-------------------------------------------------

QT       += core gui serialport
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = Cliente_1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h

FORMS    += mainwindow.ui

RESOURCES += \
    pics.qrc
