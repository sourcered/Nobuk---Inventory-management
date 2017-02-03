#-------------------------------------------------
#
# Project created by QtCreator 2017-02-02T16:43:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Nobuk-Inventory
TEMPLATE = app
LIBS        += -lGL
LIBS        += -L/usr/local/lib -L/usr/lib -lmysqlcppconn
INCLUDEPATH += -I/usr/include -I/usr/local/include
               -I/usr/local/include/cppconn

SOURCES += main.cpp\
        mainwindow.cpp \
    ../../lib/database/database.cpp \
    ../../lib/console-log.cpp \
    ../../lib/core.cpp \
    dialog_exit.cpp \
    dialog_removequantity.cpp \
    dialog_addquantity.cpp \
    dialog_removeitem.cpp \
    dialog_edit.cpp \
    dialog_additem.cpp

HEADERS  += mainwindow.h \
    ../../include/database/database.h \
    ../../include/database/querys.h \
    ../../include/console-log.h \
    ../../include/core.h \
    ../../include/preprocessor.h \
    dialog_exit.h \
    dialog_removequantity.h \
    dialog_addquantity.h \
    dialog_removeitem.h \
    dialog_edit.h \
    dialog_additem.h

FORMS    += mainwindow.ui \
    dialog_exit.ui \
    dialog_removequantity.ui \
    dialog_addquantity.ui \
    dialog_removeitem.ui \
    dialog_edit.ui \
    dialog_additem.ui

RESOURCES += \
    res.qrc
