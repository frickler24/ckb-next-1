/****************************************************************************
** Meta object code from reading C++ file 'kblight.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kblight.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kblight.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KbLight_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KbLight_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KbLight_t qt_meta_stringdata_KbLight = {
    {
QT_MOC_LITERAL(0, 0, 7), // "KbLight"
QT_MOC_LITERAL(1, 8, 7), // "didLoad"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "updated"
QT_MOC_LITERAL(4, 25, 14), // "frameDisplayed"
QT_MOC_LITERAL(5, 40, 8), // "ColorMap"
QT_MOC_LITERAL(6, 49, 14), // "animatedColors"
QT_MOC_LITERAL(7, 64, 13), // "QSet<QString>"
QT_MOC_LITERAL(8, 78, 13) // "indicatorList"

    },
    "KbLight\0didLoad\0\0updated\0frameDisplayed\0"
    "ColorMap\0animatedColors\0QSet<QString>\0"
    "indicatorList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KbLight[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    2,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,

       0        // eod
};

void KbLight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KbLight *_t = static_cast<KbLight *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->didLoad(); break;
        case 1: _t->updated(); break;
        case 2: _t->frameDisplayed((*reinterpret_cast< const ColorMap(*)>(_a[1])),(*reinterpret_cast< const QSet<QString>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KbLight::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KbLight::didLoad)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KbLight::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KbLight::updated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (KbLight::*_t)(const ColorMap & , const QSet<QString> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KbLight::frameDisplayed)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject KbLight::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KbLight.data,
      qt_meta_data_KbLight,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KbLight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KbLight::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KbLight.stringdata0))
        return static_cast<void*>(const_cast< KbLight*>(this));
    return QObject::qt_metacast(_clname);
}

int KbLight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void KbLight::didLoad()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void KbLight::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void KbLight::frameDisplayed(const ColorMap & _t1, const QSet<QString> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
