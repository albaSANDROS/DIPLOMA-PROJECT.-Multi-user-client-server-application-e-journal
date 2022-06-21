/********************************************************************************
** Form generated from reading UI file 'check_class.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_CLASS_H
#define UI_CHECK_CLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_check_class
{
public:
    QPushButton *find_button;
    QPushButton *cancel_button;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *class_num_label;
    QLineEdit *class_letter_label;

    void setupUi(QDialog *check_class)
    {
        if (check_class->objectName().isEmpty())
            check_class->setObjectName(QString::fromUtf8("check_class"));
        check_class->resize(482, 350);
        check_class->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(16, 149, 148);\n"
"\n"
""));
        find_button = new QPushButton(check_class);
        find_button->setObjectName(QString::fromUtf8("find_button"));
        find_button->setGeometry(QRect(40, 190, 411, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria")});
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        find_button->setFont(font);
        find_button->setCursor(QCursor(Qt::OpenHandCursor));
        find_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        cancel_button = new QPushButton(check_class);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
        cancel_button->setGeometry(QRect(40, 280, 411, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria")});
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        cancel_button->setFont(font1);
        cancel_button->setCursor(QCursor(Qt::OpenHandCursor));
        cancel_button->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 35, 35);\n"
"background-color: rgb(9, 83, 82);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(check_class);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 181, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cambria")});
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setItalic(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(check_class);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 130, 101, 18));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(check_class);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(42, 80, 111, 18));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        class_num_label = new QLineEdit(check_class);
        class_num_label->setObjectName(QString::fromUtf8("class_num_label"));
        class_num_label->setGeometry(QRect(153, 72, 291, 31));
        class_num_label->setFont(font2);
        class_num_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        class_num_label->setMaxLength(2);
        class_letter_label = new QLineEdit(check_class);
        class_letter_label->setObjectName(QString::fromUtf8("class_letter_label"));
        class_letter_label->setGeometry(QRect(153, 120, 291, 31));
        class_letter_label->setFont(font2);
        class_letter_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        class_letter_label->setMaxLength(1);
        QWidget::setTabOrder(class_num_label, class_letter_label);
        QWidget::setTabOrder(class_letter_label, find_button);
        QWidget::setTabOrder(find_button, cancel_button);

        retranslateUi(check_class);

        QMetaObject::connectSlotsByName(check_class);
    } // setupUi

    void retranslateUi(QDialog *check_class)
    {
        check_class->setWindowTitle(QCoreApplication::translate("check_class", "Choose class", nullptr));
        find_button->setText(QCoreApplication::translate("check_class", "Find", nullptr));
        cancel_button->setText(QCoreApplication::translate("check_class", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("check_class", "Please, input class info", nullptr));
        label_3->setText(QCoreApplication::translate("check_class", "Class letter", nullptr));
        label_2->setText(QCoreApplication::translate("check_class", "Class number", nullptr));
        class_num_label->setPlaceholderText(QCoreApplication::translate("check_class", "For example - 10", nullptr));
        class_letter_label->setText(QString());
        class_letter_label->setPlaceholderText(QCoreApplication::translate("check_class", "For example - A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class check_class: public Ui_check_class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_CLASS_H
