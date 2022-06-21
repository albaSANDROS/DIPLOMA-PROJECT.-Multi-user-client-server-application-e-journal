/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *authorize_button;
    QLabel *label;
    QLabel *Created;
    QLabel *version;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(778, 335);
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(16, 149, 148);\n"
"background-color: rgb(16, 149, 148);\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 731, 241));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria")});
        font.setPointSize(8);
        font.setBold(true);
        font.setItalic(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        authorize_button = new QPushButton(groupBox);
        authorize_button->setObjectName(QString::fromUtf8("authorize_button"));
        authorize_button->setGeometry(QRect(20, 140, 681, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria")});
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        authorize_button->setFont(font1);
        authorize_button->setCursor(QCursor(Qt::PointingHandCursor));
        authorize_button->setMouseTracking(false);
        authorize_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 30, 371, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font2.setPointSize(37);
        font2.setBold(false);
        font2.setItalic(false);
        label->setFont(font2);
        Created = new QLabel(centralwidget);
        Created->setObjectName(QString::fromUtf8("Created"));
        Created->setGeometry(QRect(20, 270, 221, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Candara")});
        font3.setPointSize(11);
        font3.setItalic(true);
        Created->setFont(font3);
        Created->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        version = new QLabel(centralwidget);
        version->setObjectName(QString::fromUtf8("version"));
        version->setGeometry(QRect(680, 270, 81, 21));
        QFont font4;
        font4.setPointSize(9);
        font4.setItalic(true);
        version->setFont(font4);
        version->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 778, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Authorization", nullptr));
        authorize_button->setText(QCoreApplication::translate("MainWindow", "Authorize", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome to Diary", nullptr));
        Created->setText(QCoreApplication::translate("MainWindow", "Created in Belarus, with love", nullptr));
        version->setText(QCoreApplication::translate("MainWindow", "ver 1.01 (beta)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
