/****************************************************************************
** Meta object code from reading C++ file 'kb.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kb.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Kb_t {
    QByteArrayData data[20];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Kb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Kb_t qt_meta_stringdata_Kb = {
    {
QT_MOC_LITERAL(0, 0, 2), // "Kb"
QT_MOC_LITERAL(1, 3, 11), // "infoUpdated"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 12), // "profileAdded"
QT_MOC_LITERAL(4, 29, 14), // "profileRenamed"
QT_MOC_LITERAL(5, 44, 11), // "modeRenamed"
QT_MOC_LITERAL(6, 56, 14), // "profileChanged"
QT_MOC_LITERAL(7, 71, 11), // "modeChanged"
QT_MOC_LITERAL(8, 83, 11), // "spontaneous"
QT_MOC_LITERAL(9, 95, 16), // "fwUpdateProgress"
QT_MOC_LITERAL(10, 112, 7), // "current"
QT_MOC_LITERAL(11, 120, 5), // "total"
QT_MOC_LITERAL(12, 126, 16), // "fwUpdateFinished"
QT_MOC_LITERAL(13, 143, 9), // "succeeded"
QT_MOC_LITERAL(14, 153, 11), // "frameUpdate"
QT_MOC_LITERAL(15, 165, 8), // "autoSave"
QT_MOC_LITERAL(16, 174, 10), // "readNotify"
QT_MOC_LITERAL(17, 185, 4), // "line"
QT_MOC_LITERAL(18, 190, 8), // "deleteHw"
QT_MOC_LITERAL(19, 199, 14) // "deletePrevious"

    },
    "Kb\0infoUpdated\0\0profileAdded\0"
    "profileRenamed\0modeRenamed\0profileChanged\0"
    "modeChanged\0spontaneous\0fwUpdateProgress\0"
    "current\0total\0fwUpdateFinished\0succeeded\0"
    "frameUpdate\0autoSave\0readNotify\0line\0"
    "deleteHw\0deletePrevious"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Kb[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    1,   84,    2, 0x06 /* Public */,
       9,    2,   87,    2, 0x06 /* Public */,
      12,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   95,    2, 0x0a /* Public */,
      15,    0,   96,    2, 0x0a /* Public */,
      16,    1,   97,    2, 0x08 /* Private */,
      18,    0,  100,    2, 0x08 /* Private */,
      19,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Bool,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Kb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Kb *_t = static_cast<Kb *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoUpdated(); break;
        case 1: _t->profileAdded(); break;
        case 2: _t->profileRenamed(); break;
        case 3: _t->modeRenamed(); break;
        case 4: _t->profileChanged(); break;
        case 5: _t->modeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->fwUpdateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->fwUpdateFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->frameUpdate(); break;
        case 9: _t->autoSave(); break;
        case 10: _t->readNotify((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->deleteHw(); break;
        case 12: _t->deletePrevious(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Kb::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Kb::infoUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Kb::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Kb::profileAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Kb::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Kb::profileRenamed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Kb::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Kb::modeRenamed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Kb::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Kb::profileChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Kb::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Kb::modeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Kb::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Kb::fwUpdateProgress)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Kb::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Kb::fwUpdateFinished)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject Kb::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Kb.data,
      qt_meta_data_Kb,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Kb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Kb::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Kb.stringdata0))
        return static_cast<void*>(const_cast< Kb*>(this));
    return QThread::qt_metacast(_clname);
}

int Kb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Kb::infoUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Kb::profileAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Kb::profileRenamed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Kb::modeRenamed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Kb::profileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Kb::modeChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Kb::fwUpdateProgress(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Kb::fwUpdateFinished(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
