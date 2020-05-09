/****************************************************************************
** Meta object code from reading C++ file 'channel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/channel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'channel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CChannel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,   47,   58,   58, 0x05,
      59,   58,   58,   58, 0x05,
      75,   58,   58,   58, 0x05,
      92,  116,   58,   58, 0x05,
     131,  164,   58,   58, 0x05,
     173,   58,   58,   58, 0x05,
     194,  242,   58,   58, 0x05,
     254,   58,   58,   58, 0x05,
     275,   58,   58,   58, 0x05,
     289,  315,   58,   58, 0x05,
     327,   58,   58,   58, 0x05,
     347,  377,   58,   58, 0x05,
     390,   58,   58,   58, 0x05,
     405,  458,   58,   58, 0x05,
     494,  537,   58,   58, 0x05,

 // slots: signature, parameters, type, tag, flags
     573,   47,   58,   58, 0x0a,
     609,  116,   58,   58, 0x0a,
     634,  663,   58,   58, 0x0a,
     680,  715,   58,   58, 0x0a,
     724,  773,   58,   58, 0x0a,
     795,   58,   58,   58, 0x0a,
     817,  537,   58,   58, 0x0a,
     862,  926,   58,   58, 0x0a,
     974, 1036,   58,   58, 0x0a,
    1072,   58,   58,   58, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CChannel[] = {
    "CChannel\0MessReadyForSending(CVector<uint8_t>)\0"
    "vecMessage\0\0NewConnection()\0"
    "ReqJittBufSize()\0JittBufSizeChanged(int)\0"
    "iNewJitBufSize\0ServerAutoSockBufSizeChange(int)\0"
    "iNNumFra\0ReqConnClientsList()\0"
    "ConClientListMesReceived(CVector<CChannelInfo>)\0"
    "vecChanInfo\0ChanInfoHasChanged()\0"
    "ReqChanInfo()\0ChatTextReceived(QString)\0"
    "strChatText\0ReqNetTranspProps()\0"
    "LicenceRequired(ELicenceType)\0"
    "eLicenceType\0Disconnected()\0"
    "DetectedCLMessage(CVector<uint8_t>,int,CHostAddress)\0"
    "vecbyMesBodyData,iRecID,RecHostAddr\0"
    "ParseMessageBody(CVector<uint8_t>,int,int)\0"
    "vecbyMesBodyData,iRecCounter,iRecID\0"
    "OnSendProtMessage(CVector<uint8_t>)\0"
    "OnJittBufSizeChange(int)\0"
    "OnChangeChanGain(int,double)\0"
    "iChanID,dNewGain\0OnChangeChanInfo(CChannelCoreInfo)\0"
    "ChanInfo\0OnNetTranspPropsReceived(CNetworkTransportProps)\0"
    "NetworkTransportProps\0OnReqNetTranspProps()\0"
    "OnParseMessageBody(CVector<uint8_t>,int,int)\0"
    "OnProtcolMessageReceived(int,int,CVector<uint8_t>,CHostAddress)\0"
    "iRecCounter,iRecID,vecbyMesBodyData,RecHostAddr\0"
    "OnProtcolCLMessageReceived(int,CVector<uint8_t>,CHostAddress)\0"
    "iRecID,vecbyMesBodyData,RecHostAddr\0"
    "OnNewConnection()\0"
};

void CChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CChannel *_t = static_cast<CChannel *>(_o);
        switch (_id) {
        case 0: _t->MessReadyForSending((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1]))); break;
        case 1: _t->NewConnection(); break;
        case 2: _t->ReqJittBufSize(); break;
        case 3: _t->JittBufSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ServerAutoSockBufSizeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ReqConnClientsList(); break;
        case 6: _t->ConClientListMesReceived((*reinterpret_cast< CVector<CChannelInfo>(*)>(_a[1]))); break;
        case 7: _t->ChanInfoHasChanged(); break;
        case 8: _t->ReqChanInfo(); break;
        case 9: _t->ChatTextReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->ReqNetTranspProps(); break;
        case 11: _t->LicenceRequired((*reinterpret_cast< ELicenceType(*)>(_a[1]))); break;
        case 12: _t->Disconnected(); break;
        case 13: _t->DetectedCLMessage((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CHostAddress(*)>(_a[3]))); break;
        case 14: _t->ParseMessageBody((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->OnSendProtMessage((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1]))); break;
        case 16: _t->OnJittBufSizeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->OnChangeChanGain((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 18: _t->OnChangeChanInfo((*reinterpret_cast< CChannelCoreInfo(*)>(_a[1]))); break;
        case 19: _t->OnNetTranspPropsReceived((*reinterpret_cast< CNetworkTransportProps(*)>(_a[1]))); break;
        case 20: _t->OnReqNetTranspProps(); break;
        case 21: _t->OnParseMessageBody((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->OnProtcolMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[3])),(*reinterpret_cast< CHostAddress(*)>(_a[4]))); break;
        case 23: _t->OnProtcolCLMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[2])),(*reinterpret_cast< CHostAddress(*)>(_a[3]))); break;
        case 24: _t->OnNewConnection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CChannel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CChannel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CChannel,
      qt_meta_data_CChannel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CChannel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CChannel))
        return static_cast<void*>(const_cast< CChannel*>(this));
    return QObject::qt_metacast(_clname);
}

int CChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void CChannel::MessReadyForSending(CVector<uint8_t> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CChannel::NewConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CChannel::ReqJittBufSize()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CChannel::JittBufSizeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CChannel::ServerAutoSockBufSizeChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CChannel::ReqConnClientsList()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void CChannel::ConClientListMesReceived(CVector<CChannelInfo> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CChannel::ChanInfoHasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void CChannel::ReqChanInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void CChannel::ChatTextReceived(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CChannel::ReqNetTranspProps()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void CChannel::LicenceRequired(ELicenceType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CChannel::Disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void CChannel::DetectedCLMessage(CVector<uint8_t> _t1, int _t2, CHostAddress _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CChannel::ParseMessageBody(CVector<uint8_t> _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
