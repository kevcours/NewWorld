#-------------------------------------------------
#
# Project created by QtCreator 2018-03-26T15:18:03
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = newWorldPDV
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    loginpdv.cpp

HEADERS  += mainwindow.h \
    loginpdv.h

FORMS    += mainwindow.ui \
    loginpdv.ui

RESOURCES += \
    images/icones.qrc

OTHER_FILES +=
