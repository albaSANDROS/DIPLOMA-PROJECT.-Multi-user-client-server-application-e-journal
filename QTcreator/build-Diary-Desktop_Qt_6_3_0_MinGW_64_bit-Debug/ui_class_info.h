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
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_class_info
{
public:
    QPushButton *cancel_buttom;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *class_info)
    {
        if (class_info->objectName().isEmpty())
            class_info->setObjectName(QString::fromUtf8("class_info"));
        class_info->resize(400, 300);
        cancel_buttom = new QPushButton(class_info);
        cancel_buttom->setObjectName(QString::fromUtf8("cancel_buttom"));
        cancel_buttom->setGeometry(QRect(150, 240, 101, 31));
        textBrowser = new QTextBrowser(class_info);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 371, 211));

        retranslateUi(class_info);

        QMetaObject::connectSlotsByName(class_info);
    } // setupUi

    void retranslateUi(QDialog *class_info)
    {
        class_info->setWindowTitle(QCoreApplication::translate("class_info", "Dialog", nullptr));
        cancel_buttom->setText(QCoreApplication::translate("class_info", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class class_info: public Ui_class_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS_INFO_H
