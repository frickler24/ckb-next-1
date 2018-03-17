/****************************************************************************
** Meta object code from reading C++ file 'kbprofiledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kbprofiledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbprofiledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KbProfileDialog_t {
    QByteArrayData data[12];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KbProfileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KbProfileDialog_t qt_meta_stringdata_KbProfileDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KbProfileDialog"
QT_MOC_LITERAL(1, 16, 21), // "profileList_reordered"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 33), // "on_profileList_currentItemCha..."
QT_MOC_LITERAL(4, 73, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 90, 7), // "current"
QT_MOC_LITERAL(6, 98, 8), // "previous"
QT_MOC_LITERAL(7, 107, 26), // "on_profileList_itemClicked"
QT_MOC_LITERAL(8, 134, 4), // "item"
QT_MOC_LITERAL(9, 139, 26), // "on_profileList_itemChanged"
QT_MOC_LITERAL(10, 166, 41), // "on_profileList_customContextM..."
QT_MOC_LITERAL(11, 208, 3) // "pos"

    },
    "KbProfileDialog\0profileList_reordered\0"
    "\0on_profileList_currentItemChanged\0"
    "QListWidgetItem*\0current\0previous\0"
    "on_profileList_itemClicked\0item\0"
    "on_profileList_itemChanged\0"
    "on_profileList_customContextMenuRequested\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KbProfileDialog[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    2,   40,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,
       9,    1,   48,    2, 0x08 /* Private */,
      10,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void, 0x80000000 | 4,    8,
    QMetaType::Void, 0x80000000 | 4,    8,
    QMetaType::Void, QMetaType::QPoint,   11,

       0        // eod
};

void KbProfileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KbProfileDialog *_t = static_cast<KbProfileDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->profileList_reordered(); break;
        case 1: _t->on_profileList_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->on_profileList_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_profileList_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_profileList_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject KbProfileDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_KbProfileDialog.data,
      qt_meta_data_KbProfileDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KbProfileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KbProfileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KbProfileDialog.stringdata0))
        return static_cast<void*>(const_cast< KbProfileDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int KbProfileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
