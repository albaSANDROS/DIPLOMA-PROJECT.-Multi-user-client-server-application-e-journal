/********************************************************************************
** Form generated from reading UI file 'parent_window.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARENT_WINDOW_H
#define UI_PARENT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_parent_window
{
public:
    QPushButton *pushButton_info;
    QPushButton *pushButton_cancel;
    QTextEdit *textEdit_avg_marks;
    QLabel *label_marks_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_studname;
    QLineEdit *lineEdit_studname;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_studclass;
    QLineEdit *lineEdit_studclass;
    QLabel *label_marks;
    QTextEdit *textEdit_marks;
    QTextEdit *textEdit_comments;
    QLabel *label_comments;

    void setupUi(QDialog *parent_window)
    {
        if (parent_window->objectName().isEmpty())
            parent_window->setObjectName(QString::fromUtf8("parent_window"));
        parent_window->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(16, 149, 148);\n"
""));
        pushButton_info = new QPushButton(parent_window);
        pushButton_info->setObjectName(QString::fromUtf8("pushButton_info"));
        pushButton_info->setGeometry(QRect(20, 500, 271, 61));
        pushButton_info->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        pushButton_cancel = new QPushButton(parent_window);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(340, 500, 121, 61));
        pushButton_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        textEdit_avg_marks = new QTextEdit(parent_window);
        textEdit_avg_marks->setObjectName(QString::fromUtf8("textEdit_avg_marks"));
        textEdit_avg_marks->setGeometry(QRect(420, 310, 41, 151));
        textEdit_avg_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_avg_marks->setReadOnly(true);
        label_marks_2 = new QLabel(parent_window);
        label_marks_2->setObjectName(QString::fromUtf8("label_marks_2"));
        label_marks_2->setGeometry(QRect(410, 290, 32, 16));
        label_marks_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(parent_window);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 13, 451, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_studname = new QLabel(layoutWidget);
        label_studname->setObjectName(QString::fromUtf8("label_studname"));
        label_studname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_studname);

        lineEdit_studname = new QLineEdit(layoutWidget);
        lineEdit_studname->setObjectName(QString::fromUtf8("lineEdit_studname"));
        lineEdit_studname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_studname->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_studname);

        layoutWidget1 = new QWidget(parent_window);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 50, 451, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_studclass = new QLabel(layoutWidget1);
        label_studclass->setObjectName(QString::fromUtf8("label_studclass"));
        label_studclass->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_studclass);

        lineEdit_studclass = new QLineEdit(layoutWidget1);
        lineEdit_studclass->setObjectName(QString::fromUtf8("lineEdit_studclass"));
        lineEdit_studclass->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_studclass->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_studclass);

        label_marks = new QLabel(parent_window);
        label_marks->setObjectName(QString::fromUtf8("label_marks"));
        label_marks->setGeometry(QRect(20, 290, 32, 16));
        label_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_marks = new QTextEdit(parent_window);
        textEdit_marks->setObjectName(QString::fromUtf8("textEdit_marks"));
        textEdit_marks->setGeometry(QRect(20, 310, 381, 151));
        textEdit_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_marks->setReadOnly(true);
        textEdit_comments = new QTextEdit(parent_window);
        textEdit_comments->setObjectName(QString::fromUtf8("textEdit_comments"));
        textEdit_comments->setGeometry(QRect(20, 120, 441, 161));
        textEdit_comments->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_comments->setReadOnly(true);
        label_comments = new QLabel(parent_window);
        label_comments->setObjectName(QString::fromUtf8("label_comments"));
        label_comments->setGeometry(QRect(10, 90, 71, 31));
        label_comments->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(parent_window);

        QMetaObject::connectSlotsByName(parent_window);
    } // setupUi

    void retranslateUi(QDialog *parent_window)
    {
        parent_window->setWindowTitle(QCoreApplication::translate("parent_window", "Dialog", nullptr));
        pushButton_info->setText(QCoreApplication::translate("parent_window", "Contact informaiton", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("parent_window", "Exit", nullptr));
        label_marks_2->setText(QCoreApplication::translate("parent_window", "Avg.", nullptr));
        label_studname->setText(QCoreApplication::translate("parent_window", "Student name", nullptr));
        label_studclass->setText(QCoreApplication::translate("parent_window", "Student class  ", nullptr));
        label_marks->setText(QCoreApplication::translate("parent_window", "Marks", nullptr));
        label_comments->setText(QCoreApplication::translate("parent_window", "Comments", nullptr));
    } // retranslateUi

};

namespace Ui {
    class parent_window: public Ui_parent_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARENT_WINDOW_H
