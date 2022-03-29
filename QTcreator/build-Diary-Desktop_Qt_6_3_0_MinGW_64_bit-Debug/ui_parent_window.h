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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_studname;
    QLineEdit *lineEdit_studname;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_studclass;
    QLineEdit *lineEdit_studclass;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_marks;
    QTextEdit *textEdit_marks;
    QVBoxLayout *verticalLayout;
    QLabel *label_comments;
    QTextEdit *textEdit_comments;

    void setupUi(QDialog *parent_window)
    {
        if (parent_window->objectName().isEmpty())
            parent_window->setObjectName(QString::fromUtf8("parent_window"));
        parent_window->resize(494, 573);
        parent_window->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 136, 189);\n"
"selection-color: rgb(22, 34, 49);"));
        pushButton_info = new QPushButton(parent_window);
        pushButton_info->setObjectName(QString::fromUtf8("pushButton_info"));
        pushButton_info->setGeometry(QRect(50, 490, 221, 61));
        pushButton_info->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_cancel = new QPushButton(parent_window);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(310, 490, 121, 61));
        pushButton_cancel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(parent_window);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 391, 432));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_studname = new QLabel(layoutWidget);
        label_studname->setObjectName(QString::fromUtf8("label_studname"));
        label_studname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_studname);

        lineEdit_studname = new QLineEdit(layoutWidget);
        lineEdit_studname->setObjectName(QString::fromUtf8("lineEdit_studname"));
        lineEdit_studname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_studname->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_studname);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_studclass = new QLabel(layoutWidget);
        label_studclass->setObjectName(QString::fromUtf8("label_studclass"));
        label_studclass->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_studclass);

        lineEdit_studclass = new QLineEdit(layoutWidget);
        lineEdit_studclass->setObjectName(QString::fromUtf8("lineEdit_studclass"));
        lineEdit_studclass->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_studclass->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_studclass);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_marks = new QLabel(layoutWidget);
        label_marks->setObjectName(QString::fromUtf8("label_marks"));
        label_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_marks);

        textEdit_marks = new QTextEdit(layoutWidget);
        textEdit_marks->setObjectName(QString::fromUtf8("textEdit_marks"));
        textEdit_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_marks->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit_marks);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_comments = new QLabel(layoutWidget);
        label_comments->setObjectName(QString::fromUtf8("label_comments"));
        label_comments->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_comments);

        textEdit_comments = new QTextEdit(layoutWidget);
        textEdit_comments->setObjectName(QString::fromUtf8("textEdit_comments"));
        textEdit_comments->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_comments->setReadOnly(true);

        verticalLayout->addWidget(textEdit_comments);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(parent_window);

        QMetaObject::connectSlotsByName(parent_window);
    } // setupUi

    void retranslateUi(QDialog *parent_window)
    {
        parent_window->setWindowTitle(QCoreApplication::translate("parent_window", "Dialog", nullptr));
        pushButton_info->setText(QCoreApplication::translate("parent_window", "Contact informaiton", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("parent_window", "Exit", nullptr));
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
