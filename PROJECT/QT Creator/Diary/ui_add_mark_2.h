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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_add_mark_2
{
public:
    QPushButton *pushButton_evaluate;
    QPushButton *pushButton_cancel;
    QLabel *label;
    QLabel *label_mark;
    QLabel *label_students_fullname;
    QLabel *label_subject;
    QLabel *label_comments;
    QLineEdit *lineEdit_full_name;
    QLineEdit *lineEdit_comment;
    QLineEdit *lineEdit_subjectName;
    QLineEdit *lineEdit_mark;

    void setupUi(QDialog *add_mark_2)
    {
        if (add_mark_2->objectName().isEmpty())
            add_mark_2->setObjectName(QString::fromUtf8("add_mark_2"));
        add_mark_2->resize(663, 442);
        add_mark_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(16, 149, 148);\n"
"\n"
"color: rgb(255, 255, 255);"));
        pushButton_evaluate = new QPushButton(add_mark_2);
        pushButton_evaluate->setObjectName(QString::fromUtf8("pushButton_evaluate"));
        pushButton_evaluate->setGeometry(QRect(30, 320, 351, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        pushButton_evaluate->setFont(font);
        pushButton_evaluate->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_evaluate->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        pushButton_cancel = new QPushButton(add_mark_2);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(420, 320, 191, 101));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria")});
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        pushButton_cancel->setFont(font1);
        pushButton_cancel->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(add_mark_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 581, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cambria")});
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_mark = new QLabel(add_mark_2);
        label_mark->setObjectName(QString::fromUtf8("label_mark"));
        label_mark->setGeometry(QRect(32, 160, 51, 16));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cambria")});
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setItalic(true);
        label_mark->setFont(font3);
        label_mark->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_students_fullname = new QLabel(add_mark_2);
        label_students_fullname->setObjectName(QString::fromUtf8("label_students_fullname"));
        label_students_fullname->setGeometry(QRect(32, 80, 131, 16));
        label_students_fullname->setFont(font3);
        label_students_fullname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_subject = new QLabel(add_mark_2);
        label_subject->setObjectName(QString::fromUtf8("label_subject"));
        label_subject->setGeometry(QRect(32, 120, 61, 16));
        label_subject->setFont(font3);
        label_subject->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_comments = new QLabel(add_mark_2);
        label_comments->setObjectName(QString::fromUtf8("label_comments"));
        label_comments->setGeometry(QRect(30, 220, 81, 16));
        label_comments->setFont(font3);
        label_comments->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_full_name = new QLineEdit(add_mark_2);
        lineEdit_full_name->setObjectName(QString::fromUtf8("lineEdit_full_name"));
        lineEdit_full_name->setGeometry(QRect(122, 80, 491, 22));
        lineEdit_full_name->setFont(font3);
        lineEdit_full_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_full_name->setReadOnly(true);
        lineEdit_comment = new QLineEdit(add_mark_2);
        lineEdit_comment->setObjectName(QString::fromUtf8("lineEdit_comment"));
        lineEdit_comment->setGeometry(QRect(122, 201, 491, 61));
        lineEdit_comment->setFont(font3);
        lineEdit_comment->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_subjectName = new QLineEdit(add_mark_2);
        lineEdit_subjectName->setObjectName(QString::fromUtf8("lineEdit_subjectName"));
        lineEdit_subjectName->setGeometry(QRect(122, 120, 491, 22));
        lineEdit_subjectName->setFont(font3);
        lineEdit_subjectName->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_subjectName->setReadOnly(true);
        lineEdit_mark = new QLineEdit(add_mark_2);
        lineEdit_mark->setObjectName(QString::fromUtf8("lineEdit_mark"));
        lineEdit_mark->setGeometry(QRect(122, 160, 491, 22));
        lineEdit_mark->setFont(font3);
        lineEdit_mark->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QWidget::setTabOrder(lineEdit_mark, lineEdit_comment);
        QWidget::setTabOrder(lineEdit_comment, pushButton_evaluate);
        QWidget::setTabOrder(pushButton_evaluate, pushButton_cancel);
        QWidget::setTabOrder(pushButton_cancel, lineEdit_subjectName);
        QWidget::setTabOrder(lineEdit_subjectName, lineEdit_full_name);

        retranslateUi(add_mark_2);

        QMetaObject::connectSlotsByName(add_mark_2);
    } // setupUi

    void retranslateUi(QDialog *add_mark_2)
    {
        add_mark_2->setWindowTitle(QCoreApplication::translate("add_mark_2", "Placing mark..", nullptr));
        pushButton_evaluate->setText(QCoreApplication::translate("add_mark_2", "Evaluate a student", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("add_mark_2", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("add_mark_2", "login", nullptr));
        label_mark->setText(QCoreApplication::translate("add_mark_2", "Mark", nullptr));
        label_students_fullname->setText(QCoreApplication::translate("add_mark_2", "Full name", nullptr));
        label_subject->setText(QCoreApplication::translate("add_mark_2", "Subject", nullptr));
        label_comments->setText(QCoreApplication::translate("add_mark_2", "Comments", nullptr));
        lineEdit_comment->setPlaceholderText(QCoreApplication::translate("add_mark_2", "comments (optional)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_mark_2: public Ui_add_mark_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MARK_2_H
