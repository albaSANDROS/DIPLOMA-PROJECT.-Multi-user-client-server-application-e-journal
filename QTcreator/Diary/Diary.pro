QT       += core gui sql
QT       += networkauth


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_mark.cpp \
    add_mark_2.cpp \
    authorization.cpp \
    check_class.cpp \
    check_student.cpp \
    class_info.cpp \
    diary_menu.cpp \
    get_data.cpp \
    main.cpp \
    mainwindow.cpp \
    parent_window.cpp \
    student_info.cpp \
    student_window.cpp

HEADERS += \
    add_mark.h \
    add_mark_2.h \
    authorization.h \
    check_class.h \
    check_student.h \
    class_info.h \
    connection.h \
    diary_menu.h \
    get_data.h \
    mainwindow.h \
    parent_window.h \
    student_info.h \
    student_window.h

FORMS += \
    add_mark.ui \
    add_mark_2.ui \
    authorization.ui \
    check_class.ui \
    check_student.ui \
    class_info.ui \
    diary_menu.ui \
    get_data.ui \
    mainwindow.ui \
    parent_window.ui \
    student_info.ui \
    student_window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
