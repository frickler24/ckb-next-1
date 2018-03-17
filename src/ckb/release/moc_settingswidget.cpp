/****************************************************************************
** Meta object code from reading C++ file 'settingswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../settingswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SettingsWidget_t {
    QByteArrayData data[15];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsWidget_t qt_meta_stringdata_SettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SettingsWidget"
QT_MOC_LITERAL(1, 15, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "on_capsBox_activated"
QT_MOC_LITERAL(4, 59, 5), // "index"
QT_MOC_LITERAL(5, 65, 21), // "on_shiftBox_activated"
QT_MOC_LITERAL(6, 87, 20), // "on_ctrlBox_activated"
QT_MOC_LITERAL(7, 108, 19), // "on_altBox_activated"
QT_MOC_LITERAL(8, 128, 19), // "on_winBox_activated"
QT_MOC_LITERAL(9, 148, 20), // "on_autoFWBox_clicked"
QT_MOC_LITERAL(10, 169, 7), // "checked"
QT_MOC_LITERAL(11, 177, 23), // "on_loginItemBox_clicked"
QT_MOC_LITERAL(12, 201, 22), // "on_layoutBox_activated"
QT_MOC_LITERAL(13, 224, 16), // "showLayoutDialog"
QT_MOC_LITERAL(14, 241, 22) // "on_extraButton_clicked"

    },
    "SettingsWidget\0on_pushButton_clicked\0"
    "\0on_capsBox_activated\0index\0"
    "on_shiftBox_activated\0on_ctrlBox_activated\0"
    "on_altBox_activated\0on_winBox_activated\0"
    "on_autoFWBox_clicked\0checked\0"
    "on_loginItemBox_clicked\0on_layoutBox_activated\0"
    "showLayoutDialog\0on_extraButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    1,   70,    2, 0x08 /* Private */,
       5,    1,   73,    2, 0x08 /* Private */,
       6,    1,   76,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       8,    1,   82,    2, 0x08 /* Private */,
       9,    1,   85,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsWidget *_t = static_cast<SettingsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_capsBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_shiftBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_ctrlBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_altBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_winBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_autoFWBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_loginItemBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_layoutBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->showLayoutDialog(); break;
        case 10: _t->on_extraButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject SettingsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SettingsWidget.data,
      qt_meta_data_SettingsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsWidget.stringdata0))
        return static_cast<void*>(const_cast< SettingsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
