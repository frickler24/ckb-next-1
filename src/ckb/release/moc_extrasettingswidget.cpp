/****************************************************************************
** Meta object code from reading C++ file 'extrasettingswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../extrasettingswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extrasettingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExtraSettingsWidget_t {
    QByteArrayData data[13];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtraSettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtraSettingsWidget_t qt_meta_stringdata_ExtraSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ExtraSettingsWidget"
QT_MOC_LITERAL(1, 20, 18), // "on_trayBox_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "checked"
QT_MOC_LITERAL(4, 48, 24), // "on_brightnessBox_clicked"
QT_MOC_LITERAL(5, 73, 25), // "on_animScanButton_clicked"
QT_MOC_LITERAL(6, 99, 22), // "on_fpsBox_valueChanged"
QT_MOC_LITERAL(7, 122, 4), // "arg1"
QT_MOC_LITERAL(8, 127, 20), // "on_ditherBox_clicked"
QT_MOC_LITERAL(9, 148, 20), // "on_mAccelBox_clicked"
QT_MOC_LITERAL(10, 169, 20), // "on_sAccelBox_clicked"
QT_MOC_LITERAL(11, 190, 25), // "on_sSpeedBox_valueChanged"
QT_MOC_LITERAL(12, 216, 19) // "on_delayBox_clicked"

    },
    "ExtraSettingsWidget\0on_trayBox_clicked\0"
    "\0checked\0on_brightnessBox_clicked\0"
    "on_animScanButton_clicked\0"
    "on_fpsBox_valueChanged\0arg1\0"
    "on_ditherBox_clicked\0on_mAccelBox_clicked\0"
    "on_sAccelBox_clicked\0on_sSpeedBox_valueChanged\0"
    "on_delayBox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtraSettingsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       5,    0,   65,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void ExtraSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExtraSettingsWidget *_t = static_cast<ExtraSettingsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_trayBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_brightnessBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_animScanButton_clicked(); break;
        case 3: _t->on_fpsBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_ditherBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_mAccelBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_sAccelBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_sSpeedBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_delayBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ExtraSettingsWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExtraSettingsWidget.data,
      qt_meta_data_ExtraSettingsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExtraSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtraSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExtraSettingsWidget.stringdata0))
        return static_cast<void*>(const_cast< ExtraSettingsWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExtraSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
