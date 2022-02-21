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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student_info
{
public:
    QPushButton *cancel_buttom;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_8;
    QLabel *comments_label;
    QTextEdit *textEdit_comments;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QLabel *parents_info_label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *parents_fullname_label;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_parents_fullname;
    QLineEdit *lineEdit_parents_phonenum;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_6;
    QLabel *stud_info_label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *fullNameSt_label;
    QLabel *date_of_birth_label;
    QLabel *class_label;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_full_name;
    QLineEdit *lineEdit_dateOfBirth;
    QLineEdit *lineEdit_class_num;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_7;
    QLabel *marks_label;
    QTextEdit *textEdit_marks;

    void setupUi(QDialog *student_info)
    {
        if (student_info->objectName().isEmpty())
            student_info->setObjectName(QString::fromUtf8("student_info"));
        student_info->resize(400, 553);
        cancel_buttom = new QPushButton(student_info);
        cancel_buttom->setObjectName(QString::fromUtf8("cancel_buttom"));
        cancel_buttom->setGeometry(QRect(150, 510, 101, 31));
        label_5 = new QLabel(student_info);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 120, 349, 16));
        layoutWidget = new QWidget(student_info);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 370, 351, 121));
        verticalLayout_8 = new QVBoxLayout(layoutWidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        comments_label = new QLabel(layoutWidget);
        comments_label->setObjectName(QString::fromUtf8("comments_label"));

        verticalLayout_8->addWidget(comments_label);

        textEdit_comments = new QTextEdit(layoutWidget);
        textEdit_comments->setObjectName(QString::fromUtf8("textEdit_comments"));
        textEdit_comments->setReadOnly(true);

        verticalLayout_8->addWidget(textEdit_comments);

        widget = new QWidget(student_info);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 150, 351, 78));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        parents_info_label = new QLabel(widget);
        parents_info_label->setObjectName(QString::fromUtf8("parents_info_label"));

        verticalLayout_5->addWidget(parents_info_label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        parents_fullname_label = new QLabel(widget);
        parents_fullname_label->setObjectName(QString::fromUtf8("parents_fullname_label"));

        verticalLayout_4->addWidget(parents_fullname_label);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_4->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_parents_fullname = new QLineEdit(widget);
        lineEdit_parents_fullname->setObjectName(QString::fromUtf8("lineEdit_parents_fullname"));
        lineEdit_parents_fullname->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_parents_fullname);

        lineEdit_parents_phonenum = new QLineEdit(widget);
        lineEdit_parents_phonenum->setObjectName(QString::fromUtf8("lineEdit_parents_phonenum"));
        lineEdit_parents_phonenum->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_parents_phonenum);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        widget1 = new QWidget(student_info);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 20, 351, 106));
        verticalLayout_6 = new QVBoxLayout(widget1);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        stud_info_label = new QLabel(widget1);
        stud_info_label->setObjectName(QString::fromUtf8("stud_info_label"));

        verticalLayout_6->addWidget(stud_info_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        fullNameSt_label = new QLabel(widget1);
        fullNameSt_label->setObjectName(QString::fromUtf8("fullNameSt_label"));

        verticalLayout_3->addWidget(fullNameSt_label);

        date_of_birth_label = new QLabel(widget1);
        date_of_birth_label->setObjectName(QString::fromUtf8("date_of_birth_label"));

        verticalLayout_3->addWidget(date_of_birth_label);

        class_label = new QLabel(widget1);
        class_label->setObjectName(QString::fromUtf8("class_label"));

        verticalLayout_3->addWidget(class_label);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_full_name = new QLineEdit(widget1);
        lineEdit_full_name->setObjectName(QString::fromUtf8("lineEdit_full_name"));
        lineEdit_full_name->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_full_name);

        lineEdit_dateOfBirth = new QLineEdit(widget1);
        lineEdit_dateOfBirth->setObjectName(QString::fromUtf8("lineEdit_dateOfBirth"));
        lineEdit_dateOfBirth->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_dateOfBirth);

        lineEdit_class_num = new QLineEdit(widget1);
        lineEdit_class_num->setObjectName(QString::fromUtf8("lineEdit_class_num"));
        lineEdit_class_num->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_class_num);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_6->addLayout(horizontalLayout);

        widget2 = new QWidget(student_info);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(30, 240, 351, 121));
        verticalLayout_7 = new QVBoxLayout(widget2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        marks_label = new QLabel(widget2);
        marks_label->setObjectName(QString::fromUtf8("marks_label"));

        verticalLayout_7->addWidget(marks_label);

        textEdit_marks = new QTextEdit(widget2);
        textEdit_marks->setObjectName(QString::fromUtf8("textEdit_marks"));
        textEdit_marks->setReadOnly(true);

        verticalLayout_7->addWidget(textEdit_marks);


        retranslateUi(student_info);

        QMetaObject::connectSlotsByName(student_info);
    } // setupUi

    void retranslateUi(QDialog *student_info)
    {
        student_info->setWindowTitle(QCoreApplication::translate("student_info", "Dialog", nullptr));
        cancel_buttom->setText(QCoreApplication::translate("student_info", "Cancel", nullptr));
        label_5->setText(QString());
        comments_label->setText(QCoreApplication::translate("student_info", "Comments", nullptr));
        parents_info_label->setText(QCoreApplication::translate("student_info", "Parents info", nullptr));
        parents_fullname_label->setText(QCoreApplication::translate("student_info", "Full name", nullptr));
        label_6->setText(QCoreApplication::translate("student_info", "Phone number     ", nullptr));
        stud_info_label->setText(QCoreApplication::translate("student_info", "Student info", nullptr));
        fullNameSt_label->setText(QCoreApplication::translate("student_info", "Student full name", nullptr));
        date_of_birth_label->setText(QCoreApplication::translate("student_info", "Date of birth", nullptr));
        class_label->setText(QCoreApplication::translate("student_info", "Class", nullptr));
        marks_label->setText(QCoreApplication::translate("student_info", "Marks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student_info: public Ui_student_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_INFO_H
