/********************************************************************************
** Form generated from reading UI file 'student_info.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_INFO_H
#define UI_STUDENT_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_student_info
{
public:
    QPushButton *cancel_buttom;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *student_info)
    {
        if (student_info->objectName().isEmpty())
            student_info->setObjectName(QString::fromUtf8("student_info"));
        student_info->resize(400, 300);
        cancel_buttom = new QPushButton(student_info);
        cancel_buttom->setObjectName(QString::fromUtf8("cancel_buttom"));
        cancel_buttom->setGeometry(QRect(150, 240, 101, 31));
        textBrowser = new QTextBrowser(student_info);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 371, 211));

        retranslateUi(student_info);

        QMetaObject::connectSlotsByName(student_info);
    } // setupUi

    void retranslateUi(QDialog *student_info)
    {
        student_info->setWindowTitle(QCoreApplication::translate("student_info", "Dialog", nullptr));
        cancel_buttom->setText(QCoreApplication::translate("student_info", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student_info: public Ui_student_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_INFO_H
