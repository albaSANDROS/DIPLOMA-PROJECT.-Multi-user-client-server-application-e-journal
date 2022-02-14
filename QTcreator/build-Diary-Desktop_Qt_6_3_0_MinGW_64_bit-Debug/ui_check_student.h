/********************************************************************************
** Form generated from reading UI file 'check_student.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_STUDENT_H
#define UI_CHECK_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_check_student
{
public:
    QPushButton *find_button;
    QPushButton *cancel_button;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *check_student)
    {
        if (check_student->objectName().isEmpty())
            check_student->setObjectName(QString::fromUtf8("check_student"));
        check_student->resize(307, 231);
        find_button = new QPushButton(check_student);
        find_button->setObjectName(QString::fromUtf8("find_button"));
        find_button->setGeometry(QRect(100, 100, 121, 61));
        cancel_button = new QPushButton(check_student);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
        cancel_button->setGeometry(QRect(100, 180, 121, 24));
        label = new QLabel(check_student);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 161, 41));
        lineEdit = new QLineEdit(check_student);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 60, 251, 31));

        retranslateUi(check_student);

        QMetaObject::connectSlotsByName(check_student);
    } // setupUi

    void retranslateUi(QDialog *check_student)
    {
        check_student->setWindowTitle(QCoreApplication::translate("check_student", "Dialog", nullptr));
        find_button->setText(QCoreApplication::translate("check_student", "Find", nullptr));
        cancel_button->setText(QCoreApplication::translate("check_student", "cancel", nullptr));
        label->setText(QCoreApplication::translate("check_student", "Please, input student`s name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class check_student: public Ui_check_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_STUDENT_H
