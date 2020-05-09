/****************************************************************************
** Meta object code from reading C++ file 'util.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/util.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'util.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CAboutDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CAboutDlg[] = {
    "CAboutDlg\0"
};

void CAboutDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CAboutDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CAboutDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CAboutDlg,
      qt_meta_data_CAboutDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CAboutDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CAboutDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CAboutDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CAboutDlg))
        return static_cast<void*>(const_cast< CAboutDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CAboutDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CLicenceDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   37,   43,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CLicenceDlg[] = {
    "CLicenceDlg\0OnAgreeStateChanged(int)\0"
    "value\0\0"
};

void CLicenceDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CLicenceDlg *_t = static_cast<CLicenceDlg *>(_o);
        switch (_id) {
        case 0: _t->OnAgreeStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CLicenceDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CLicenceDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CLicenceDlg,
      qt_meta_data_CLicenceDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CLicenceDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CLicenceDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CLicenceDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CLicenceDlg))
        return static_cast<void*>(const_cast< CLicenceDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CLicenceDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_CMusProfDlg[] = {

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
      12,   40,   51,   51, 0x0a,
      52,   79,   51,   51, 0x0a,
      94,   79,   51,   51, 0x0a,
     118,   40,   51,   51, 0x0a,
     145,   79,   51,   51, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CMusProfDlg[] = {
    "CMusProfDlg\0OnAliasTextChanged(QString)\0"
    "strNewName\0\0OnInstrumentActivated(int)\0"
    "iCntryListItem\0OnCountryActivated(int)\0"
    "OnCityTextChanged(QString)\0"
    "OnSkillActivated(int)\0"
};

void CMusProfDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CMusProfDlg *_t = static_cast<CMusProfDlg *>(_o);
        switch (_id) {
        case 0: _t->OnAliasTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->OnInstrumentActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnCountryActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnCityTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->OnSkillActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CMusProfDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CMusProfDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CMusProfDlg,
      qt_meta_data_CMusProfDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CMusProfDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CMusProfDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CMusProfDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMusProfDlg))
        return static_cast<void*>(const_cast< CMusProfDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CMusProfDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_CHelpMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,   28,   28,   28, 0x0a,
      29,   28,   28,   28, 0x0a,
      43,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CHelpMenu[] = {
    "CHelpMenu\0OnHelpWhatsThis()\0\0OnHelpAbout()\0"
    "OnHelpDownloadLink()\0"
};

void CHelpMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CHelpMenu *_t = static_cast<CHelpMenu *>(_o);
        switch (_id) {
        case 0: _t->OnHelpWhatsThis(); break;
        case 1: _t->OnHelpAbout(); break;
        case 2: _t->OnHelpDownloadLink(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CHelpMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CHelpMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_CHelpMenu,
      qt_meta_data_CHelpMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CHelpMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CHelpMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CHelpMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CHelpMenu))
        return static_cast<void*>(const_cast< CHelpMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int CHelpMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
