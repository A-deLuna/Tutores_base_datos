#-------------------------------------------------
#
# Project created by QtCreator 2016-06-01T13:57:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tutores
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    hubwindow.cpp

HEADERS  += mainwindow.h \
    hubwindow.h

FORMS    += mainwindow.ui \
    hubwindow.ui

DISTFILES += \
    tutorfoxlogo.png

RESOURCES += \
    resources.qrc
