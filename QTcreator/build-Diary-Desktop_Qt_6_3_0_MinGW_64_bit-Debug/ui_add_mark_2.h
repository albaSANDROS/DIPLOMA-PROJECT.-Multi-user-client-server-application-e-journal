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
#include <QtWidgets/QComboBox>
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
    QPushButton *pushButton_evaluate;
    QPushButton *pushButton_cancel;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_students_fullname;
    QLabel *label_subject;
    QLabel *label_mark;
    QLabel *label_comments;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_full_name;
    QComboBox *comboBox_subject;
    QComboBox *comboBox_mark;
    QLineEdit *lineEdit_comment;

    void setupUi(QDialog *add_mark_2)
    {
        if (add_mark_2->objectName().isEmpty())
            add_mark_2->setObjectName(QString::fromUtf8("add_mark_2"));
        add_mark_2->resize(400, 300);
        pushButton_evaluate = new QPushButton(add_mark_2);
        pushButton_evaluate->setObjectName(QString::fromUtf8("pushButton_evaluate"));
        pushButton_evaluate->setGeometry(QRect(20, 210, 131, 71));
        pushButton_cancel = new QPushButton(add_mark_2);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(240, 210, 131, 71));
        label = new QLabel(add_mark_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 10, 101, 16));
        layoutWidget = new QWidget(add_mark_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 351, 141));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_students_fullname = new QLabel(layoutWidget);
        label_students_fullname->setObjectName(QString::fromUtf8("label_students_fullname"));

        verticalLayout_2->addWidget(label_students_fullname);

        label_subject = new QLabel(layoutWidget);
        label_subject->setObjectName(QString::fromUtf8("label_subject"));

        verticalLayout_2->addWidget(label_subject);

        label_mark = new QLabel(layoutWidget);
        label_mark->setObjectName(QString::fromUtf8("label_mark"));

        verticalLayout_2->addWidget(label_mark);

        label_comments = new QLabel(layoutWidget);
        label_comments->setObjectName(QString::fromUtf8("label_comments"));

        verticalLayout_2->addWidget(label_comments);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_full_name = new QLineEdit(layoutWidget);
        lineEdit_full_name->setObjectName(QString::fromUtf8("lineEdit_full_name"));
        lineEdit_full_name->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_full_name);

        comboBox_subject = new QComboBox(layoutWidget);
        comboBox_subject->addItem(QString());
        comboBox_subject->addItem(QString());
        comboBox_subject->addItem(QString());
        comboBox_subject->setObjectName(QString::fromUtf8("comboBox_subject"));

        verticalLayout->addWidget(comboBox_subject);

        comboBox_mark = new QComboBox(layoutWidget);
        comboBox_mark->addItem(QString());
        comboBox_mark->addItem(QString());
        comboBox_mark->addItem(QString());
        comboBox_mark->addItem(QString());
        comboBox_mark->addItem(QString());
        comboBox_mark->addItem(QString());
        comboBox_mark->addItem(QString());
        comboBox_mark->addItem(QString());
        comboBox_mark->addItem(QString());
        comboBox_mark->addItem(QString());
        comboBox_mark->addItem(QString());
        comboBox_mark->setObjectName(QString::fromUtf8("comboBox_mark"));

        verticalLayout->addWidget(comboBox_mark);

        lineEdit_comment = new QLineEdit(layoutWidget);
        lineEdit_comment->setObjectName(QString::fromUtf8("lineEdit_comment"));

        verticalLayout->addWidget(lineEdit_comment);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(add_mark_2);

        QMetaObject::connectSlotsByName(add_mark_2);
    } // setupUi

    void retranslateUi(QDialog *add_mark_2)
    {
        add_mark_2->setWindowTitle(QCoreApplication::translate("add_mark_2", "Dialog", nullptr));
        pushButton_evaluate->setText(QCoreApplication::translate("add_mark_2", "Evaluate a student", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("add_mark_2", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("add_mark_2", "login", nullptr));
        label_students_fullname->setText(QCoreApplication::translate("add_mark_2", "Student`s full name", nullptr));
        label_subject->setText(QCoreApplication::translate("add_mark_2", "Subject", nullptr));
        label_mark->setText(QCoreApplication::translate("add_mark_2", "Mark", nullptr));
        label_comments->setText(QCoreApplication::translate("add_mark_2", "Comments", nullptr));
        comboBox_subject->setItemText(0, QCoreApplication::translate("add_mark_2", "<none>", nullptr));
        comboBox_subject->setItemText(1, QCoreApplication::translate("add_mark_2", "Information Technologies", nullptr));
        comboBox_subject->setItemText(2, QCoreApplication::translate("add_mark_2", "Math", nullptr));

        comboBox_subject->setPlaceholderText(QCoreApplication::translate("add_mark_2", "Choose subject", nullptr));
        comboBox_mark->setItemText(0, QCoreApplication::translate("add_mark_2", "<none>", nullptr));
        comboBox_mark->setItemText(1, QCoreApplication::translate("add_mark_2", "1", nullptr));
        comboBox_mark->setItemText(2, QCoreApplication::translate("add_mark_2", "2", nullptr));
        comboBox_mark->setItemText(3, QCoreApplication::translate("add_mark_2", "3", nullptr));
        comboBox_mark->setItemText(4, QCoreApplication::translate("add_mark_2", "4", nullptr));
        comboBox_mark->setItemText(5, QCoreApplication::translate("add_mark_2", "5", nullptr));
        comboBox_mark->setItemText(6, QCoreApplication::translate("add_mark_2", "6", nullptr));
        comboBox_mark->setItemText(7, QCoreApplication::translate("add_mark_2", "7", nullptr));
        comboBox_mark->setItemText(8, QCoreApplication::translate("add_mark_2", "8", nullptr));
        comboBox_mark->setItemText(9, QCoreApplication::translate("add_mark_2", "9", nullptr));
        comboBox_mark->setItemText(10, QCoreApplication::translate("add_mark_2", "10", nullptr));

        comboBox_mark->setPlaceholderText(QCoreApplication::translate("add_mark_2", "Choose mark", nullptr));
        lineEdit_comment->setPlaceholderText(QCoreApplication::translate("add_mark_2", "comments (optional)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_mark_2: public Ui_add_mark_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MARK_2_H