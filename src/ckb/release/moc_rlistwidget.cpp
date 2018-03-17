/****************************************************************************
** Meta object code from reading C++ file 'rlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RListWidget_t {
    QByteArrayData data[8];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RListWidget_t qt_meta_stringdata_RListWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RListWidget"
QT_MOC_LITERAL(1, 12, 12), // "orderChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "timerTick"
QT_MOC_LITERAL(4, 36, 5), // "enter"
QT_MOC_LITERAL(5, 42, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(6, 59, 4), // "item"
QT_MOC_LITERAL(7, 64, 6) // "change"

    },
    "RListWidget\0orderChanged\0\0timerTick\0"
    "enter\0QListWidgetItem*\0item\0change"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       7,    1,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void RListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RListWidget *_t = static_cast<RListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->orderChanged(); break;
        case 1: _t->timerTick(); break;
        case 2: _t->enter((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->change((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RListWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RListWidget::orderChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_RListWidget.data,
      qt_meta_data_RListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RListWidget.stringdata0))
        return static_cast<void*>(const_cast< RListWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int RListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void RListWidget::orderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
