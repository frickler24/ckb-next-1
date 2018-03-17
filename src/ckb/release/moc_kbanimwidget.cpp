/****************************************************************************
** Meta object code from reading C++ file 'kbanimwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kbanimwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbanimwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KbAnimWidget_t {
    QByteArrayData data[25];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KbAnimWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KbAnimWidget_t qt_meta_stringdata_KbAnimWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KbAnimWidget"
QT_MOC_LITERAL(1, 13, 11), // "animChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "KbAnim*"
QT_MOC_LITERAL(4, 34, 9), // "selection"
QT_MOC_LITERAL(5, 44, 18), // "didUpdateSelection"
QT_MOC_LITERAL(6, 63, 4), // "keys"
QT_MOC_LITERAL(7, 68, 30), // "on_animList_currentItemChanged"
QT_MOC_LITERAL(8, 99, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 116, 7), // "current"
QT_MOC_LITERAL(10, 124, 8), // "previous"
QT_MOC_LITERAL(11, 133, 23), // "on_animList_itemChanged"
QT_MOC_LITERAL(12, 157, 4), // "item"
QT_MOC_LITERAL(13, 162, 38), // "on_animList_customContextMenu..."
QT_MOC_LITERAL(14, 201, 3), // "pos"
QT_MOC_LITERAL(15, 205, 21), // "on_nameBox_textEdited"
QT_MOC_LITERAL(16, 227, 4), // "arg1"
QT_MOC_LITERAL(17, 232, 26), // "on_opacityBox_valueChanged"
QT_MOC_LITERAL(18, 259, 21), // "on_blendBox_activated"
QT_MOC_LITERAL(19, 281, 5), // "index"
QT_MOC_LITERAL(20, 287, 20), // "on_keyButton_clicked"
QT_MOC_LITERAL(21, 308, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(22, 332, 11), // "refreshList"
QT_MOC_LITERAL(23, 344, 12), // "reorderAnims"
QT_MOC_LITERAL(24, 357, 25) // "on_propertyButton_clicked"

    },
    "KbAnimWidget\0animChanged\0\0KbAnim*\0"
    "selection\0didUpdateSelection\0keys\0"
    "on_animList_currentItemChanged\0"
    "QListWidgetItem*\0current\0previous\0"
    "on_animList_itemChanged\0item\0"
    "on_animList_customContextMenuRequested\0"
    "pos\0on_nameBox_textEdited\0arg1\0"
    "on_opacityBox_valueChanged\0"
    "on_blendBox_activated\0index\0"
    "on_keyButton_clicked\0on_deleteButton_clicked\0"
    "refreshList\0reorderAnims\0"
    "on_propertyButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KbAnimWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   85,    2, 0x08 /* Private */,
      11,    1,   90,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      15,    1,   96,    2, 0x08 /* Private */,
      17,    1,   99,    2, 0x08 /* Private */,
      18,    1,  102,    2, 0x08 /* Private */,
      20,    0,  105,    2, 0x08 /* Private */,
      21,    0,  106,    2, 0x08 /* Private */,
      22,    0,  107,    2, 0x08 /* Private */,
      23,    0,  108,    2, 0x08 /* Private */,
      24,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QStringList,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void, 0x80000000 | 8,   12,
    QMetaType::Void, QMetaType::QPoint,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KbAnimWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KbAnimWidget *_t = static_cast<KbAnimWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->animChanged((*reinterpret_cast< KbAnim*(*)>(_a[1]))); break;
        case 1: _t->didUpdateSelection((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->on_animList_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->on_animList_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_animList_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->on_nameBox_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_opacityBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_blendBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_keyButton_clicked(); break;
        case 9: _t->on_deleteButton_clicked(); break;
        case 10: _t->refreshList(); break;
        case 11: _t->reorderAnims(); break;
        case 12: _t->on_propertyButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KbAnim* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KbAnimWidget::*_t)(KbAnim * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KbAnimWidget::animChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KbAnimWidget::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KbAnimWidget::didUpdateSelection)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject KbAnimWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_KbAnimWidget.data,
      qt_meta_data_KbAnimWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KbAnimWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KbAnimWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KbAnimWidget.stringdata0))
        return static_cast<void*>(const_cast< KbAnimWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int KbAnimWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void KbAnimWidget::animChanged(KbAnim * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KbAnimWidget::didUpdateSelection(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
