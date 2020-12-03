#Project management
QT += core gui widgets serialport

TARGET = serialChain
TEMPLATE = app

SOURCES += \
    src/main.cpp \
    src/mainwindow.cpp \
    src/serialPort.cpp

HEADERS += \
    mainwindow_ui.h \
    inc/mainwindow.h \
    inc/serialPort.h

RESOURCES += \
    res.qrc

FORMS += \
    ui/mainwindow.ui
