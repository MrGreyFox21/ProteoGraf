/****************************************************************************
** Meta object code from reading C++ file 'gr1.h'
**
** Created: Wed 5. Dec 14:04:50 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gr1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gr1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gr1[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x08,
      13,    4,    4,    4, 0x08,
      21,    4,    4,    4, 0x08,
      29,    4,    4,    4, 0x08,
      45,   43,   38,    4, 0x08,
      73,   63,    4,    4, 0x08,
      92,    4,    4,    4, 0x08,
      99,    4,    4,    4, 0x08,
     110,    4,    4,    4, 0x08,
     121,    4,    4,    4, 0x08,
     132,    4,    4,    4, 0x08,
     143,    4,    4,    4, 0x08,
     154,    4,    4,    4, 0x08,
     165,    4,    4,    4, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gr1[] = {
    "Gr1\0\0Test1()\0Test2()\0Test3()\0SprMsg()\0"
    "bool\0s\0fileOpen(QString)\0XRol,XCol\0"
    "SelectCol(int,int)\0open()\0openTab1()\0"
    "openTab2()\0openTab3()\0openTab4()\0"
    "openTab5()\0openTab6()\0openTab7()\0"
};

void Gr1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Gr1 *_t = static_cast<Gr1 *>(_o);
        switch (_id) {
        case 0: _t->Test1(); break;
        case 1: _t->Test2(); break;
        case 2: _t->Test3(); break;
        case 3: _t->SprMsg(); break;
        case 4: { bool _r = _t->fileOpen((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->SelectCol((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->open(); break;
        case 7: _t->openTab1(); break;
        case 8: _t->openTab2(); break;
        case 9: _t->openTab3(); break;
        case 10: _t->openTab4(); break;
        case 11: _t->openTab5(); break;
        case 12: _t->openTab6(); break;
        case 13: _t->openTab7(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gr1::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gr1::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Gr1,
      qt_meta_data_Gr1, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gr1::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gr1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gr1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gr1))
        return static_cast<void*>(const_cast< Gr1*>(this));
    if (!strcmp(_clname, "Ui_Gr1Class"))
        return static_cast< Ui_Gr1Class*>(const_cast< Gr1*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Gr1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
