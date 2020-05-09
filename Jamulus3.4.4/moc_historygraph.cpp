/****************************************************************************
** Meta object code from reading C++ file 'historygraph.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/historygraph.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'historygraph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CJpegHistoryGraph[] = {

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
      18,   39,   39,   39, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CJpegHistoryGraph[] = {
    "CJpegHistoryGraph\0OnTimerDailyUpdate()\0"
    "\0"
};

void CJpegHistoryGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CJpegHistoryGraph *_t = static_cast<CJpegHistoryGraph *>(_o);
        switch (_id) {
        case 0: _t->OnTimerDailyUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CJpegHistoryGraph::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CJpegHistoryGraph::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CJpegHistoryGraph,
      qt_meta_data_CJpegHistoryGraph, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CJpegHistoryGraph::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CJpegHistoryGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CJpegHistoryGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CJpegHistoryGraph))
        return static_cast<void*>(const_cast< CJpegHistoryGraph*>(this));
    if (!strcmp(_clname, "AHistoryGraph"))
        return static_cast< AHistoryGraph*>(const_cast< CJpegHistoryGraph*>(this));
    return QObject::qt_metacast(_clname);
}

int CJpegHistoryGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_CSvgHistoryGraph[] = {

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
      17,   38,   38,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CSvgHistoryGraph[] = {
    "CSvgHistoryGraph\0OnTimerDailyUpdate()\0"
    "\0"
};

void CSvgHistoryGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSvgHistoryGraph *_t = static_cast<CSvgHistoryGraph *>(_o);
        switch (_id) {
        case 0: _t->OnTimerDailyUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CSvgHistoryGraph::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CSvgHistoryGraph::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CSvgHistoryGraph,
      qt_meta_data_CSvgHistoryGraph, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CSvgHistoryGraph::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CSvgHistoryGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CSvgHistoryGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CSvgHistoryGraph))
        return static_cast<void*>(const_cast< CSvgHistoryGraph*>(this));
    if (!strcmp(_clname, "AHistoryGraph"))
        return static_cast< AHistoryGraph*>(const_cast< CSvgHistoryGraph*>(this));
    return QObject::qt_metacast(_clname);
}

int CSvgHistoryGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
