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

QT_BEGIN_NAMESPACE

class Ui_diary_menu
{
public:
    QLabel *label;

    void setupUi(QDialog *diary_menu)
    {
        if (diary_menu->objectName().isEmpty())
            diary_menu->setObjectName(QString::fromUtf8("diary_menu"));
        diary_menu->resize(536, 392);
        label = new QLabel(diary_menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 160, 111, 61));

        retranslateUi(diary_menu);

        QMetaObject::connectSlotsByName(diary_menu);
    } // setupUi

    void retranslateUi(QDialog *diary_menu)
    {
        diary_menu->setWindowTitle(QCoreApplication::translate("diary_menu", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("diary_menu", "This is menu)))", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diary_menu: public Ui_diary_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIARY_MENU_H
