/****************************************************************************
** Meta object code from reading C++ file 'mperfwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mperfwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mperfwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MPerfWidget_t {
    QByteArrayData data[18];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MPerfWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MPerfWidget_t qt_meta_stringdata_MPerfWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MPerfWidget"
QT_MOC_LITERAL(1, 12, 12), // "colorClicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "index"
QT_MOC_LITERAL(4, 32, 12), // "colorChanged"
QT_MOC_LITERAL(5, 45, 12), // "sliderXMoved"
QT_MOC_LITERAL(6, 58, 12), // "sliderYMoved"
QT_MOC_LITERAL(7, 71, 11), // "boxXChanged"
QT_MOC_LITERAL(8, 83, 11), // "boxYChanged"
QT_MOC_LITERAL(9, 95, 13), // "enableChanged"
QT_MOC_LITERAL(10, 109, 16), // "on_xyBox_clicked"
QT_MOC_LITERAL(11, 126, 7), // "checked"
QT_MOC_LITERAL(12, 134, 19), // "on_indicBox_clicked"
QT_MOC_LITERAL(13, 154, 19), // "on_aSnapBox_clicked"
QT_MOC_LITERAL(14, 174, 23), // "on_lHeightBox_activated"
QT_MOC_LITERAL(15, 198, 21), // "on_copyButton_clicked"
QT_MOC_LITERAL(16, 220, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(17, 244, 4) // "arg1"

    },
    "MPerfWidget\0colorClicked\0\0index\0"
    "colorChanged\0sliderXMoved\0sliderYMoved\0"
    "boxXChanged\0boxYChanged\0enableChanged\0"
    "on_xyBox_clicked\0checked\0on_indicBox_clicked\0"
    "on_aSnapBox_clicked\0on_lHeightBox_activated\0"
    "on_copyButton_clicked\0on_spinBox_valueChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MPerfWidget[] = {

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
       1,    1,   79,    2, 0x08 /* Private */,
       4,    1,   82,    2, 0x08 /* Private */,
       5,    1,   85,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       7,    1,   91,    2, 0x08 /* Private */,
       8,    1,   94,    2, 0x08 /* Private */,
       9,    1,   97,    2, 0x08 /* Private */,
      10,    1,  100,    2, 0x08 /* Private */,
      12,    1,  103,    2, 0x08 /* Private */,
      13,    1,  106,    2, 0x08 /* Private */,
      14,    1,  109,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    1,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void MPerfWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MPerfWidget *_t = static_cast<MPerfWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->colorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sliderXMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sliderYMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->boxXChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->boxYChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->enableChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_xyBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_indicBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_aSnapBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_lHeightBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_copyButton_clicked(); break;
        case 12: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MPerfWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MPerfWidget.data,
      qt_meta_data_MPerfWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MPerfWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MPerfWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MPerfWidget.stringdata0))
        return static_cast<void*>(const_cast< MPerfWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MPerfWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
