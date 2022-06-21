/********************************************************************************
** Form generated from reading UI file 'about_info.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_INFO_H
#define UI_ABOUT_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_about_info
{
public:
    QTextBrowser *textBrowser;
    QPushButton *back_button;

    void setupUi(QDialog *about_info)
    {
        if (about_info->objectName().isEmpty())
            about_info->setObjectName(QString::fromUtf8("about_info"));
        about_info->resize(400, 300);
        textBrowser = new QTextBrowser(about_info);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 10, 321, 231));
        back_button = new QPushButton(about_info);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setGeometry(QRect(40, 253, 321, 31));

        retranslateUi(about_info);

        QMetaObject::connectSlotsByName(about_info);
    } // setupUi

    void retranslateUi(QDialog *about_info)
    {
        about_info->setWindowTitle(QCoreApplication::translate("about_info", "Dialog", nullptr));
        back_button->setText(QCoreApplication::translate("about_info", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about_info: public Ui_about_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_INFO_H
