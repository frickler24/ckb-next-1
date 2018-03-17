/****************************************************************************
** Meta object code from reading C++ file 'keywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../keywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KeyWidget_t {
    QByteArrayData data[10];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeyWidget_t qt_meta_stringdata_KeyWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "KeyWidget"
QT_MOC_LITERAL(1, 10, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "selected"
QT_MOC_LITERAL(4, 37, 16), // "sidelightToggled"
QT_MOC_LITERAL(5, 54, 15), // "displayColorMap"
QT_MOC_LITERAL(6, 70, 8), // "ColorMap"
QT_MOC_LITERAL(7, 79, 13), // "newDisplayMap"
QT_MOC_LITERAL(8, 93, 13), // "QSet<QString>"
QT_MOC_LITERAL(9, 107, 10) // "indicators"

    },
    "KeyWidget\0selectionChanged\0\0selected\0"
    "sidelightToggled\0displayColorMap\0"
    "ColorMap\0newDisplayMap\0QSet<QString>\0"
    "indicators"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   38,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void KeyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyWidget *_t = static_cast<KeyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->sidelightToggled(); break;
        case 2: _t->displayColorMap((*reinterpret_cast< const ColorMap(*)>(_a[1])),(*reinterpret_cast< const QSet<QString>(*)>(_a[2]))); break;
        case 3: _t->displayColorMap((*reinterpret_cast< const ColorMap(*)>(_a[1]))); break;
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
            typedef void (KeyWidget::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyWidget::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KeyWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyWidget::sidelightToggled)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject KeyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_KeyWidget.data,
      qt_meta_data_KeyWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KeyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KeyWidget.stringdata0))
        return static_cast<void*>(const_cast< KeyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int KeyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KeyWidget::selectionChanged(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KeyWidget::sidelightToggled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
