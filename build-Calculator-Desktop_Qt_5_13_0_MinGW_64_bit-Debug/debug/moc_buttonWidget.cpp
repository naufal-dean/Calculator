/****************************************************************************
** Meta object code from reading C++ file 'buttonWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Calculator/widgets/buttonWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttonWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ButtonWidget_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ButtonWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ButtonWidget_t qt_meta_stringdata_ButtonWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ButtonWidget"
QT_MOC_LITERAL(1, 13, 16), // "backspaceClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "binaryOpClicked"
QT_MOC_LITERAL(4, 47, 4), // "type"
QT_MOC_LITERAL(5, 52, 12), // "equalClicked"
QT_MOC_LITERAL(6, 65, 10), // "numClicked"
QT_MOC_LITERAL(7, 76, 5), // "value"
QT_MOC_LITERAL(8, 82, 20), // "handleBackspaceClick"
QT_MOC_LITERAL(9, 103, 19), // "handleBinaryOpClick"
QT_MOC_LITERAL(10, 123, 16), // "handleEqualClick"
QT_MOC_LITERAL(11, 140, 14) // "handleNumClick"

    },
    "ButtonWidget\0backspaceClicked\0\0"
    "binaryOpClicked\0type\0equalClicked\0"
    "numClicked\0value\0handleBackspaceClick\0"
    "handleBinaryOpClick\0handleEqualClick\0"
    "handleNumClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ButtonWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       5,    0,   58,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   62,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void ButtonWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ButtonWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backspaceClicked(); break;
        case 1: _t->binaryOpClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->equalClicked(); break;
        case 3: _t->numClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->handleBackspaceClick(); break;
        case 5: _t->handleBinaryOpClick((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->handleEqualClick(); break;
        case 7: _t->handleNumClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ButtonWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ButtonWidget::backspaceClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ButtonWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ButtonWidget::binaryOpClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ButtonWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ButtonWidget::equalClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ButtonWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ButtonWidget::numClicked)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ButtonWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ButtonWidget.data,
    qt_meta_data_ButtonWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ButtonWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ButtonWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ButtonWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ButtonWidget::backspaceClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ButtonWidget::binaryOpClicked(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ButtonWidget::equalClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ButtonWidget::numClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
