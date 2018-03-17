/****************************************************************************
** Meta object code from reading C++ file 'kbbind.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kbbind.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbbind.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KbBind_t {
    QByteArrayData data[8];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KbBind_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KbBind_t qt_meta_stringdata_KbBind = {
    {
QT_MOC_LITERAL(0, 0, 6), // "KbBind"
QT_MOC_LITERAL(1, 7, 7), // "didLoad"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 13), // "layoutChanged"
QT_MOC_LITERAL(4, 30, 7), // "updated"
QT_MOC_LITERAL(5, 38, 8), // "keyEvent"
QT_MOC_LITERAL(6, 47, 3), // "key"
QT_MOC_LITERAL(7, 51, 4) // "down"

    },
    "KbBind\0didLoad\0\0layoutChanged\0updated\0"
    "keyEvent\0key\0down"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KbBind[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,

       0        // eod
};

void KbBind::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KbBind *_t = static_cast<KbBind *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->didLoad(); break;
        case 1: _t->layoutChanged(); break;
        case 2: _t->updated(); break;
        case 3: _t->keyEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KbBind::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KbBind::didLoad)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KbBind::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KbBind::layoutChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (KbBind::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KbBind::updated)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject KbBind::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KbBind.data,
      qt_meta_data_KbBind,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KbBind::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KbBind::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KbBind.stringdata0))
        return static_cast<void*>(const_cast< KbBind*>(this));
    return QObject::qt_metacast(_clname);
}

int KbBind::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void KbBind::didLoad()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void KbBind::layoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void KbBind::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
