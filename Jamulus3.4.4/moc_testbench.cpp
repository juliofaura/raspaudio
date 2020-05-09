/****************************************************************************
** Meta object code from reading C++ file 'testbench.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/testbench.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testbench.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CTestbench[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   21,   21,   21, 0x0a,
      22,   58,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CTestbench[] = {
    "CTestbench\0OnTimer()\0\0"
    "OnSendProtMessage(CVector<uint8_t>)\0"
    "vecMessage\0"
};

void CTestbench::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CTestbench *_t = static_cast<CTestbench *>(_o);
        switch (_id) {
        case 0: _t->OnTimer(); break;
        case 1: _t->OnSendProtMessage((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CTestbench::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CTestbench::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CTestbench,
      qt_meta_data_CTestbench, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CTestbench::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CTestbench::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CTestbench::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CTestbench))
        return static_cast<void*>(const_cast< CTestbench*>(this));
    return QObject::qt_metacast(_clname);
}

int CTestbench::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
