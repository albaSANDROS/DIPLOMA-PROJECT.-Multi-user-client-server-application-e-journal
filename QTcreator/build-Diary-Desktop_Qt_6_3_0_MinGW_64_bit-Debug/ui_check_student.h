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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *student_full_name;

    void setupUi(QDialog *check_student)
    {
        if (check_student->objectName().isEmpty())
            check_student->setObjectName(QString::fromUtf8("check_student"));
        check_student->resize(428, 312);
        check_student->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(16, 149, 148);\n"
"\n"
""));
        find_button = new QPushButton(check_student);
        find_button->setObjectName(QString::fromUtf8("find_button"));
        find_button->setGeometry(QRect(30, 140, 371, 81));
        find_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        cancel_button = new QPushButton(check_student);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
        cancel_button->setGeometry(QRect(30, 243, 371, 41));
        cancel_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(check_student);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 181, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(check_student);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 70, 381, 36));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_2);

        student_full_name = new QLineEdit(layoutWidget);
        student_full_name->setObjectName(QString::fromUtf8("student_full_name"));
        student_full_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(student_full_name);

        QWidget::setTabOrder(student_full_name, find_button);
        QWidget::setTabOrder(find_button, cancel_button);

        retranslateUi(check_student);

        QMetaObject::connectSlotsByName(check_student);
    } // setupUi

    void retranslateUi(QDialog *check_student)
    {
        check_student->setWindowTitle(QCoreApplication::translate("check_student", "Choose student", nullptr));
        find_button->setText(QCoreApplication::translate("check_student", "Find", nullptr));
        cancel_button->setText(QCoreApplication::translate("check_student", "cancel", nullptr));
        label->setText(QCoreApplication::translate("check_student", "Please, input student`s name", nullptr));
        label_2->setText(QCoreApplication::translate("check_student", "Full name", nullptr));
        student_full_name->setPlaceholderText(QCoreApplication::translate("check_student", "For example: Basko Aliaksandr", nullptr));
    } // retranslateUi

};

namespace Ui {
    class check_student: public Ui_check_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_STUDENT_H
