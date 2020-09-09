#-------------------------------------------------
#
# Project created by QtCreator 2017-06-27T13:23:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Jogo_Truco
TEMPLATE = app


SOURCES += src/Interface/main.cpp\
        src/Interface/mainwindow.cpp \
    src/Truco/jogo_truco.cpp \
    src/Truco/regratruco.cpp \
    src/Interface/getacao.cpp \
    src/Interface/help.cpp \
    src/Interface/name.cpp \
    src/Interface/qcarta.cpp \
    src/Interface/qjogo.cpp

HEADERS  += includes/Interface/mainwindow.h \
    includes/Truco/jogo_truco.h \
    includes/Truco/regratruco.h \
    includes/Interface/getacao.h \
    includes/Interface/help.h \
    includes/Interface/name.h \
    includes/Interface/qcarta.h \
    includes/Interface/qjogo.h

FORMS    += ui/mainwindow.ui \
    ui/getacao.ui \
    ui/getcarta.ui \
    ui/help.ui \
    ui/jogo.ui \
    ui/name.ui







RESOURCES += \
    myresources.qrc


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/Lib/carteado/Lib/release/ -lcarteado
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/Lib/carteado/Lib/debug/ -lcarteado
else:unix: LIBS += -L$$PWD/Lib/carteado/Lib/ -lcarteado


INCLUDEPATH += $$PWD/Lib/carteado/Lib
INCLUDEPATH += $$PWD/ui
INCLUDEPATH += $$PWD/includes/Truco
INCLUDEPATH += $$PWD/includes/Interface
INCLUDEPATH += $$PWD/Lib/carteado/src/p3

DEPENDPATH += $$PWD/../../carteado/Lib

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/Lib/carteado/Lib/release/libcarteado.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/Lib/carteado/Lib/debug/libcarteado.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/Lib/carteado/Lib/release/carteado.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/Lib/carteado/Lib/debug/carteado.lib
else:unix: PRE_TARGETDEPS += $$PWD/Lib/carteado/Lib/libcarteado.a

RESOURCES += \
    myresources.qrc
