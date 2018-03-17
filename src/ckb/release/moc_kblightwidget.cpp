/****************************************************************************
** Meta object code from reading C++ file 'kblightwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kblightwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kblightwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KbLightWidget_t {
    QByteArrayData data[19];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KbLightWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KbLightWidget_t qt_meta_stringdata_KbLightWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KbLightWidget"
QT_MOC_LITERAL(1, 14, 11), // "updateLight"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "newSelection"
QT_MOC_LITERAL(4, 40, 9), // "selection"
QT_MOC_LITERAL(5, 50, 11), // "changeColor"
QT_MOC_LITERAL(6, 62, 8), // "newColor"
QT_MOC_LITERAL(7, 71, 10), // "changeAnim"
QT_MOC_LITERAL(8, 82, 7), // "KbAnim*"
QT_MOC_LITERAL(9, 90, 7), // "newAnim"
QT_MOC_LITERAL(10, 98, 14), // "changeAnimKeys"
QT_MOC_LITERAL(11, 113, 4), // "keys"
QT_MOC_LITERAL(12, 118, 26), // "on_brightnessBox_activated"
QT_MOC_LITERAL(13, 145, 5), // "index"
QT_MOC_LITERAL(14, 151, 21), // "on_animButton_clicked"
QT_MOC_LITERAL(15, 173, 19), // "on_bgButton_clicked"
QT_MOC_LITERAL(16, 193, 22), // "on_showAnimBox_clicked"
QT_MOC_LITERAL(17, 216, 7), // "checked"
QT_MOC_LITERAL(18, 224, 15) // "toggleSidelight"

    },
    "KbLightWidget\0updateLight\0\0newSelection\0"
    "selection\0changeColor\0newColor\0"
    "changeAnim\0KbAnim*\0newAnim\0changeAnimKeys\0"
    "keys\0on_brightnessBox_activated\0index\0"
    "on_animButton_clicked\0on_bgButton_clicked\0"
    "on_showAnimBox_clicked\0checked\0"
    "toggleSidelight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KbLightWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       7,    1,   71,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,
      14,    0,   80,    2, 0x08 /* Private */,
      15,    0,   81,    2, 0x08 /* Private */,
      16,    1,   82,    2, 0x08 /* Private */,
      18,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    4,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,

       0        // eod
};

void KbLightWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KbLightWidget *_t = static_cast<KbLightWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLight(); break;
        case 1: _t->newSelection((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->changeColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->changeAnim((*reinterpret_cast< KbAnim*(*)>(_a[1]))); break;
        case 4: _t->changeAnimKeys((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->on_brightnessBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_animButton_clicked(); break;
        case 7: _t->on_bgButton_clicked(); break;
        case 8: _t->on_showAnimBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->toggleSidelight(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KbAnim* >(); break;
            }
            break;
        }
    }
}

const QMetaObject KbLightWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_KbLightWidget.data,
      qt_meta_data_KbLightWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KbLightWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KbLightWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KbLightWidget.stringdata0))
        return static_cast<void*>(const_cast< KbLightWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int KbLightWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
