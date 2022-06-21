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

QT_BEGIN_NAMESPACE

class Ui_student_window
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit_avg_marks;
    QLabel *label_marks_2;
    QLabel *label_marks;
    QTextEdit *textEdit_marks;

    void setupUi(QDialog *student_window)
    {
        if (student_window->objectName().isEmpty())
            student_window->setObjectName(QString::fromUtf8("student_window"));
        student_window->resize(374, 296);
        student_window->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(16, 149, 148);\n"
""));
        pushButton = new QPushButton(student_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 240, 351, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        textEdit_avg_marks = new QTextEdit(student_window);
        textEdit_avg_marks->setObjectName(QString::fromUtf8("textEdit_avg_marks"));
        textEdit_avg_marks->setGeometry(QRect(310, 30, 41, 192));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria")});
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        textEdit_avg_marks->setFont(font1);
        textEdit_avg_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_avg_marks->setReadOnly(true);
        label_marks_2 = new QLabel(student_window);
        label_marks_2->setObjectName(QString::fromUtf8("label_marks_2"));
        label_marks_2->setGeometry(QRect(310, 10, 32, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cambria")});
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(true);
        label_marks_2->setFont(font2);
        label_marks_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_marks = new QLabel(student_window);
        label_marks->setObjectName(QString::fromUtf8("label_marks"));
        label_marks->setGeometry(QRect(11, 11, 51, 16));
        label_marks->setFont(font2);
        label_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_marks = new QTextEdit(student_window);
        textEdit_marks->setObjectName(QString::fromUtf8("textEdit_marks"));
        textEdit_marks->setGeometry(QRect(11, 30, 291, 192));
        textEdit_marks->setFont(font1);
        textEdit_marks->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textEdit_marks->setReadOnly(true);

        retranslateUi(student_window);

        QMetaObject::connectSlotsByName(student_window);
    } // setupUi

    void retranslateUi(QDialog *student_window)
    {
        student_window->setWindowTitle(QCoreApplication::translate("student_window", "Your current marks", nullptr));
        pushButton->setText(QCoreApplication::translate("student_window", "Exit", nullptr));
        label_marks_2->setText(QCoreApplication::translate("student_window", "Avg.", nullptr));
        label_marks->setText(QCoreApplication::translate("student_window", "Marks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student_window: public Ui_student_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_WINDOW_H
