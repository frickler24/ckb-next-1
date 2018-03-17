/****************************************************************************
** Meta object code from reading C++ file 'kbanim.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kbanim.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbanim.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KbAnim_t {
    QByteArrayData data[7];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KbAnim_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KbAnim_t qt_meta_stringdata_KbAnim = {
    {
QT_MOC_LITERAL(0, 0, 6), // "KbAnim"
QT_MOC_LITERAL(1, 7, 4), // "Mode"
QT_MOC_LITERAL(2, 12, 6), // "Normal"
QT_MOC_LITERAL(3, 19, 3), // "Add"
QT_MOC_LITERAL(4, 23, 8), // "Subtract"
QT_MOC_LITERAL(5, 32, 8), // "Multiply"
QT_MOC_LITERAL(6, 41, 6) // "Divide"

    },
    "KbAnim\0Mode\0Normal\0Add\0Subtract\0"
    "Multiply\0Divide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KbAnim[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    5,   18,

 // enum data: key, value
       2, uint(KbAnim::Normal),
       3, uint(KbAnim::Add),
       4, uint(KbAnim::Subtract),
       5, uint(KbAnim::Multiply),
       6, uint(KbAnim::Divide),

       0        // eod
};

void KbAnim::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject KbAnim::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KbAnim.data,
      qt_meta_data_KbAnim,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KbAnim::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KbAnim::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KbAnim.stringdata0))
        return static_cast<void*>(const_cast< KbAnim*>(this));
    return QObject::qt_metacast(_clname);
}

int KbAnim::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
