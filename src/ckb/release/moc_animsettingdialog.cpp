/****************************************************************************
** Meta object code from reading C++ file 'animsettingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../animsettingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animsettingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AnimSettingDialog_t {
    QByteArrayData data[15];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnimSettingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnimSettingDialog_t qt_meta_stringdata_AnimSettingDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AnimSettingDialog"
QT_MOC_LITERAL(1, 18, 11), // "newDuration"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "duration"
QT_MOC_LITERAL(4, 40, 11), // "updateStops"
QT_MOC_LITERAL(5, 52, 16), // "angleDialChanged"
QT_MOC_LITERAL(6, 69, 4), // "name"
QT_MOC_LITERAL(7, 74, 19), // "angleSpinnerChanged"
QT_MOC_LITERAL(8, 94, 11), // "updateParam"
QT_MOC_LITERAL(9, 106, 24), // "on_delayBox_valueChanged"
QT_MOC_LITERAL(10, 131, 4), // "arg1"
QT_MOC_LITERAL(11, 136, 25), // "on_repeatBox_valueChanged"
QT_MOC_LITERAL(12, 162, 26), // "on_kpDelayBox_valueChanged"
QT_MOC_LITERAL(13, 189, 27), // "on_kpRepeatBox_valueChanged"
QT_MOC_LITERAL(14, 217, 28) // "on_kpReleaseBox_stateChanged"

    },
    "AnimSettingDialog\0newDuration\0\0duration\0"
    "updateStops\0angleDialChanged\0name\0"
    "angleSpinnerChanged\0updateParam\0"
    "on_delayBox_valueChanged\0arg1\0"
    "on_repeatBox_valueChanged\0"
    "on_kpDelayBox_valueChanged\0"
    "on_kpRepeatBox_valueChanged\0"
    "on_kpReleaseBox_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnimSettingDialog[] = {

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
       1,    1,   64,    2, 0x08 /* Private */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       7,    1,   71,    2, 0x08 /* Private */,
       8,    1,   74,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    1,   83,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      14,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void AnimSettingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnimSettingDialog *_t = static_cast<AnimSettingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newDuration((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->updateStops(); break;
        case 2: _t->angleDialChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->angleSpinnerChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateParam((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_delayBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_repeatBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_kpDelayBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_kpRepeatBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->on_kpReleaseBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AnimSettingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AnimSettingDialog.data,
      qt_meta_data_AnimSettingDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AnimSettingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnimSettingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AnimSettingDialog.stringdata0))
        return static_cast<void*>(const_cast< AnimSettingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AnimSettingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
