/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Nobuk-Inventory/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "showDetailsItem"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(4, 52, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(5, 77, 23), // "on_actionHelp_triggered"
QT_MOC_LITERAL(6, 101, 27), // "on_actionCarregar_triggered"
QT_MOC_LITERAL(7, 129, 29), // "on_actionDelete_All_triggered"
QT_MOC_LITERAL(8, 159, 27), // "on_actionAdd_Item_triggered"
QT_MOC_LITERAL(9, 187, 30), // "on_actionDelete_Item_triggered"
QT_MOC_LITERAL(10, 218, 22), // "on_actionAdd_triggered"
QT_MOC_LITERAL(11, 241, 25), // "on_actionRemove_triggered"
QT_MOC_LITERAL(12, 267, 23), // "on_actionEdit_triggered"
QT_MOC_LITERAL(13, 291, 30), // "on_actionInformation_triggered"
QT_MOC_LITERAL(14, 322, 23) // "on_actionFInd_triggered"

    },
    "MainWindow\0showDetailsItem\0\0"
    "on_actionExit_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionHelp_triggered\0"
    "on_actionCarregar_triggered\0"
    "on_actionDelete_All_triggered\0"
    "on_actionAdd_Item_triggered\0"
    "on_actionDelete_Item_triggered\0"
    "on_actionAdd_triggered\0on_actionRemove_triggered\0"
    "on_actionEdit_triggered\0"
    "on_actionInformation_triggered\0"
    "on_actionFInd_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x0a /* Public */,
       3,    0,   84,    2, 0x08 /* Private */,
       4,    0,   85,    2, 0x08 /* Private */,
       5,    0,   86,    2, 0x08 /* Private */,
       6,    0,   87,    2, 0x08 /* Private */,
       7,    0,   88,    2, 0x08 /* Private */,
       8,    0,   89,    2, 0x08 /* Private */,
       9,    0,   90,    2, 0x08 /* Private */,
      10,    0,   91,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showDetailsItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_actionExit_triggered(); break;
        case 2: _t->on_actionAbout_triggered(); break;
        case 3: _t->on_actionHelp_triggered(); break;
        case 4: _t->on_actionCarregar_triggered(); break;
        case 5: _t->on_actionDelete_All_triggered(); break;
        case 6: _t->on_actionAdd_Item_triggered(); break;
        case 7: _t->on_actionDelete_Item_triggered(); break;
        case 8: _t->on_actionAdd_triggered(); break;
        case 9: _t->on_actionRemove_triggered(); break;
        case 10: _t->on_actionEdit_triggered(); break;
        case 11: _t->on_actionInformation_triggered(); break;
        case 12: _t->on_actionFInd_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
