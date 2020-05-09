/****************************************************************************
** Meta object code from reading C++ file 'clientdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/clientdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CClientDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   27,   27,   27, 0x0a,
      28,   27,   27,   27, 0x0a,
      49,   27,   27,   27, 0x0a,
      65,   27,   27,   27, 0x0a,
      85,   27,   27,   27, 0x0a,
     101,   27,   27,   27, 0x0a,
     115,  137,   27,   27, 0x0a,
     147,  204,   27,   27, 0x0a,
     235,  269,   27,   27, 0x0a,
     288,   27,   27,   27, 0x0a,
     318,   27,   27,   27, 0x0a,
     348,   27,   27,   27, 0x0a,
     372,   27,   27,   27, 0x0a,
     391,   27,   27,   27, 0x0a,
     415,  443,   27,   27, 0x0a,
     449,  443,   27,   27, 0x0a,
     473,  443,   27,   27, 0x0a,
     500,  443,   27,   27, 0x0a,
     528,  443,   27,   27, 0x0a,
     559,   27,   27,   27, 0x0a,
     581,   27,   27,   27, 0x0a,
     603,  653,   27,   27, 0x0a,
     665,  693,   27,   27, 0x0a,
     705,  737,   27,   27, 0x0a,
     750,  779,   27,   27, 0x0a,
     789,  693,   27,   27, 0x0a,
     818,  853,   27,   27, 0x0a,
     862,  853,   27,   27, 0x0a,
     904,  853,   27,   27, 0x0a,
     953,  853,   27,   27, 0x0a,
    1009, 1067,   27,   27, 0x0a,
    1090, 1157,   27,   27, 0x0a,
    1178,   27,   27,   27, 0x0a,
    1201,   27,   27,   27, 0x0a,
    1218,   27,   27,   27, 0x0a,
    1239,   27,   27,   27, 0x0a,
    1264, 1289,   27,   27, 0x0a,
    1304,   27,   27,   27, 0x0a,
    1330,   27,   27,   27, 0x0a,
    1339, 1365,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CClientDlg[] = {
    "CClientDlg\0OnAboutToQuit()\0\0"
    "OnConnectDisconBut()\0OnTimerSigMet()\0"
    "OnTimerBuffersLED()\0OnTimerStatus()\0"
    "OnTimerPing()\0OnPingTimeResult(int)\0"
    "iPingTime\0"
    "OnCLPingTimeWithNumClientsReceived(CHostAddress,int,int)\0"
    "InetAddr,iPingTime,iNumClients\0"
    "OnControllerInFaderLevel(int,int)\0"
    "iChannelIdx,iValue\0OnOpenConnectionSetupDialog()\0"
    "OnOpenMusicianProfileDialog()\0"
    "OnOpenGeneralSettings()\0OnOpenChatDialog()\0"
    "OnOpenAnalyzerConsole()\0"
    "OnSettingsStateChanged(int)\0value\0"
    "OnChatStateChanged(int)\0"
    "OnProfileStateChanged(int)\0"
    "OnAudioPanValueChanged(int)\0"
    "OnAudioReverbValueChanged(int)\0"
    "OnReverbSelLClicked()\0OnReverbSelRClicked()\0"
    "OnConClientListMesReceived(CVector<CChannelInfo>)\0"
    "vecChanInfo\0OnChatTextReceived(QString)\0"
    "strChatText\0OnLicenceRequired(ELicenceType)\0"
    "eLicenceType\0OnChangeChanGain(int,double)\0"
    "iId,dGain\0OnNewLocalInputText(QString)\0"
    "OnReqServerListQuery(CHostAddress)\0"
    "InetAddr\0OnCreateCLServerListPingMes(CHostAddress)\0"
    "OnCreateCLServerListReqVerAndOSMes(CHostAddress)\0"
    "OnCreateCLServerListReqConnClientsListMes(CHostAddress)\0"
    "OnCLServerListReceived(CHostAddress,CVector<CServerInfo>)\0"
    "InetAddr,vecServerInfo\0"
    "OnCLConnClientsListMesReceived(CHostAddress,CVector<CChannelInfo>)\0"
    "InetAddr,vecChanInfo\0OnConnectDlgAccepted()\0"
    "OnDisconnected()\0OnGUIDesignChanged()\0"
    "OnAudioChannelsChanged()\0"
    "OnNumClientsChanged(int)\0iNewNumClients\0"
    "OnNewClientLevelChanged()\0accept()\0"
    "keyPressEvent(QKeyEvent*)\0e\0"
};

void CClientDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CClientDlg *_t = static_cast<CClientDlg *>(_o);
        switch (_id) {
        case 0: _t->OnAboutToQuit(); break;
        case 1: _t->OnConnectDisconBut(); break;
        case 2: _t->OnTimerSigMet(); break;
        case 3: _t->OnTimerBuffersLED(); break;
        case 4: _t->OnTimerStatus(); break;
        case 5: _t->OnTimerPing(); break;
        case 6: _t->OnPingTimeResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnCLPingTimeWithNumClientsReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->OnControllerInFaderLevel((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 9: _t->OnOpenConnectionSetupDialog(); break;
        case 10: _t->OnOpenMusicianProfileDialog(); break;
        case 11: _t->OnOpenGeneralSettings(); break;
        case 12: _t->OnOpenChatDialog(); break;
        case 13: _t->OnOpenAnalyzerConsole(); break;
        case 14: _t->OnSettingsStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->OnChatStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->OnProfileStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->OnAudioPanValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->OnAudioReverbValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->OnReverbSelLClicked(); break;
        case 20: _t->OnReverbSelRClicked(); break;
        case 21: _t->OnConClientListMesReceived((*reinterpret_cast< CVector<CChannelInfo>(*)>(_a[1]))); break;
        case 22: _t->OnChatTextReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->OnLicenceRequired((*reinterpret_cast< ELicenceType(*)>(_a[1]))); break;
        case 24: _t->OnChangeChanGain((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 25: _t->OnNewLocalInputText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->OnReqServerListQuery((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 27: _t->OnCreateCLServerListPingMes((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 28: _t->OnCreateCLServerListReqVerAndOSMes((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 29: _t->OnCreateCLServerListReqConnClientsListMes((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 30: _t->OnCLServerListReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<CServerInfo>(*)>(_a[2]))); break;
        case 31: _t->OnCLConnClientsListMesReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<CChannelInfo>(*)>(_a[2]))); break;
        case 32: _t->OnConnectDlgAccepted(); break;
        case 33: _t->OnDisconnected(); break;
        case 34: _t->OnGUIDesignChanged(); break;
        case 35: _t->OnAudioChannelsChanged(); break;
        case 36: _t->OnNumClientsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->OnNewClientLevelChanged(); break;
        case 38: _t->accept(); break;
        case 39: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CClientDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CClientDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CClientDlg,
      qt_meta_data_CClientDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CClientDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CClientDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CClientDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CClientDlg))
        return static_cast<void*>(const_cast< CClientDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CClientDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
