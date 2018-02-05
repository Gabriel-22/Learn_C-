TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    box.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    box.h

