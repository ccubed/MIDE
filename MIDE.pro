#-------------------------------------------------
#
# Project created by QtCreator 2014-07-13T11:29:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MIDE
TEMPLATE = app


SOURCES += main.cpp\
        mide.cpp \
    highlighter.cpp \
    codeeditor.cpp

HEADERS  += mide.h \
    highlighter.h \
    codeeditor.h \
    linenumber.h

FORMS    += mide.ui \
    MIDE_Textarea.ui \
    NPWiz.ui

OTHER_FILES +=
