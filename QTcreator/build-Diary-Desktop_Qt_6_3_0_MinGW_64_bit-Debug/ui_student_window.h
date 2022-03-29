/********************************************************************************
** Form generated from reading UI file 'student_window.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_WINDOW_H
#define UI_STUDENT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student_window
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_marks;
    QTextEdit *textEdit_marks;

    void setupUi(QDialog *student_window)
    {
        if (student_window->objectName().isEmpty())
            student_window->setObjectName(QString::fromUtf8("student_window"));
        student_window->resize(374, 296);
        student_window->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 136, 189);\n"
"selection-color: rgb(22, 34, 49);"));
        pushButton = new QPushButton(student_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 240, 351, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(student_window);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 351, 216));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_marks = new QLabel(layoutWidget);
        label_marks->setObjectName(QString::fromUtf8("label_marks"));
        label_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_marks);

        textEdit_marks = new QTextEdit(layoutWidget);
        textEdit_marks->setObjectName(QString::fromUtf8("textEdit_marks"));
        textEdit_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_marks->setReadOnly(true);

        verticalLayout->addWidget(textEdit_marks);


        retranslateUi(student_window);

        QMetaObject::connectSlotsByName(student_window);
    } // setupUi

    void retranslateUi(QDialog *student_window)
    {
        student_window->setWindowTitle(QCoreApplication::translate("student_window", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("student_window", "Exit", nullptr));
        label_marks->setText(QCoreApplication::translate("student_window", "Marks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student_window: public Ui_student_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_WINDOW_H
