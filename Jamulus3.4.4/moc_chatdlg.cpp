/****************************************************************************
** Meta object code from reading C++ file 'chatdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/chatdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CChatDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,   36,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   47,   47,   47, 0x0a,
      80,   36,   47,   47, 0x0a,
     117,   47,   47,   47, 0x0a,
     134,  160,   47,   47, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CChatDlg[] = {
    "CChatDlg\0NewLocalInputText(QString)\0"
    "strNewText\0\0OnLocalInputTextReturnPressed()\0"
    "OnLocalInputTextTextChanged(QString)\0"
    "OnClearPressed()\0keyPressEvent(QKeyEvent*)\0"
    "e\0"
};

void CChatDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CChatDlg *_t = static_cast<CChatDlg *>(_o);
        switch (_id) {
        case 0: _t->NewLocalInputText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->OnLocalInputTextReturnPressed(); break;
        case 2: _t->OnLocalInputTextTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->OnClearPressed(); break;
        case 4: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CChatDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CChatDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CChatDlg,
      qt_meta_data_CChatDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CChatDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CChatDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CChatDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CChatDlg))
        return static_cast<void*>(const_cast< CChatDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CChatDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void CChatDlg::NewLocalInputText(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
