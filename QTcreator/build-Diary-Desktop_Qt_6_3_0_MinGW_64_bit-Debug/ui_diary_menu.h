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
    QPushButton *contact_info;
    QPushButton *exit_button;

    void setupUi(QDialog *diary_menu)
    {
        if (diary_menu->objectName().isEmpty())
            diary_menu->setObjectName(QString::fromUtf8("diary_menu"));
        diary_menu->resize(536, 405);
        label = new QLabel(diary_menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 10, 251, 31));
        start_lesson_button = new QPushButton(diary_menu);
        start_lesson_button->setObjectName(QString::fromUtf8("start_lesson_button"));
        start_lesson_button->setGeometry(QRect(50, 50, 441, 131));
        get_data_button = new QPushButton(diary_menu);
        get_data_button->setObjectName(QString::fromUtf8("get_data_button"));
        get_data_button->setGeometry(QRect(50, 210, 441, 131));
        contact_info = new QPushButton(diary_menu);
        contact_info->setObjectName(QString::fromUtf8("contact_info"));
        contact_info->setGeometry(QRect(50, 360, 111, 31));
        exit_button = new QPushButton(diary_menu);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        exit_button->setGeometry(QRect(380, 360, 111, 31));

        retranslateUi(diary_menu);

        QMetaObject::connectSlotsByName(diary_menu);
    } // setupUi

    void retranslateUi(QDialog *diary_menu)
    {
        diary_menu->setWindowTitle(QCoreApplication::translate("diary_menu", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("diary_menu", "login", nullptr));
        start_lesson_button->setText(QCoreApplication::translate("diary_menu", "Add marks", nullptr));
        get_data_button->setText(QCoreApplication::translate("diary_menu", "Get data about student", nullptr));
        contact_info->setText(QCoreApplication::translate("diary_menu", "Support", nullptr));
        exit_button->setText(QCoreApplication::translate("diary_menu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diary_menu: public Ui_diary_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIARY_MENU_H
