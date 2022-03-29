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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_check_class
{
public:
    QPushButton *find_button;
    QPushButton *cancel_button;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *class_num_label;
    QLineEdit *class_letter_label;

    void setupUi(QDialog *check_class)
    {
        if (check_class->objectName().isEmpty())
            check_class->setObjectName(QString::fromUtf8("check_class"));
        check_class->resize(482, 350);
        check_class->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 136, 189);\n"
"selection-color: rgb(22, 34, 49);"));
        find_button = new QPushButton(check_class);
        find_button->setObjectName(QString::fromUtf8("find_button"));
        find_button->setGeometry(QRect(40, 190, 411, 71));
        find_button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        cancel_button = new QPushButton(check_class);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
        cancel_button->setGeometry(QRect(40, 280, 411, 41));
        cancel_button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(check_class);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 10, 131, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(check_class);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 60, 411, 101));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        class_num_label = new QLineEdit(layoutWidget);
        class_num_label->setObjectName(QString::fromUtf8("class_num_label"));
        class_num_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        class_num_label->setMaxLength(2);

        verticalLayout->addWidget(class_num_label);

        class_letter_label = new QLineEdit(layoutWidget);
        class_letter_label->setObjectName(QString::fromUtf8("class_letter_label"));
        class_letter_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        class_letter_label->setMaxLength(1);

        verticalLayout->addWidget(class_letter_label);


        horizontalLayout->addLayout(verticalLayout);

        QWidget::setTabOrder(class_num_label, class_letter_label);
        QWidget::setTabOrder(class_letter_label, find_button);
        QWidget::setTabOrder(find_button, cancel_button);

        retranslateUi(check_class);

        QMetaObject::connectSlotsByName(check_class);
    } // setupUi

    void retranslateUi(QDialog *check_class)
    {
        check_class->setWindowTitle(QCoreApplication::translate("check_class", "Dialog", nullptr));
        find_button->setText(QCoreApplication::translate("check_class", "Find", nullptr));
        cancel_button->setText(QCoreApplication::translate("check_class", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("check_class", "Please, input class info", nullptr));
        label_2->setText(QCoreApplication::translate("check_class", "Class number", nullptr));
        label_3->setText(QCoreApplication::translate("check_class", "Class letter", nullptr));
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
