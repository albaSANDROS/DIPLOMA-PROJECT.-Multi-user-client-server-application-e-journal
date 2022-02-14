QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    check_class.cpp \
    check_student.cpp \
    class_info.cpp \
    diary_menu.cpp \
    get_data.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    check_class.h \
    check_student.h \
    class_info.h \
    connection.h \
    diary_menu.h \
    get_data.h \
    mainwindow.h

FORMS += \
    check_class.ui \
    check_student.ui \
    class_info.ui \
    diary_menu.ui \
    get_data.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
