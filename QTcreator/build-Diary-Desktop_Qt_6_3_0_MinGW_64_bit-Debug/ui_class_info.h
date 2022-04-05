/********************************************************************************
** Form generated from reading UI file 'class_info.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS_INFO_H
#define UI_CLASS_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_class_info
{
public:
    QPushButton *cancel_button;
    QTextEdit *textEdit;

    void setupUi(QDialog *class_info)
    {
        if (class_info->objectName().isEmpty())
            class_info->setObjectName(QString::fromUtf8("class_info"));
        class_info->resize(426, 366);
        class_info->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(16, 149, 148);\n"
"\n"
""));
        cancel_button = new QPushButton(class_info);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
        cancel_button->setGeometry(QRect(130, 310, 161, 31));
        cancel_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        textEdit = new QTextEdit(class_info);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 401, 271));
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit->setReadOnly(true);

        retranslateUi(class_info);

        QMetaObject::connectSlotsByName(class_info);
    } // setupUi

    void retranslateUi(QDialog *class_info)
    {
        class_info->setWindowTitle(QCoreApplication::translate("class_info", "Dialog", nullptr));
        cancel_button->setText(QCoreApplication::translate("class_info", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class class_info: public Ui_class_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS_INFO_H
