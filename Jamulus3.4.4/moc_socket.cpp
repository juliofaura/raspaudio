/****************************************************************************
** Meta object code from reading C++ file 'socket.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/socket.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,   24,   24,   24, 0x05,
      25,   57,   24,   24, 0x05,
      75,  100,   24,   24, 0x05,
     112,  100,   24,   24, 0x05,
     148,  210,   24,   24, 0x05,
     254,  314,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     346,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CSocket[] = {
    "CSocket\0NewConnection()\0\0"
    "NewConnection(int,CHostAddress)\0"
    "iChID,RecHostAddr\0ServerFull(CHostAddress)\0"
    "RecHostAddr\0InvalidPacketReceived(CHostAddress)\0"
    "ProtcolMessageReceived(int,int,CVector<uint8_t>,CHostAddress)\0"
    "iRecCounter,iRecID,vecbyMesBodyData,HostAdr\0"
    "ProtcolCLMessageReceived(int,CVector<uint8_t>,CHostAddress)\0"
    "iRecID,vecbyMesBodyData,HostAdr\0"
    "OnDataReceived()\0"
};

void CSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSocket *_t = static_cast<CSocket *>(_o);
        switch (_id) {
        case 0: _t->NewConnection(); break;
        case 1: _t->NewConnection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< CHostAddress(*)>(_a[2]))); break;
        case 2: _t->ServerFull((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 3: _t->InvalidPacketReceived((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 4: _t->ProtcolMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[3])),(*reinterpret_cast< CHostAddress(*)>(_a[4]))); break;
        case 5: _t->ProtcolCLMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[2])),(*reinterpret_cast< CHostAddress(*)>(_a[3]))); break;
        case 6: _t->OnDataReceived(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CSocket,
      qt_meta_data_CSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CSocket))
        return static_cast<void*>(const_cast< CSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int CSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CSocket::NewConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CSocket::NewConnection(int _t1, CHostAddress _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CSocket::ServerFull(CHostAddress _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CSocket::InvalidPacketReceived(CHostAddress _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CSocket::ProtcolMessageReceived(int _t1, int _t2, CVector<uint8_t> _t3, CHostAddress _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CSocket::ProtcolCLMessageReceived(int _t1, CVector<uint8_t> _t2, CHostAddress _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
static const uint qt_meta_data_CHighPrioSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   52,   64,   64, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_CHighPrioSocket[] = {
    "CHighPrioSocket\0InvalidPacketReceived(CHostAddress)\0"
    "RecHostAddr\0\0"
};

void CHighPrioSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CHighPrioSocket *_t = static_cast<CHighPrioSocket *>(_o);
        switch (_id) {
        case 0: _t->InvalidPacketReceived((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CHighPrioSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CHighPrioSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CHighPrioSocket,
      qt_meta_data_CHighPrioSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CHighPrioSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CHighPrioSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CHighPrioSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CHighPrioSocket))
        return static_cast<void*>(const_cast< CHighPrioSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int CHighPrioSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CHighPrioSocket::InvalidPacketReceived(CHostAddress _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
