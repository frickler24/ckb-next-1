/****************************************************************************
** Meta object code from reading C++ file 'fwupgradedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fwupgradedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fwupgradedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FwUpgradeDialog_t {
    QByteArrayData data[10];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FwUpgradeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FwUpgradeDialog_t qt_meta_stringdata_FwUpgradeDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FwUpgradeDialog"
QT_MOC_LITERAL(1, 16, 16), // "fwUpdateProgress"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "current"
QT_MOC_LITERAL(4, 42, 5), // "total"
QT_MOC_LITERAL(5, 48, 16), // "fwUpdateFinished"
QT_MOC_LITERAL(6, 65, 9), // "succeeded"
QT_MOC_LITERAL(7, 75, 9), // "removeDev"
QT_MOC_LITERAL(8, 85, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(9, 109, 23) // "on_actionButton_clicked"

    },
    "FwUpgradeDialog\0fwUpdateProgress\0\0"
    "current\0total\0fwUpdateFinished\0succeeded\0"
    "removeDev\0on_cancelButton_clicked\0"
    "on_actionButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FwUpgradeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x08 /* Private */,
       5,    1,   44,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,
       8,    0,   48,    2, 0x08 /* Private */,
       9,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FwUpgradeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FwUpgradeDialog *_t = static_cast<FwUpgradeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fwUpdateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->fwUpdateFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->removeDev(); break;
        case 3: _t->on_cancelButton_clicked(); break;
        case 4: _t->on_actionButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject FwUpgradeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FwUpgradeDialog.data,
      qt_meta_data_FwUpgradeDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FwUpgradeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FwUpgradeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FwUpgradeDialog.stringdata0))
        return static_cast<void*>(const_cast< FwUpgradeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int FwUpgradeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
