/********************************************************************************
** Form generated from reading UI file 'diary_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIARY_MENU_H
#define UI_DIARY_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_diary_menu
{
public:
    QLabel *label;
    QPushButton *start_lesson_button;
    QPushButton *get_data_button;
    QPushButton *contact_info_button;
    QPushButton *exit_button;

    void setupUi(QDialog *diary_menu)
    {
        if (diary_menu->objectName().isEmpty())
            diary_menu->setObjectName(QString::fromUtf8("diary_menu"));
        diary_menu->resize(545, 445);
        diary_menu->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(16, 149, 148);\n"
""));
        label = new QLabel(diary_menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 431, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria")});
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        start_lesson_button = new QPushButton(diary_menu);
        start_lesson_button->setObjectName(QString::fromUtf8("start_lesson_button"));
        start_lesson_button->setGeometry(QRect(50, 60, 441, 131));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(true);
        start_lesson_button->setFont(font1);
        start_lesson_button->setCursor(QCursor(Qt::OpenHandCursor));
        start_lesson_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        get_data_button = new QPushButton(diary_menu);
        get_data_button->setObjectName(QString::fromUtf8("get_data_button"));
        get_data_button->setGeometry(QRect(50, 210, 441, 131));
        get_data_button->setFont(font1);
        get_data_button->setCursor(QCursor(Qt::OpenHandCursor));
        get_data_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        contact_info_button = new QPushButton(diary_menu);
        contact_info_button->setObjectName(QString::fromUtf8("contact_info_button"));
        contact_info_button->setGeometry(QRect(50, 370, 121, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cambria")});
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(true);
        contact_info_button->setFont(font2);
        contact_info_button->setCursor(QCursor(Qt::OpenHandCursor));
        contact_info_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        exit_button = new QPushButton(diary_menu);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        exit_button->setGeometry(QRect(370, 370, 121, 51));
        exit_button->setFont(font2);
        exit_button->setCursor(QCursor(Qt::OpenHandCursor));
        exit_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(diary_menu);

        QMetaObject::connectSlotsByName(diary_menu);
    } // setupUi

    void retranslateUi(QDialog *diary_menu)
    {
        diary_menu->setWindowTitle(QCoreApplication::translate("diary_menu", "Diary menu", nullptr));
        label->setText(QCoreApplication::translate("diary_menu", "login", nullptr));
        start_lesson_button->setText(QCoreApplication::translate("diary_menu", "Add marks", nullptr));
        get_data_button->setText(QCoreApplication::translate("diary_menu", "Get data about student", nullptr));
        contact_info_button->setText(QCoreApplication::translate("diary_menu", "Support", nullptr));
        exit_button->setText(QCoreApplication::translate("diary_menu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diary_menu: public Ui_diary_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIARY_MENU_H
