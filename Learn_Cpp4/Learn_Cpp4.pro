TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    line.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    line.h

