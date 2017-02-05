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
    dialog_additem.cpp \
    dialog_edit2.cpp \
    dialog_information.cpp \
    dialog_find.cpp

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
    dialog_additem.h \
    dialog_edit2.h \
    dialog_information.h \
    dialog_find.h

FORMS    += mainwindow.ui \
    dialog_exit.ui \
    dialog_removequantity.ui \
    dialog_addquantity.ui \
    dialog_removeitem.ui \
    dialog_additem.ui \
    dialog_edit2.ui \
    dialog_information.ui \
    dialog_find.ui

RESOURCES += \
    res.qrc
