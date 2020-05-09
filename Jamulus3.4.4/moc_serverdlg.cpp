/****************************************************************************
** Meta object code from reading C++ file 'serverdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/serverdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CServerDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   27,   27,   27, 0x0a,
      28,   62,   27,   27, 0x0a,
      68,   62,   27,   27, 0x0a,
     108,   62,   27,   27, 0x0a,
     142,   27,   27,   27, 0x0a,
     182,  215,   27,   27, 0x0a,
     226,  261,   27,   27, 0x0a,
     272,  304,   27,   27, 0x0a,
     319,   27,   27,   27, 0x0a,
     329,   27,   27,   27, 0x0a,
     347,   27,   27,   27, 0x0a,
     365,   27,   27,   27, 0x0a,
     385,   27,   27,   27, 0x0a,
     405,   27,   27,   27, 0x0a,
     425,  479,   27,   27, 0x0a,
     489,  515,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CServerDlg[] = {
    "CServerDlg\0OnAboutToQuit()\0\0"
    "OnRegisterServerStateChanged(int)\0"
    "value\0OnDefaultCentralServerStateChanged(int)\0"
    "OnStartOnOSStartStateChanged(int)\0"
    "OnCentralServerAddressEditingFinished()\0"
    "OnServerNameTextChanged(QString)\0"
    "strNewName\0OnLocationCityTextChanged(QString)\0"
    "strNewCity\0OnLocationCountryActivated(int)\0"
    "iCntryListItem\0OnTimer()\0OnServerStarted()\0"
    "OnServerStopped()\0OnSysTrayMenuOpen()\0"
    "OnSysTrayMenuHide()\0OnSysTrayMenuExit()\0"
    "OnSysTrayActivated(QSystemTrayIcon::ActivationReason)\0"
    "ActReason\0keyPressEvent(QKeyEvent*)\0"
    "e\0"
};

void CServerDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CServerDlg *_t = static_cast<CServerDlg *>(_o);
        switch (_id) {
        case 0: _t->OnAboutToQuit(); break;
        case 1: _t->OnRegisterServerStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnDefaultCentralServerStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnStartOnOSStartStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OnCentralServerAddressEditingFinished(); break;
        case 5: _t->OnServerNameTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->OnLocationCityTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->OnLocationCountryActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->OnTimer(); break;
        case 9: _t->OnServerStarted(); break;
        case 10: _t->OnServerStopped(); break;
        case 11: _t->OnSysTrayMenuOpen(); break;
        case 12: _t->OnSysTrayMenuHide(); break;
        case 13: _t->OnSysTrayMenuExit(); break;
        case 14: _t->OnSysTrayActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 15: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CServerDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CServerDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CServerDlg,
      qt_meta_data_CServerDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CServerDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CServerDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CServerDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CServerDlg))
        return static_cast<void*>(const_cast< CServerDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CServerDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
