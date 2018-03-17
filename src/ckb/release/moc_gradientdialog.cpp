/****************************************************************************
** Meta object code from reading C++ file 'gradientdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gradientdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gradientdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GradientDialog_t {
    QByteArrayData data[17];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GradientDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GradientDialog_t qt_meta_stringdata_GradientDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GradientDialog"
QT_MOC_LITERAL(1, 15, 14), // "currentChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "color"
QT_MOC_LITERAL(4, 37, 11), // "spontaneous"
QT_MOC_LITERAL(5, 49, 8), // "position"
QT_MOC_LITERAL(6, 58, 12), // "colorChanged"
QT_MOC_LITERAL(7, 71, 32), // "on_presetList_currentItemChanged"
QT_MOC_LITERAL(8, 104, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 121, 7), // "current"
QT_MOC_LITERAL(10, 129, 8), // "previous"
QT_MOC_LITERAL(11, 138, 24), // "on_presetName_textEdited"
QT_MOC_LITERAL(12, 163, 4), // "arg1"
QT_MOC_LITERAL(13, 168, 21), // "on_presetSave_clicked"
QT_MOC_LITERAL(14, 190, 23), // "on_presetDelete_clicked"
QT_MOC_LITERAL(15, 214, 23), // "on_stopPos_valueChanged"
QT_MOC_LITERAL(16, 238, 27) // "on_stopOpacity_valueChanged"

    },
    "GradientDialog\0currentChanged\0\0color\0"
    "spontaneous\0position\0colorChanged\0"
    "on_presetList_currentItemChanged\0"
    "QListWidgetItem*\0current\0previous\0"
    "on_presetName_textEdited\0arg1\0"
    "on_presetSave_clicked\0on_presetDelete_clicked\0"
    "on_stopPos_valueChanged\0"
    "on_stopOpacity_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradientDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x08 /* Private */,
       6,    1,   61,    2, 0x08 /* Private */,
       7,    2,   64,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,
      13,    0,   72,    2, 0x08 /* Private */,
      14,    0,   73,    2, 0x08 /* Private */,
      15,    1,   74,    2, 0x08 /* Private */,
      16,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor, QMetaType::Bool, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void GradientDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GradientDialog *_t = static_cast<GradientDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->on_presetList_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->on_presetName_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_presetSave_clicked(); break;
        case 5: _t->on_presetDelete_clicked(); break;
        case 6: _t->on_stopPos_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_stopOpacity_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GradientDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GradientDialog.data,
      qt_meta_data_GradientDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GradientDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradientDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GradientDialog.stringdata0))
        return static_cast<void*>(const_cast< GradientDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GradientDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
