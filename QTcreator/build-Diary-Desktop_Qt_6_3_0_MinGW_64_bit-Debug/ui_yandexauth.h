/********************************************************************************
** Form generated from reading UI file 'yandexauth.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YANDEXAUTH_H
#define UI_YANDEXAUTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_yandexAuth
{
public:

    void setupUi(QDialog *yandexAuth)
    {
        if (yandexAuth->objectName().isEmpty())
            yandexAuth->setObjectName(QString::fromUtf8("yandexAuth"));
        yandexAuth->resize(400, 300);

        retranslateUi(yandexAuth);

        QMetaObject::connectSlotsByName(yandexAuth);
    } // setupUi

    void retranslateUi(QDialog *yandexAuth)
    {
        yandexAuth->setWindowTitle(QCoreApplication::translate("yandexAuth", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class yandexAuth: public Ui_yandexAuth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YANDEXAUTH_H
