/****************************************************************************
** Meta object code from reading C++ file 'VisualizerWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/visualizer/VisualizerWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisualizerWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisualizerWindow_t {
    QByteArrayData data[19];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisualizerWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisualizerWindow_t qt_meta_stringdata_VisualizerWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "VisualizerWindow"
QT_MOC_LITERAL(1, 17, 8), // "openFile"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "filename"
QT_MOC_LITERAL(4, 36, 14), // "startRecording"
QT_MOC_LITERAL(5, 51, 18), // "showOpenFileDialog"
QT_MOC_LITERAL(6, 70, 4), // "play"
QT_MOC_LITERAL(7, 75, 6), // "toggle"
QT_MOC_LITERAL(8, 82, 8), // "nextScan"
QT_MOC_LITERAL(9, 91, 7), // "setScan"
QT_MOC_LITERAL(10, 99, 3), // "idx"
QT_MOC_LITERAL(11, 103, 5), // "reset"
QT_MOC_LITERAL(12, 109, 16), // "updateParameters"
QT_MOC_LITERAL(13, 126, 15), // "updateScanIndex"
QT_MOC_LITERAL(14, 142, 10), // "renderMaps"
QT_MOC_LITERAL(15, 153, 20), // "triggerPreprocessing"
QT_MOC_LITERAL(16, 174, 13), // "optimizeGraph"
QT_MOC_LITERAL(17, 188, 15), // "initializeGraph"
QT_MOC_LITERAL(18, 204, 9) // "savePoses"

    },
    "VisualizerWindow\0openFile\0\0filename\0"
    "startRecording\0showOpenFileDialog\0"
    "play\0toggle\0nextScan\0setScan\0idx\0reset\0"
    "updateParameters\0updateScanIndex\0"
    "renderMaps\0triggerPreprocessing\0"
    "optimizeGraph\0initializeGraph\0savePoses"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisualizerWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a /* Public */,
       4,    0,   87,    2, 0x0a /* Public */,
       5,    0,   88,    2, 0x09 /* Protected */,
       6,    1,   89,    2, 0x09 /* Protected */,
       8,    0,   92,    2, 0x09 /* Protected */,
       9,    1,   93,    2, 0x09 /* Protected */,
      11,    0,   96,    2, 0x09 /* Protected */,
      12,    0,   97,    2, 0x09 /* Protected */,
      13,    0,   98,    2, 0x09 /* Protected */,
      14,    0,   99,    2, 0x09 /* Protected */,
      15,    0,  100,    2, 0x09 /* Protected */,
      16,    0,  101,    2, 0x09 /* Protected */,
      17,    0,  102,    2, 0x09 /* Protected */,
      18,    0,  103,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VisualizerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisualizerWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->startRecording(); break;
        case 2: _t->showOpenFileDialog(); break;
        case 3: _t->play((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->nextScan(); break;
        case 5: _t->setScan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->reset(); break;
        case 7: _t->updateParameters(); break;
        case 8: _t->updateScanIndex(); break;
        case 9: _t->renderMaps(); break;
        case 10: _t->triggerPreprocessing(); break;
        case 11: _t->optimizeGraph(); break;
        case 12: _t->initializeGraph(); break;
        case 13: _t->savePoses(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VisualizerWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_VisualizerWindow.data,
    qt_meta_data_VisualizerWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VisualizerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisualizerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VisualizerWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int VisualizerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
