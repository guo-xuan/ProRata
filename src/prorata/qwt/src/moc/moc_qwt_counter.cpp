/****************************************************************************
** Meta object code from reading C++ file 'qwt_counter.h'
**
** Created: ??? ?? 25 15:38:50 2006
**      by: The Qt Meta Object Compiler version 59 (Qt 4.1.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/qwt_counter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_counter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.1.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QwtCounter[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       9,   35, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x05,
      41,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   11,   11,   11, 0x08,
      76,   11,   11,   11, 0x08,
      89,   11,   11,   11, 0x08,

 // properties: name, type, flags
     107,  103, 0x02095103,
     125,  118, 0x06095003,
     135,  118, 0x06095103,
     144,  118, 0x06095103,
     153,  103, 0x02095103,
     165,  103, 0x02095103,
     177,  103, 0x02095103,
      12,  118, 0x06095103,
     194,  189, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QwtCounter[] = {
    "QwtCounter\0\0value\0buttonReleased(double)\0valueChanged(double)\0"
    "btnReleased()\0btnClicked()\0textChanged()\0int\0numButtons\0double\0"
    "basicstep\0minValue\0maxValue\0stepButton1\0stepButton2\0stepButton3\0"
    "bool\0editable\0"
};

const QMetaObject QwtCounter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QwtCounter,
      qt_meta_data_QwtCounter, 0 }
};

const QMetaObject *QwtCounter::metaObject() const
{
    return &staticMetaObject;
}

void *QwtCounter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QwtCounter))
	return static_cast<void*>(const_cast<QwtCounter*>(this));
    if (!strcmp(_clname, "QwtDoubleRange"))
	return static_cast<QwtDoubleRange*>(const_cast<QwtCounter*>(this));
    return QWidget::qt_metacast(_clname);
}

int QwtCounter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: buttonReleased((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: btnReleased(); break;
        case 3: btnClicked(); break;
        case 4: textChanged(); break;
        }
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = numButtons(); break;
        case 1: *reinterpret_cast< double*>(_v) = step(); break;
        case 2: *reinterpret_cast< double*>(_v) = minVal(); break;
        case 3: *reinterpret_cast< double*>(_v) = maxVal(); break;
        case 4: *reinterpret_cast< int*>(_v) = stepButton1(); break;
        case 5: *reinterpret_cast< int*>(_v) = stepButton2(); break;
        case 6: *reinterpret_cast< int*>(_v) = stepButton3(); break;
        case 7: *reinterpret_cast< double*>(_v) = value(); break;
        case 8: *reinterpret_cast< bool*>(_v) = editable(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNumButtons(*reinterpret_cast< int*>(_v)); break;
        case 1: setStep(*reinterpret_cast< double*>(_v)); break;
        case 2: setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 3: setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 4: setStepButton1(*reinterpret_cast< int*>(_v)); break;
        case 5: setStepButton2(*reinterpret_cast< int*>(_v)); break;
        case 6: setStepButton3(*reinterpret_cast< int*>(_v)); break;
        case 7: setValue(*reinterpret_cast< double*>(_v)); break;
        case 8: setEditable(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QwtCounter::buttonReleased(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QwtCounter::valueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
