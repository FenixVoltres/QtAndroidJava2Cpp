TEMPLATE = app

QT += qml quick androidextras

SOURCES += main.cpp \
    qmlcppinterface.cpp \
    jniinterface.cpp

HEADERS += \
    qmlcppinterface.h \
    jniinterface.h

RESOURCES += qml.qrc

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android-sources

include(deployment.pri)


