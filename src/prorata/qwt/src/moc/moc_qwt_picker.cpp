/****************************************************************************
** Meta object code from reading C++ file 'qwt_picker.h'
**
** Created: ??? ?? 25 15:38:27 2006
**      by: The Qt Meta Object Compiler version 59 (Qt 4.1.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/qwt_picker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_picker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.1.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QwtPicker[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       8,   30, // properties
       3,   54, // enums/sets

 // signals: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x05,
      54,   50,   10,   10, 0x05,
      71,   50,   10,   10, 0x05,
      85,   11,   10,   10, 0x05,

 // properties: name, type, flags
     113,  109, 0x02095103,
     140,  128, 0x0009510b,
     158,  152, 0x40095103,
     181,  170, 0x0009510b,
     203,  192, 0x0009510b,
     219,  214, 0x01095003,
     234,  229, 0x4d095103,
     245,  229, 0x4d095103,

 // enums: name, flags, count, data
     170, 0x0,    8,   66,
     128, 0x0,    3,   82,
     192, 0x0,    2,   88,

 // enum data: key, value
     259, uint(QwtPicker::NoRubberBand),
     272, uint(QwtPicker::HLineRubberBand),
     288, uint(QwtPicker::VLineRubberBand),
     304, uint(QwtPicker::CrossRubberBand),
     320, uint(QwtPicker::RectRubberBand),
     335, uint(QwtPicker::EllipseRubberBand),
     353, uint(QwtPicker::PolygonRubberBand),
     371, uint(QwtPicker::UserRubberBand),
     386, uint(QwtPicker::AlwaysOff),
     396, uint(QwtPicker::AlwaysOn),
     405, uint(QwtPicker::ActiveOnly),
     416, uint(QwtPicker::Stretch),
     424, uint(QwtPicker::KeepSize),

       0        // eod
};

static const char qt_meta_stringdata_QwtPicker[] = {
    "QwtPicker\0\0pa\0selected(QwtPicker::SelectedPoints)\0pos\0"
    "appended(QPoint)\0moved(QPoint)\0changed(SelectedPoints)\0int\0"
    "selectionFlags\0DisplayMode\0trackerMode\0QFont\0trackerFont\0"
    "RubberBand\0rubberBand\0ResizeMode\0resizeMode\0bool\0isEnabled\0QPen\0"
    "trackerPen\0rubberBandPen\0NoRubberBand\0HLineRubberBand\0"
    "VLineRubberBand\0CrossRubberBand\0RectRubberBand\0EllipseRubberBand\0"
    "PolygonRubberBand\0UserRubberBand\0AlwaysOff\0AlwaysOn\0ActiveOnly\0"
    "Stretch\0KeepSize\0"
};

const QMetaObject QwtPicker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QwtPicker,
      qt_meta_data_QwtPicker, 0 }
};

const QMetaObject *QwtPicker::metaObject() const
{
    return &staticMetaObject;
}

void *QwtPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QwtPicker))
	return static_cast<void*>(const_cast<QwtPicker*>(this));
    if (!strcmp(_clname, "QwtEventPattern"))
	return static_cast<QwtEventPattern*>(const_cast<QwtPicker*>(this));
    return QObject::qt_metacast(_clname);
}

int QwtPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selected((*reinterpret_cast< const QwtPicker::SelectedPoints(*)>(_a[1]))); break;
        case 1: appended((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: moved((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: changed((*reinterpret_cast< const SelectedPoints(*)>(_a[1]))); break;
        }
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = selectionFlags(); break;
        case 1: *reinterpret_cast< DisplayMode*>(_v) = trackerMode(); break;
        case 2: *reinterpret_cast< QFont*>(_v) = trackerFont(); break;
        case 3: *reinterpret_cast< RubberBand*>(_v) = rubberBand(); break;
        case 4: *reinterpret_cast< ResizeMode*>(_v) = resizeMode(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isEnabled(); break;
        case 6: *reinterpret_cast< QPen*>(_v) = trackerPen(); break;
        case 7: *reinterpret_cast< QPen*>(_v) = rubberBandPen(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSelectionFlags(*reinterpret_cast< int*>(_v)); break;
        case 1: setTrackerMode(*reinterpret_cast< DisplayMode*>(_v)); break;
        case 2: setTrackerFont(*reinterpret_cast< QFont*>(_v)); break;
        case 3: setRubberBand(*reinterpret_cast< RubberBand*>(_v)); break;
        case 4: setResizeMode(*reinterpret_cast< ResizeMode*>(_v)); break;
        case 5: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: setTrackerPen(*reinterpret_cast< QPen*>(_v)); break;
        case 7: setRubberBandPen(*reinterpret_cast< QPen*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QwtPicker::selected(const QwtPicker::SelectedPoints & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QwtPicker::appended(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QwtPicker::moved(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QwtPicker::changed(const SelectedPoints & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
