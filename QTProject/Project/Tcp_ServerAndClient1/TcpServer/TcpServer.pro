#-------------------------------------------------
#
# Project created by QtCreator 2022-08-26T18:20:45
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
RC_ICONS = logo3.ico

TARGET = TcpServer
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

RESOURCES += \
    ../img/pic.qrc

QT += core5compat
