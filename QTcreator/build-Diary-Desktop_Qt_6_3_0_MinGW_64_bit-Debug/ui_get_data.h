/********************************************************************************
** Form generated from reading UI file 'get_data.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GET_DATA_H
#define UI_GET_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_get_data
{
public:
    QLabel *label;
    QPushButton *get_back_button;
    QPushButton *classes_info_button;
    QPushButton *students_info_button;

    void setupUi(QDialog *get_data)
    {
        if (get_data->objectName().isEmpty())
            get_data->setObjectName(QString::fromUtf8("get_data"));
        get_data->resize(540, 428);
        get_data->setStyleSheet(QString::fromUtf8("color: rgb(16, 149, 148);\n"
"background-color: rgb(16, 149, 148);\n"
"\n"
""));
        label = new QLabel(get_data);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 471, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        get_back_button = new QPushButton(get_data);
        get_back_button->setObjectName(QString::fromUtf8("get_back_button"));
        get_back_button->setGeometry(QRect(40, 340, 471, 61));
        get_back_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        classes_info_button = new QPushButton(get_data);
        classes_info_button->setObjectName(QString::fromUtf8("classes_info_button"));
        classes_info_button->setGeometry(QRect(290, 80, 221, 221));
        classes_info_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        students_info_button = new QPushButton(get_data);
        students_info_button->setObjectName(QString::fromUtf8("students_info_button"));
        students_info_button->setGeometry(QRect(40, 80, 221, 221));
        students_info_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        QWidget::setTabOrder(students_info_button, classes_info_button);
        QWidget::setTabOrder(classes_info_button, get_back_button);

        retranslateUi(get_data);

        QMetaObject::connectSlotsByName(get_data);
    } // setupUi

    void retranslateUi(QDialog *get_data)
    {
        get_data->setWindowTitle(QCoreApplication::translate("get_data", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("get_data", "login", nullptr));
        get_back_button->setText(QCoreApplication::translate("get_data", "Go to menu", nullptr));
        classes_info_button->setText(QCoreApplication::translate("get_data", "Data about class", nullptr));
        students_info_button->setText(QCoreApplication::translate("get_data", "Data about student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class get_data: public Ui_get_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_DATA_H
