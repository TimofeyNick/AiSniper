TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle

SOURCES += main.cpp \
    physcengine.cpp \
    cannonball.cpp

HEADERS += \
    cannonball.h \
    cannonball.h \
    physcengine.h \
    Consts.h

DISTFILES += \
    data_inaccuracy.txt
