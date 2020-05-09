/****************************************************************************
** Meta object code from reading C++ file 'serverlist.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/serverlist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CServerListManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   37,   37,   37, 0x0a,
      38,   37,   37,   37, 0x0a,
      64,   37,   37,   37, 0x0a,
      91,   37,   37,   37, 0x0a,
     112,   37,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CServerListManager[] = {
    "CServerListManager\0OnTimerPollList()\0"
    "\0OnTimerPingServerInList()\0"
    "OnTimerPingCentralServer()\0"
    "OnTimerRegistering()\0OnTimerIsPermanent()\0"
};

void CServerListManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CServerListManager *_t = static_cast<CServerListManager *>(_o);
        switch (_id) {
        case 0: _t->OnTimerPollList(); break;
        case 1: _t->OnTimerPingServerInList(); break;
        case 2: _t->OnTimerPingCentralServer(); break;
        case 3: _t->OnTimerRegistering(); break;
        case 4: _t->OnTimerIsPermanent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CServerListManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CServerListManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CServerListManager,
      qt_meta_data_CServerListManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CServerListManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CServerListManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CServerListManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CServerListManager))
        return static_cast<void*>(const_cast< CServerListManager*>(this));
    return QObject::qt_metacast(_clname);
}

int CServerListManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
