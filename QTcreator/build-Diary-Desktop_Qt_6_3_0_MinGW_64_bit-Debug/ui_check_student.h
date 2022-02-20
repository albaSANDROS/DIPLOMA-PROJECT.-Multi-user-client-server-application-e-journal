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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_check_student
{
public:
    QPushButton *find_button;
    QPushButton *cancel_button;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *student_full_name;

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
        widget = new QWidget(check_student);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 50, 241, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        student_full_name = new QLineEdit(widget);
        student_full_name->setObjectName(QString::fromUtf8("student_full_name"));

        horizontalLayout->addWidget(student_full_name);


        retranslateUi(check_student);

        QMetaObject::connectSlotsByName(check_student);
    } // setupUi

    void retranslateUi(QDialog *check_student)
    {
        check_student->setWindowTitle(QCoreApplication::translate("check_student", "Dialog", nullptr));
        find_button->setText(QCoreApplication::translate("check_student", "Find", nullptr));
        cancel_button->setText(QCoreApplication::translate("check_student", "cancel", nullptr));
        label->setText(QCoreApplication::translate("check_student", "Please, input student`s name", nullptr));
        label_2->setText(QCoreApplication::translate("check_student", "Full name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class check_student: public Ui_check_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_STUDENT_H
