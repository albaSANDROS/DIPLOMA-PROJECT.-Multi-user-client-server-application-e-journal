/********************************************************************************
** Form generated from reading UI file 'add_mark.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_MARK_H
#define UI_ADD_MARK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_mark
{
public:
    QPushButton *next_pushButton;
    QPushButton *back_pushButton;
    QLabel *label_inp_name;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_fullName;
    QLineEdit *student_fullname;

    void setupUi(QDialog *add_mark)
    {
        if (add_mark->objectName().isEmpty())
            add_mark->setObjectName(QString::fromUtf8("add_mark"));
        add_mark->resize(498, 332);
        add_mark->setStyleSheet(QString::fromUtf8("color: rgb(16, 149, 148);\n"
"background-color: rgb(16, 149, 148);\n"
"color: rgb(255, 255, 255);"));
        next_pushButton = new QPushButton(add_mark);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));
        next_pushButton->setGeometry(QRect(30, 160, 441, 81));
        next_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        back_pushButton = new QPushButton(add_mark);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        back_pushButton->setGeometry(QRect(30, 260, 441, 51));
        back_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        label_inp_name = new QLabel(add_mark);
        label_inp_name->setObjectName(QString::fromUtf8("label_inp_name"));
        label_inp_name->setGeometry(QRect(140, 60, 311, 21));
        label_inp_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(add_mark);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 431, 21));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(add_mark);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 100, 441, 36));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_fullName = new QLabel(layoutWidget);
        label_fullName->setObjectName(QString::fromUtf8("label_fullName"));
        label_fullName->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_fullName);

        student_fullname = new QLineEdit(layoutWidget);
        student_fullname->setObjectName(QString::fromUtf8("student_fullname"));
        student_fullname->setStyleSheet(QString::fromUtf8("border-color: rgb(90, 184, 255);\n"
"color: rgb(255, 255, 255);\n"
"gridline-color: rgb(90, 184, 255);\n"
"selection-background-color: rgb(90, 184, 255);\n"
"alternate-background-color: rgb(90, 184, 255);"));
        student_fullname->setFrame(true);

        horizontalLayout->addWidget(student_fullname);

        QWidget::setTabOrder(student_fullname, next_pushButton);
        QWidget::setTabOrder(next_pushButton, back_pushButton);

        retranslateUi(add_mark);

        QMetaObject::connectSlotsByName(add_mark);
    } // setupUi

    void retranslateUi(QDialog *add_mark)
    {
        add_mark->setWindowTitle(QCoreApplication::translate("add_mark", "Dialog", nullptr));
        next_pushButton->setText(QCoreApplication::translate("add_mark", "Accept", nullptr));
        back_pushButton->setText(QCoreApplication::translate("add_mark", "Back", nullptr));
        label_inp_name->setText(QCoreApplication::translate("add_mark", "Please, input student`s full name", nullptr));
        label->setText(QCoreApplication::translate("add_mark", "login", nullptr));
        label_fullName->setText(QCoreApplication::translate("add_mark", "Full name is:", nullptr));
        student_fullname->setPlaceholderText(QCoreApplication::translate("add_mark", "For example: Basko Aliaksandr", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_mark: public Ui_add_mark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MARK_H
