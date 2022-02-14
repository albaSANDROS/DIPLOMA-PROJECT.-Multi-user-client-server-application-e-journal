/********************************************************************************
** Form generated from reading UI file 'check_class.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_CLASS_H
#define UI_CHECK_CLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_check_class
{
public:
    QPushButton *find_button;
    QPushButton *cancel_button;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *check_class)
    {
        if (check_class->objectName().isEmpty())
            check_class->setObjectName(QString::fromUtf8("check_class"));
        check_class->resize(300, 230);
        find_button = new QPushButton(check_class);
        find_button->setObjectName(QString::fromUtf8("find_button"));
        find_button->setGeometry(QRect(90, 100, 121, 61));
        cancel_button = new QPushButton(check_class);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
        cancel_button->setGeometry(QRect(90, 180, 121, 24));
        label = new QLabel(check_class);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 161, 41));
        lineEdit = new QLineEdit(check_class);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 60, 251, 31));

        retranslateUi(check_class);

        QMetaObject::connectSlotsByName(check_class);
    } // setupUi

    void retranslateUi(QDialog *check_class)
    {
        check_class->setWindowTitle(QCoreApplication::translate("check_class", "Dialog", nullptr));
        find_button->setText(QCoreApplication::translate("check_class", "Find", nullptr));
        cancel_button->setText(QCoreApplication::translate("check_class", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("check_class", "Please, input class number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class check_class: public Ui_check_class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_CLASS_H
