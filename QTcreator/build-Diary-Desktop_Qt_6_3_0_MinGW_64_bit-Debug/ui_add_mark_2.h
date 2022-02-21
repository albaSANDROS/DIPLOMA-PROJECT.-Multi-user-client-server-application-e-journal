/********************************************************************************
** Form generated from reading UI file 'add_mark_2.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_MARK_2_H
#define UI_ADD_MARK_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_mark_2
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_students_fullname;
    QLabel *label_mark;
    QLabel *label_comments;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_full_name;
    QLineEdit *lineEdit_mark;
    QLineEdit *lineEdit;

    void setupUi(QDialog *add_mark_2)
    {
        if (add_mark_2->objectName().isEmpty())
            add_mark_2->setObjectName(QString::fromUtf8("add_mark_2"));
        add_mark_2->resize(400, 300);
        pushButton = new QPushButton(add_mark_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 210, 131, 71));
        pushButton_2 = new QPushButton(add_mark_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 210, 131, 71));
        label = new QLabel(add_mark_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 10, 101, 16));
        widget = new QWidget(add_mark_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 351, 111));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_students_fullname = new QLabel(widget);
        label_students_fullname->setObjectName(QString::fromUtf8("label_students_fullname"));

        verticalLayout_2->addWidget(label_students_fullname);

        label_mark = new QLabel(widget);
        label_mark->setObjectName(QString::fromUtf8("label_mark"));

        verticalLayout_2->addWidget(label_mark);

        label_comments = new QLabel(widget);
        label_comments->setObjectName(QString::fromUtf8("label_comments"));

        verticalLayout_2->addWidget(label_comments);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_full_name = new QLineEdit(widget);
        lineEdit_full_name->setObjectName(QString::fromUtf8("lineEdit_full_name"));
        lineEdit_full_name->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_full_name);

        lineEdit_mark = new QLineEdit(widget);
        lineEdit_mark->setObjectName(QString::fromUtf8("lineEdit_mark"));

        verticalLayout->addWidget(lineEdit_mark);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(add_mark_2);

        QMetaObject::connectSlotsByName(add_mark_2);
    } // setupUi

    void retranslateUi(QDialog *add_mark_2)
    {
        add_mark_2->setWindowTitle(QCoreApplication::translate("add_mark_2", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("add_mark_2", "Evaluate a student", nullptr));
        pushButton_2->setText(QCoreApplication::translate("add_mark_2", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("add_mark_2", "login", nullptr));
        label_students_fullname->setText(QCoreApplication::translate("add_mark_2", "Student`s full name", nullptr));
        label_mark->setText(QCoreApplication::translate("add_mark_2", "Mark", nullptr));
        label_comments->setText(QCoreApplication::translate("add_mark_2", "Comments", nullptr));
        lineEdit_mark->setPlaceholderText(QCoreApplication::translate("add_mark_2", "mark", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("add_mark_2", "comments (optional)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_mark_2: public Ui_add_mark_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MARK_2_H
