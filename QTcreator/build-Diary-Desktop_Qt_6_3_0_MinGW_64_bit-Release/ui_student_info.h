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
    QPushButton *cancel_button;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_8;
    QLabel *comments_label;
    QTextEdit *textEdit_comments;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QLabel *parents_info_label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *parents_fullname_label;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_parents_fullname;
    QLineEdit *lineEdit_parents_phonenum;
    QWidget *layoutWidget2;
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
    QTextEdit *textEdit_avg_marks;
    QLabel *avg_label;
    QLabel *marks_label;
    QTextEdit *textEdit_marks;

    void setupUi(QDialog *student_info)
    {
        if (student_info->objectName().isEmpty())
            student_info->setObjectName(QString::fromUtf8("student_info"));
        student_info->resize(459, 784);
        student_info->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(16, 149, 148);\n"
""));
        cancel_button = new QPushButton(student_info);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
        cancel_button->setGeometry(QRect(60, 690, 351, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria")});
        font.setPointSize(17);
        font.setBold(true);
        font.setItalic(true);
        cancel_button->setFont(font);
        cancel_button->setCursor(QCursor(Qt::OpenHandCursor));
        cancel_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(student_info);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 160, 349, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria")});
        font1.setBold(true);
        font1.setItalic(true);
        label_5->setFont(font1);
        layoutWidget = new QWidget(student_info);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 490, 351, 163));
        layoutWidget->setFont(font1);
        verticalLayout_8 = new QVBoxLayout(layoutWidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        comments_label = new QLabel(layoutWidget);
        comments_label->setObjectName(QString::fromUtf8("comments_label"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cambria")});
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(true);
        comments_label->setFont(font2);
        comments_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_8->addWidget(comments_label);

        textEdit_comments = new QTextEdit(layoutWidget);
        textEdit_comments->setObjectName(QString::fromUtf8("textEdit_comments"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cambria")});
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(true);
        textEdit_comments->setFont(font3);
        textEdit_comments->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_comments->setReadOnly(true);

        verticalLayout_8->addWidget(textEdit_comments);

        layoutWidget1 = new QWidget(student_info);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 180, 351, 91));
        layoutWidget1->setFont(font1);
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        parents_info_label = new QLabel(layoutWidget1);
        parents_info_label->setObjectName(QString::fromUtf8("parents_info_label"));
        parents_info_label->setFont(font2);
        parents_info_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(parents_info_label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        parents_fullname_label = new QLabel(layoutWidget1);
        parents_fullname_label->setObjectName(QString::fromUtf8("parents_fullname_label"));
        parents_fullname_label->setFont(font2);
        parents_fullname_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(parents_fullname_label);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_parents_fullname = new QLineEdit(layoutWidget1);
        lineEdit_parents_fullname->setObjectName(QString::fromUtf8("lineEdit_parents_fullname"));
        lineEdit_parents_fullname->setFont(font2);
        lineEdit_parents_fullname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_parents_fullname->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_parents_fullname);

        lineEdit_parents_phonenum = new QLineEdit(layoutWidget1);
        lineEdit_parents_phonenum->setObjectName(QString::fromUtf8("lineEdit_parents_phonenum"));
        lineEdit_parents_phonenum->setFont(font2);
        lineEdit_parents_phonenum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_parents_phonenum->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_parents_phonenum);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        layoutWidget2 = new QWidget(student_info);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 30, 351, 131));
        layoutWidget2->setFont(font1);
        verticalLayout_6 = new QVBoxLayout(layoutWidget2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        stud_info_label = new QLabel(layoutWidget2);
        stud_info_label->setObjectName(QString::fromUtf8("stud_info_label"));
        stud_info_label->setFont(font2);
        stud_info_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(stud_info_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        fullNameSt_label = new QLabel(layoutWidget2);
        fullNameSt_label->setObjectName(QString::fromUtf8("fullNameSt_label"));
        fullNameSt_label->setFont(font2);
        fullNameSt_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(fullNameSt_label);

        date_of_birth_label = new QLabel(layoutWidget2);
        date_of_birth_label->setObjectName(QString::fromUtf8("date_of_birth_label"));
        date_of_birth_label->setFont(font2);
        date_of_birth_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(date_of_birth_label);

        class_label = new QLabel(layoutWidget2);
        class_label->setObjectName(QString::fromUtf8("class_label"));
        class_label->setFont(font2);
        class_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(class_label);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_full_name = new QLineEdit(layoutWidget2);
        lineEdit_full_name->setObjectName(QString::fromUtf8("lineEdit_full_name"));
        lineEdit_full_name->setFont(font2);
        lineEdit_full_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_full_name->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_full_name);

        lineEdit_dateOfBirth = new QLineEdit(layoutWidget2);
        lineEdit_dateOfBirth->setObjectName(QString::fromUtf8("lineEdit_dateOfBirth"));
        lineEdit_dateOfBirth->setFont(font2);
        lineEdit_dateOfBirth->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_dateOfBirth->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_dateOfBirth);

        lineEdit_class_num = new QLineEdit(layoutWidget2);
        lineEdit_class_num->setObjectName(QString::fromUtf8("lineEdit_class_num"));
        lineEdit_class_num->setFont(font2);
        lineEdit_class_num->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_class_num->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_class_num);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_6->addLayout(horizontalLayout);

        textEdit_avg_marks = new QTextEdit(student_info);
        textEdit_avg_marks->setObjectName(QString::fromUtf8("textEdit_avg_marks"));
        textEdit_avg_marks->setGeometry(QRect(350, 320, 61, 148));
        textEdit_avg_marks->setFont(font3);
        textEdit_avg_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_avg_marks->setReadOnly(true);
        avg_label = new QLabel(student_info);
        avg_label->setObjectName(QString::fromUtf8("avg_label"));
        avg_label->setGeometry(QRect(350, 300, 32, 16));
        avg_label->setFont(font2);
        avg_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        marks_label = new QLabel(student_info);
        marks_label->setObjectName(QString::fromUtf8("marks_label"));
        marks_label->setGeometry(QRect(61, 301, 51, 16));
        marks_label->setFont(font2);
        marks_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_marks = new QTextEdit(student_info);
        textEdit_marks->setObjectName(QString::fromUtf8("textEdit_marks"));
        textEdit_marks->setGeometry(QRect(60, 320, 281, 148));
        textEdit_marks->setFont(font3);
        textEdit_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_marks->setReadOnly(true);
        QWidget::setTabOrder(lineEdit_full_name, lineEdit_dateOfBirth);
        QWidget::setTabOrder(lineEdit_dateOfBirth, lineEdit_class_num);
        QWidget::setTabOrder(lineEdit_class_num, textEdit_comments);
        QWidget::setTabOrder(textEdit_comments, lineEdit_parents_fullname);
        QWidget::setTabOrder(lineEdit_parents_fullname, cancel_button);
        QWidget::setTabOrder(cancel_button, textEdit_marks);
        QWidget::setTabOrder(textEdit_marks, lineEdit_parents_phonenum);

        retranslateUi(student_info);

        QMetaObject::connectSlotsByName(student_info);
    } // setupUi

    void retranslateUi(QDialog *student_info)
    {
        student_info->setWindowTitle(QCoreApplication::translate("student_info", "Info about student", nullptr));
        cancel_button->setText(QCoreApplication::translate("student_info", "Cancel", nullptr));
        label_5->setText(QString());
        comments_label->setText(QCoreApplication::translate("student_info", "Comments", nullptr));
        parents_info_label->setText(QCoreApplication::translate("student_info", "Parents info", nullptr));
        parents_fullname_label->setText(QCoreApplication::translate("student_info", "Full name", nullptr));
        label_6->setText(QCoreApplication::translate("student_info", "Phone number     ", nullptr));
        stud_info_label->setText(QCoreApplication::translate("student_info", "Student info", nullptr));
        fullNameSt_label->setText(QCoreApplication::translate("student_info", "Student full name", nullptr));
        date_of_birth_label->setText(QCoreApplication::translate("student_info", "Date of birth", nullptr));
        class_label->setText(QCoreApplication::translate("student_info", "Class", nullptr));
        avg_label->setText(QCoreApplication::translate("student_info", "Avg.", nullptr));
        marks_label->setText(QCoreApplication::translate("student_info", "Marks", nullptr));
        textEdit_marks->setMarkdown(QString());
        textEdit_marks->setHtml(QCoreApplication::translate("student_info", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cambria'; font-size:10pt; font-weight:700; font-style:italic;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student_info: public Ui_student_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_INFO_H
