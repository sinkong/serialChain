#Project management
QT += core gui widgets

TARGET = SerialAssit
TEMPLATE = app

SOURCES += \
    src/main.cpp \
    src/mainwindow.cpp \
    src/mySerialPort.cpp \
HEADERS += \
    inc/mainwindow.h \
    inc/mySerialPort.h \

RESOURCES += \
    res.qrc

FORMS += \
    ui/mainwindow.ui
