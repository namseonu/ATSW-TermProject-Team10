/****************************************************************************
** Meta object code from reading C++ file 'ViewportWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/visualizer/ViewportWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewportWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewportWidget_t {
    QByteArrayData data[20];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewportWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewportWidget_t qt_meta_stringdata_ViewportWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ViewportWidget"
QT_MOC_LITERAL(1, 15, 16), // "setDrawingOption"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "std::string"
QT_MOC_LITERAL(4, 45, 4), // "name"
QT_MOC_LITERAL(5, 50, 5), // "value"
QT_MOC_LITERAL(6, 56, 12), // "setPointSize"
QT_MOC_LITERAL(7, 69, 9), // "pointSize"
QT_MOC_LITERAL(8, 79, 17), // "setPointColorMode"
QT_MOC_LITERAL(9, 97, 3), // "idx"
QT_MOC_LITERAL(10, 101, 20), // "setDepthMapColorMode"
QT_MOC_LITERAL(11, 122, 18), // "setSurfelColorMode"
QT_MOC_LITERAL(12, 141, 10), // "setIcpStep"
QT_MOC_LITERAL(13, 152, 14), // "setHistorySize"
QT_MOC_LITERAL(14, 167, 4), // "size"
QT_MOC_LITERAL(15, 172, 22), // "setConfidenceThreshold"
QT_MOC_LITERAL(16, 195, 11), // "setColorMap"
QT_MOC_LITERAL(17, 207, 33), // "std::map<uint32_t,semantic_co..."
QT_MOC_LITERAL(18, 241, 8), // "colormap"
QT_MOC_LITERAL(19, 250, 6) // "redraw"

    },
    "ViewportWidget\0setDrawingOption\0\0"
    "std::string\0name\0value\0setPointSize\0"
    "pointSize\0setPointColorMode\0idx\0"
    "setDepthMapColorMode\0setSurfelColorMode\0"
    "setIcpStep\0setHistorySize\0size\0"
    "setConfidenceThreshold\0setColorMap\0"
    "std::map<uint32_t,semantic_color>\0"
    "colormap\0redraw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewportWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x0a /* Public */,
       6,    1,   69,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x0a /* Public */,
      11,    1,   78,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x0a /* Public */,
      13,    1,   84,    2, 0x0a /* Public */,
      15,    1,   87,    2, 0x0a /* Public */,
      16,    1,   90,    2, 0x0a /* Public */,
      19,    0,   93,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

       0        // eod
};

void ViewportWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewportWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setDrawingOption((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->setPointSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setPointColorMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setDepthMapColorMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setSurfelColorMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setIcpStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setHistorySize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setConfidenceThreshold((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setColorMap((*reinterpret_cast< std::map<uint32_t,semantic_color>(*)>(_a[1]))); break;
        case 9: _t->redraw(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ViewportWidget::staticMetaObject = { {
    &QGLWidget::staticMetaObject,
    qt_meta_stringdata_ViewportWidget.data,
    qt_meta_data_ViewportWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ViewportWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewportWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewportWidget.stringdata0))
        return static_cast<void*>(this);
    return QGLWidget::qt_metacast(_clname);
}

int ViewportWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
