QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
greaterThan(QT_MAJOR_VERSION, 5): QT += core5compat

TARGET      = navbutton
TEMPLATE    = app
DESTDIR     = $$PWD/../bin
CONFIG      += warn_off

SOURCES     += main.cpp \
    test_problems.cpp \
    echo.cpp \
    algorithm1.cpp \
    bool1.cpp \
    plusm.cpp \
    teaching_p.cpp \
    turing_pre.cpp
SOURCES     += iconhelper.cpp
SOURCES     += frmnavbutton.cpp
SOURCES     += navbutton.cpp

HEADERS     += frmnavbutton.h \
    test_problems.h \
    echo.h \
    algorithm1.h \
    bool1.h \
    plusm.h \
    teaching_p.h \
    turing_pre.h
HEADERS     += iconhelper.h
HEADERS     += navbutton.h

FORMS       += frmnavbutton.ui \
    test_problems.ui \
    echo.ui \
    algorithm1.ui \
    bool1.ui \
    plusm.ui \
    teaching_p.ui \
    turing_pre.ui

RESOURCES   += main.qrc \
    lion.qrc \
    pic.qrc

DISTFILES += \
    images/lion.png

RC_ICONS = logo.ico
