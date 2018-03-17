/****************************************************************************
** Meta object code from reading C++ file 'kbbindwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kbbindwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbbindwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KbBindWidget_t {
    QByteArrayData data[9];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KbBindWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KbBindWidget_t qt_meta_stringdata_KbBindWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KbBindWidget"
QT_MOC_LITERAL(1, 13, 10), // "updateBind"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "newLayout"
QT_MOC_LITERAL(4, 35, 12), // "newSelection"
QT_MOC_LITERAL(5, 48, 9), // "selection"
QT_MOC_LITERAL(6, 58, 16), // "updateSelDisplay"
QT_MOC_LITERAL(7, 75, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(8, 98, 21) // "on_copyButton_clicked"

    },
    "KbBindWidget\0updateBind\0\0newLayout\0"
    "newSelection\0selection\0updateSelDisplay\0"
    "on_resetButton_clicked\0on_copyButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KbBindWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KbBindWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KbBindWidget *_t = static_cast<KbBindWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateBind(); break;
        case 1: _t->newLayout(); break;
        case 2: _t->newSelection((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->updateSelDisplay(); break;
        case 4: _t->on_resetButton_clicked(); break;
        case 5: _t->on_copyButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject KbBindWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_KbBindWidget.data,
      qt_meta_data_KbBindWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KbBindWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KbBindWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KbBindWidget.stringdata0))
        return static_cast<void*>(const_cast< KbBindWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int KbBindWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
