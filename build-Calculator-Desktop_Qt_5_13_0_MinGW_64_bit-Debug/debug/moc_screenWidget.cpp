/****************************************************************************
** Meta object code from reading C++ file 'screenWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Calculator/widgets/screenWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScreenWidget_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenWidget_t qt_meta_stringdata_ScreenWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ScreenWidget"
QT_MOC_LITERAL(1, 13, 20), // "handleBackspaceClick"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "handleBinaryOpClick"
QT_MOC_LITERAL(4, 55, 4), // "type"
QT_MOC_LITERAL(5, 60, 16), // "handleEqualClick"
QT_MOC_LITERAL(6, 77, 14), // "handleNumClick"
QT_MOC_LITERAL(7, 92, 5), // "value"
QT_MOC_LITERAL(8, 98, 18) // "handleUnaryOpClick"

    },
    "ScreenWidget\0handleBackspaceClick\0\0"
    "handleBinaryOpClick\0type\0handleEqualClick\0"
    "handleNumClick\0value\0handleUnaryOpClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenWidget[] = {

 // content:
       8,       // revision
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
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       8,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void ScreenWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScreenWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleBackspaceClick(); break;
        case 1: _t->handleBinaryOpClick((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->handleEqualClick(); break;
        case 3: _t->handleNumClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->handleUnaryOpClick((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScreenWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ScreenWidget.data,
    qt_meta_data_ScreenWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScreenWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ScreenWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
