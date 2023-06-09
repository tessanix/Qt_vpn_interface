/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[22];
    char stringdata0[11];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[10];
    char stringdata5[10];
    char stringdata6[13];
    char stringdata7[13];
    char stringdata8[13];
    char stringdata9[13];
    char stringdata10[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 18),  // "enable_menu_button"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 19),  // "disable_menu_button"
        QT_MOC_LITERAL(51, 9),  // "hide_menu"
        QT_MOC_LITERAL(61, 9),  // "show_menu"
        QT_MOC_LITERAL(71, 12),  // "raise_page_1"
        QT_MOC_LITERAL(84, 12),  // "raise_page_2"
        QT_MOC_LITERAL(97, 12),  // "raise_page_3"
        QT_MOC_LITERAL(110, 12),  // "raise_page_4"
        QT_MOC_LITERAL(123, 12)   // "raise_page_5"
    },
    "MainWindow",
    "enable_menu_button",
    "",
    "disable_menu_button",
    "hide_menu",
    "show_menu",
    "raise_page_1",
    "raise_page_2",
    "raise_page_3",
    "raise_page_4",
    "raise_page_5"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    0,   70,    2, 0x0a,    3 /* Public */,
       5,    0,   71,    2, 0x0a,    4 /* Public */,
       6,    0,   72,    2, 0x0a,    5 /* Public */,
       7,    0,   73,    2, 0x0a,    6 /* Public */,
       8,    0,   74,    2, 0x0a,    7 /* Public */,
       9,    0,   75,    2, 0x0a,    8 /* Public */,
      10,    0,   76,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
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

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'enable_menu_button'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disable_menu_button'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hide_menu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_menu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'raise_page_1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'raise_page_2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'raise_page_3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'raise_page_4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'raise_page_5'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->enable_menu_button(); break;
        case 1: _t->disable_menu_button(); break;
        case 2: _t->hide_menu(); break;
        case 3: _t->show_menu(); break;
        case 4: _t->raise_page_1(); break;
        case 5: _t->raise_page_2(); break;
        case 6: _t->raise_page_3(); break;
        case 7: _t->raise_page_4(); break;
        case 8: _t->raise_page_5(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
