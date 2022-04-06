/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_authorization
{
public:
    QPushButton *accept_button;
    QLineEdit *token_lineEdit;
    QLabel *label;

    void setupUi(QDialog *authorization)
    {
        if (authorization->objectName().isEmpty())
            authorization->setObjectName(QString::fromUtf8("authorization"));
        authorization->resize(358, 258);
        authorization->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 149, 148);\n"
"\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        accept_button = new QPushButton(authorization);
        accept_button->setObjectName(QString::fromUtf8("accept_button"));
        accept_button->setGeometry(QRect(40, 140, 281, 81));
        accept_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        token_lineEdit = new QLineEdit(authorization);
        token_lineEdit->setObjectName(QString::fromUtf8("token_lineEdit"));
        token_lineEdit->setGeometry(QRect(40, 70, 281, 31));
        token_lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        token_lineEdit->setEchoMode(QLineEdit::Password);
        label = new QLabel(authorization);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 171, 28));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(authorization);

        QMetaObject::connectSlotsByName(authorization);
    } // setupUi

    void retranslateUi(QDialog *authorization)
    {
        authorization->setWindowTitle(QCoreApplication::translate("authorization", "Dialog", nullptr));
        accept_button->setText(QCoreApplication::translate("authorization", "Accept", nullptr));
        token_lineEdit->setInputMask(QString());
        token_lineEdit->setText(QString());
        label->setText(QCoreApplication::translate("authorization", "Put your validation code there", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authorization: public Ui_authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
