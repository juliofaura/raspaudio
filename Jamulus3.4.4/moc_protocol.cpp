/****************************************************************************
** Meta object code from reading C++ file 'protocol.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/protocol.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CProtocol[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      27,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   48,   59,   59, 0x05,
      60,  113,   59,   59, 0x05,
     133,  156,   59,   59, 0x05,
     171,   59,   59,   59, 0x05,
     188,  212,   59,   59, 0x05,
     229,  256,   59,   59, 0x05,
     273,  321,   59,   59, 0x05,
     333,   59,   59,   59, 0x05,
     357,   59,   59,   59, 0x05,
     378,  411,   59,   59, 0x05,
     420,   59,   59,   59, 0x05,
     434,  460,   59,   59, 0x05,
     472,  519,   59,   59, 0x05,
     541,   59,   59,   59, 0x05,
     561,  591,   59,   59, 0x05,
     604,  637,   59,   59, 0x05,
     650,  701,   59,   59, 0x05,
     726,  781,   59,   59, 0x05,
     801,  842,   59,   59, 0x05,
     851,  907,   59,   59, 0x05,
     930,  842,   59,   59, 0x05,
     960,  989,   59,   59, 0x05,
    1004,  842,   59,   59, 0x05,
    1034, 1102,   59,   59, 0x05,
    1130,  842,   59,   59, 0x05,
    1162, 1227,   59,   59, 0x05,
    1248,  842,   59,   59, 0x05,

 // slots: signature, parameters, type, tag, flags
    1283,   59,   59,   59, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CProtocol[] = {
    "CProtocol\0MessReadyForSending(CVector<uint8_t>)\0"
    "vecMessage\0\0"
    "CLMessReadyForSending(CHostAddress,CVector<uint8_t>)\0"
    "InetAddr,vecMessage\0ChangeJittBufSize(int)\0"
    "iNewJitBufSize\0ReqJittBufSize()\0"
    "ChangeNetwBlSiFact(int)\0iNewNetwBlSiFact\0"
    "ChangeChanGain(int,double)\0iChanID,dNewGain\0"
    "ConClientListMesReceived(CVector<CChannelInfo>)\0"
    "vecChanInfo\0ServerFullMesReceived()\0"
    "ReqConnClientsList()\0"
    "ChangeChanInfo(CChannelCoreInfo)\0"
    "ChanInfo\0ReqChanInfo()\0ChatTextReceived(QString)\0"
    "strChatText\0NetTranspPropsReceived(CNetworkTransportProps)\0"
    "NetworkTransportProps\0ReqNetTranspProps()\0"
    "LicenceRequired(ELicenceType)\0"
    "eLicenceType\0CLPingReceived(CHostAddress,int)\0"
    "InetAddr,iMs\0"
    "CLPingWithNumClientsReceived(CHostAddress,int,int)\0"
    "InetAddr,iMs,iNumClients\0"
    "CLRegisterServerReceived(CHostAddress,CServerCoreInfo)\0"
    "InetAddr,ServerInfo\0"
    "CLUnregisterServerReceived(CHostAddress)\0"
    "InetAddr\0"
    "CLServerListReceived(CHostAddress,CVector<CServerInfo>)\0"
    "InetAddr,vecServerInfo\0"
    "CLReqServerList(CHostAddress)\0"
    "CLSendEmptyMes(CHostAddress)\0"
    "TargetInetAddr\0CLDisconnection(CHostAddress)\0"
    "CLVersionAndOSReceived(CHostAddress,COSUtil::EOpSystemType,QString)\0"
    "InetAddr,eOSType,strVersion\0"
    "CLReqVersionAndOS(CHostAddress)\0"
    "CLConnClientsListMesReceived(CHostAddress,CVector<CChannelInfo>)\0"
    "InetAddr,vecChanInfo\0"
    "CLReqConnClientsList(CHostAddress)\0"
    "OnTimerSendMess()\0"
};

void CProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CProtocol *_t = static_cast<CProtocol *>(_o);
        switch (_id) {
        case 0: _t->MessReadyForSending((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1]))); break;
        case 1: _t->CLMessReadyForSending((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[2]))); break;
        case 2: _t->ChangeJittBufSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ReqJittBufSize(); break;
        case 4: _t->ChangeNetwBlSiFact((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ChangeChanGain((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->ConClientListMesReceived((*reinterpret_cast< CVector<CChannelInfo>(*)>(_a[1]))); break;
        case 7: _t->ServerFullMesReceived(); break;
        case 8: _t->ReqConnClientsList(); break;
        case 9: _t->ChangeChanInfo((*reinterpret_cast< CChannelCoreInfo(*)>(_a[1]))); break;
        case 10: _t->ReqChanInfo(); break;
        case 11: _t->ChatTextReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->NetTranspPropsReceived((*reinterpret_cast< CNetworkTransportProps(*)>(_a[1]))); break;
        case 13: _t->ReqNetTranspProps(); break;
        case 14: _t->LicenceRequired((*reinterpret_cast< ELicenceType(*)>(_a[1]))); break;
        case 15: _t->CLPingReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->CLPingWithNumClientsReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 17: _t->CLRegisterServerReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CServerCoreInfo(*)>(_a[2]))); break;
        case 18: _t->CLUnregisterServerReceived((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 19: _t->CLServerListReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<CServerInfo>(*)>(_a[2]))); break;
        case 20: _t->CLReqServerList((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 21: _t->CLSendEmptyMes((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 22: _t->CLDisconnection((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 23: _t->CLVersionAndOSReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< COSUtil::EOpSystemType(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 24: _t->CLReqVersionAndOS((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 25: _t->CLConnClientsListMesReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<CChannelInfo>(*)>(_a[2]))); break;
        case 26: _t->CLReqConnClientsList((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 27: _t->OnTimerSendMess(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CProtocol::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CProtocol::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CProtocol,
      qt_meta_data_CProtocol, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CProtocol::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CProtocol))
        return static_cast<void*>(const_cast< CProtocol*>(this));
    return QObject::qt_metacast(_clname);
}

int CProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void CProtocol::MessReadyForSending(CVector<uint8_t> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CProtocol::CLMessReadyForSending(CHostAddress _t1, CVector<uint8_t> _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CProtocol::ChangeJittBufSize(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CProtocol::ReqJittBufSize()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void CProtocol::ChangeNetwBlSiFact(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CProtocol::ChangeChanGain(int _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CProtocol::ConClientListMesReceived(CVector<CChannelInfo> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CProtocol::ServerFullMesReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void CProtocol::ReqConnClientsList()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void CProtocol::ChangeChanInfo(CChannelCoreInfo _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CProtocol::ReqChanInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void CProtocol::ChatTextReceived(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CProtocol::NetTranspPropsReceived(CNetworkTransportProps _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CProtocol::ReqNetTranspProps()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void CProtocol::LicenceRequired(ELicenceType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CProtocol::CLPingReceived(CHostAddress _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void CProtocol::CLPingWithNumClientsReceived(CHostAddress _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void CProtocol::CLRegisterServerReceived(CHostAddress _t1, CServerCoreInfo _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void CProtocol::CLUnregisterServerReceived(CHostAddress _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void CProtocol::CLServerListReceived(CHostAddress _t1, CVector<CServerInfo> _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void CProtocol::CLReqServerList(CHostAddress _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void CProtocol::CLSendEmptyMes(CHostAddress _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void CProtocol::CLDisconnection(CHostAddress _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void CProtocol::CLVersionAndOSReceived(CHostAddress _t1, COSUtil::EOpSystemType _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void CProtocol::CLReqVersionAndOS(CHostAddress _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void CProtocol::CLConnClientsListMesReceived(CHostAddress _t1, CVector<CChannelInfo> _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void CProtocol::CLReqConnClientsList(CHostAddress _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}
QT_END_MOC_NAMESPACE
