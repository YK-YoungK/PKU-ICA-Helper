/****************************************************************************
** Meta object code from reading C++ file 'echo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../echo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'echo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_echo_t {
    QByteArrayData data[8];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_echo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_echo_t qt_meta_stringdata_echo = {
    {
QT_MOC_LITERAL(0, 0, 4), // "echo"
QT_MOC_LITERAL(1, 5, 22), // "on_input_reset_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 24), // "on_input_confirm_clicked"
QT_MOC_LITERAL(4, 54, 25), // "on_result_display_clicked"
QT_MOC_LITERAL(5, 80, 19), // "on_std_show_clicked"
QT_MOC_LITERAL(6, 100, 20), // "on_test_show_clicked"
QT_MOC_LITERAL(7, 121, 21) // "on_input_show_clicked"

    },
    "echo\0on_input_reset_clicked\0\0"
    "on_input_confirm_clicked\0"
    "on_result_display_clicked\0on_std_show_clicked\0"
    "on_test_show_clicked\0on_input_show_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_echo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void echo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        echo *_t = static_cast<echo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_input_reset_clicked(); break;
        case 1: _t->on_input_confirm_clicked(); break;
        case 2: _t->on_result_display_clicked(); break;
        case 3: _t->on_std_show_clicked(); break;
        case 4: _t->on_test_show_clicked(); break;
        case 5: _t->on_input_show_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject echo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_echo.data,
      qt_meta_data_echo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *echo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *echo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_echo.stringdata0))
        return static_cast<void*>(const_cast< echo*>(this));
    return QWidget::qt_metacast(_clname);
}

int echo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
