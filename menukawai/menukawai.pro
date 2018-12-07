#-------------------------------------------------
#
# Project created by QtCreator 2018-10-03T14:26:21
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = menukawai
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    menu1.cpp \
    personaje.cpp \
    game.cpp \
    disparos.cpp \
    guerra.cpp \
    vida.cpp \
    villanos.cpp \
    proyectiles.cpp \
    trampa.cpp \
    aliens.cpp \
    piedrasa.cpp

QT+= multimedia

HEADERS += \
        mainwindow.h \
    menu1.h \
    personaje.h \
    game.h \
    disparos.h \
    guerra.h \
    vida.h \
    villanos.h \
    proyectiles.h \
    trampa.h \
    aliens.h \
    piedrasa.h

FORMS += \
        mainwindow.ui \
    menu1.ui \
    game.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    juegokawai.qrc

DISTFILES += \
    música/OmegaVH19_Trim (online-audio-converter.com).mp3 \
    música/OmegaVH19_Trim (online-audio-converter.com).mp3
