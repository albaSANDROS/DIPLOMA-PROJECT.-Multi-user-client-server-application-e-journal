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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_parent_window
{
public:
    QPushButton *pushButton_info;
    QPushButton *pushButton_cancel;
    QTextEdit *textEdit_avg_marks;
    QLabel *label_marks_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_studname;
    QLineEdit *lineEdit_studname;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_studclass;
    QLineEdit *lineEdit_studclass;
    QWidget *widget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_comments;
    QTextEdit *textEdit_comments;
    QLabel *label_marks;
    QTextEdit *textEdit_marks;

    void setupUi(QDialog *parent_window)
    {
        if (parent_window->objectName().isEmpty())
            parent_window->setObjectName(QString::fromUtf8("parent_window"));
        parent_window->resize(494, 573);
        parent_window->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(16, 149, 148);\n"
""));
        pushButton_info = new QPushButton(parent_window);
        pushButton_info->setObjectName(QString::fromUtf8("pushButton_info"));
        pushButton_info->setGeometry(QRect(50, 490, 221, 61));
        pushButton_info->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        pushButton_cancel = new QPushButton(parent_window);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(310, 490, 121, 61));
        pushButton_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        textEdit_avg_marks = new QTextEdit(parent_window);
        textEdit_avg_marks->setObjectName(QString::fromUtf8("textEdit_avg_marks"));
        textEdit_avg_marks->setGeometry(QRect(400, 110, 41, 157));
        textEdit_avg_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_avg_marks->setReadOnly(true);
        label_marks_2 = new QLabel(parent_window);
        label_marks_2->setObjectName(QString::fromUtf8("label_marks_2"));
        label_marks_2->setGeometry(QRect(400, 90, 32, 16));
        label_marks_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        widget = new QWidget(parent_window);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_studname = new QLabel(widget);
        label_studname->setObjectName(QString::fromUtf8("label_studname"));
        label_studname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_studname);

        lineEdit_studname = new QLineEdit(widget);
        lineEdit_studname->setObjectName(QString::fromUtf8("lineEdit_studname"));
        lineEdit_studname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_studname->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_studname);

        widget1 = new QWidget(parent_window);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_studclass = new QLabel(widget1);
        label_studclass->setObjectName(QString::fromUtf8("label_studclass"));
        label_studclass->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_studclass);

        lineEdit_studclass = new QLineEdit(widget1);
        lineEdit_studclass->setObjectName(QString::fromUtf8("lineEdit_studclass"));
        lineEdit_studclass->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_studclass->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_studclass);

        widget2 = new QWidget(parent_window);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_comments = new QLabel(widget2);
        label_comments->setObjectName(QString::fromUtf8("label_comments"));
        label_comments->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_comments);

        textEdit_comments = new QTextEdit(widget2);
        textEdit_comments->setObjectName(QString::fromUtf8("textEdit_comments"));
        textEdit_comments->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_comments->setReadOnly(true);

        verticalLayout->addWidget(textEdit_comments);

        label_marks = new QLabel(parent_window);
        label_marks->setObjectName(QString::fromUtf8("label_marks"));
        label_marks->setGeometry(QRect(53, 93, 32, 16));
        label_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_marks = new QTextEdit(parent_window);
        textEdit_marks->setObjectName(QString::fromUtf8("textEdit_marks"));
        textEdit_marks->setGeometry(QRect(53, 110, 341, 157));
        textEdit_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_marks->setReadOnly(true);

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
        label_comments->setText(QCoreApplication::translate("parent_window", "Comments", nullptr));
        label_marks->setText(QCoreApplication::translate("parent_window", "Marks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class parent_window: public Ui_parent_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARENT_WINDOW_H
