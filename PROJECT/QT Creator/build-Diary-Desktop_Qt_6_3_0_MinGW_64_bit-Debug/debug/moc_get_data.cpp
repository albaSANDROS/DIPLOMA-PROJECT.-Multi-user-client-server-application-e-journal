/****************************************************************************
** Meta object code from reading C++ file 'get_data.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Diary/get_data.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'get_data.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_get_data_t {
    const uint offsetsAndSize[10];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_get_data_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_get_data_t qt_meta_stringdata_get_data = {
    {
QT_MOC_LITERAL(0, 8), // "get_data"
QT_MOC_LITERAL(9, 26), // "on_get_back_button_clicked"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 31), // "on_students_info_button_clicked"
QT_MOC_LITERAL(69, 30) // "on_classes_info_button_clicked"

    },
    "get_data\0on_get_back_button_clicked\0"
    "\0on_students_info_button_clicked\0"
    "on_classes_info_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_get_data[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void get_data::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<get_data *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_get_back_button_clicked(); break;
        case 1: _t->on_students_info_button_clicked(); break;
        case 2: _t->on_classes_info_button_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject get_data::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_get_data.offsetsAndSize,
    qt_meta_data_get_data,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_get_data_t
, QtPrivate::TypeAndForceComplete<get_data, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *get_data::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *get_data::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_get_data.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int get_data::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
