/****************************************************************************
** Meta object code from reading C++ file 'qwt_compass.h'
**
** Created: ??? ?? 25 15:38:47 2006
**      by: The Qt Meta Object Compiler version 59 (Qt 4.1.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/qwt_compass.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_compass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.1.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QwtCompass[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_QwtCompass[] = {
    "QwtCompass\0"
};

const QMetaObject QwtCompass::staticMetaObject = {
    { &QwtDial::staticMetaObject, qt_meta_stringdata_QwtCompass,
      qt_meta_data_QwtCompass, 0 }
};

const QMetaObject *QwtCompass::metaObject() const
{
    return &staticMetaObject;
}

void *QwtCompass::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QwtCompass))
	return static_cast<void*>(const_cast<QwtCompass*>(this));
    return QwtDial::qt_metacast(_clname);
}

int QwtCompass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtDial::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
