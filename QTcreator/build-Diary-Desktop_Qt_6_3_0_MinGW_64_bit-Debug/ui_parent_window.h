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
    QWidget *widget;
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
        parent_window->resize(413, 417);
        pushButton_info = new QPushButton(parent_window);
        pushButton_info->setObjectName(QString::fromUtf8("pushButton_info"));
        pushButton_info->setGeometry(QRect(10, 373, 151, 31));
        pushButton_cancel = new QPushButton(parent_window);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(284, 373, 111, 31));
        widget = new QWidget(parent_window);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 391, 331));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_studname = new QLabel(widget);
        label_studname->setObjectName(QString::fromUtf8("label_studname"));

        horizontalLayout->addWidget(label_studname);

        lineEdit_studname = new QLineEdit(widget);
        lineEdit_studname->setObjectName(QString::fromUtf8("lineEdit_studname"));
        lineEdit_studname->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_studname);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_studclass = new QLabel(widget);
        label_studclass->setObjectName(QString::fromUtf8("label_studclass"));

        horizontalLayout_2->addWidget(label_studclass);

        lineEdit_studclass = new QLineEdit(widget);
        lineEdit_studclass->setObjectName(QString::fromUtf8("lineEdit_studclass"));
        lineEdit_studclass->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_studclass);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_marks = new QLabel(widget);
        label_marks->setObjectName(QString::fromUtf8("label_marks"));

        verticalLayout_2->addWidget(label_marks);

        textEdit_marks = new QTextEdit(widget);
        textEdit_marks->setObjectName(QString::fromUtf8("textEdit_marks"));
        textEdit_marks->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit_marks);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_comments = new QLabel(widget);
        label_comments->setObjectName(QString::fromUtf8("label_comments"));

        verticalLayout->addWidget(label_comments);

        textEdit_comments = new QTextEdit(widget);
        textEdit_comments->setObjectName(QString::fromUtf8("textEdit_comments"));
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
