/****************************************************************************
** Meta object code from reading C++ file 'audiomixerboard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/audiomixerboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audiomixerboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CChannelFader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   39,   45,   45, 0x05,
      46,   39,   45,   45, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   39,   45,   45, 0x0a,
      93,   39,   45,   45, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CChannelFader[] = {
    "CChannelFader\0gainValueChanged(double)\0"
    "value\0\0soloStateChanged(int)\0"
    "OnLevelValueChanged(int)\0"
    "OnMuteStateChanged(int)\0"
};

void CChannelFader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CChannelFader *_t = static_cast<CChannelFader *>(_o);
        switch (_id) {
        case 0: _t->gainValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->soloStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnLevelValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnMuteStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CChannelFader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CChannelFader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CChannelFader,
      qt_meta_data_CChannelFader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CChannelFader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CChannelFader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CChannelFader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CChannelFader))
        return static_cast<void*>(const_cast< CChannelFader*>(this));
    return QObject::qt_metacast(_clname);
}

int CChannelFader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CChannelFader::gainValueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CChannelFader::soloStateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_CAudioMixerBoard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   44,   54,   54, 0x05,
      55,   78,   54,   54, 0x05,

 // slots: signature, parameters, type, tag, flags
      93,  123,   54,   54, 0x0a,
     130,  123,   54,   54, 0x0a,
     160,  123,   54,   54, 0x0a,
     190,  123,   54,   54, 0x0a,
     220,  123,   54,   54, 0x0a,
     250,  123,   54,   54, 0x0a,
     280,  123,   54,   54, 0x0a,
     310,  123,   54,   54, 0x0a,
     340,  123,   54,   54, 0x0a,
     370,  123,   54,   54, 0x0a,
     400,  123,   54,   54, 0x0a,
     431,  123,   54,   54, 0x0a,
     462,  123,   54,   54, 0x0a,
     493,  123,   54,   54, 0x0a,
     524,  123,   54,   54, 0x0a,
     555,  123,   54,   54, 0x0a,
     586,  123,   54,   54, 0x0a,
     617,  123,   54,   54, 0x0a,
     648,  123,   54,   54, 0x0a,
     679,  123,   54,   54, 0x0a,
     710,   54,   54,   54, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CAudioMixerBoard[] = {
    "CAudioMixerBoard\0ChangeChanGain(int,double)\0"
    "iId,dGain\0\0NumClientsChanged(int)\0"
    "iNewNumClients\0OnGainValueChangedCh0(double)\0"
    "dValue\0OnGainValueChangedCh1(double)\0"
    "OnGainValueChangedCh2(double)\0"
    "OnGainValueChangedCh3(double)\0"
    "OnGainValueChangedCh4(double)\0"
    "OnGainValueChangedCh5(double)\0"
    "OnGainValueChangedCh6(double)\0"
    "OnGainValueChangedCh7(double)\0"
    "OnGainValueChangedCh8(double)\0"
    "OnGainValueChangedCh9(double)\0"
    "OnGainValueChangedCh10(double)\0"
    "OnGainValueChangedCh11(double)\0"
    "OnGainValueChangedCh12(double)\0"
    "OnGainValueChangedCh13(double)\0"
    "OnGainValueChangedCh14(double)\0"
    "OnGainValueChangedCh15(double)\0"
    "OnGainValueChangedCh16(double)\0"
    "OnGainValueChangedCh17(double)\0"
    "OnGainValueChangedCh18(double)\0"
    "OnGainValueChangedCh19(double)\0"
    "OnChSoloStateChanged()\0"
};

void CAudioMixerBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CAudioMixerBoard *_t = static_cast<CAudioMixerBoard *>(_o);
        switch (_id) {
        case 0: _t->ChangeChanGain((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->NumClientsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnGainValueChangedCh0((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->OnGainValueChangedCh1((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->OnGainValueChangedCh2((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->OnGainValueChangedCh3((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->OnGainValueChangedCh4((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->OnGainValueChangedCh5((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->OnGainValueChangedCh6((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->OnGainValueChangedCh7((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->OnGainValueChangedCh8((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->OnGainValueChangedCh9((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->OnGainValueChangedCh10((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->OnGainValueChangedCh11((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->OnGainValueChangedCh12((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->OnGainValueChangedCh13((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->OnGainValueChangedCh14((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->OnGainValueChangedCh15((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->OnGainValueChangedCh16((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->OnGainValueChangedCh17((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->OnGainValueChangedCh18((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->OnGainValueChangedCh19((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->OnChSoloStateChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CAudioMixerBoard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CAudioMixerBoard::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_CAudioMixerBoard,
      qt_meta_data_CAudioMixerBoard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CAudioMixerBoard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CAudioMixerBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CAudioMixerBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CAudioMixerBoard))
        return static_cast<void*>(const_cast< CAudioMixerBoard*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int CAudioMixerBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void CAudioMixerBoard::ChangeChanGain(int _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CAudioMixerBoard::NumClientsChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
