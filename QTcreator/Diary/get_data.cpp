#include "get_data.h"
#include "ui_get_data.h"
#include <diary_menu.h>
#include <check_class.h>
#include <check_student.h>

get_data::get_data(QWidget *parent, QString login) :
    QDialog(parent),
    ui(new Ui::get_data)
{
    setLogin(login);
    ui->setupUi(this);
    ui->label->setText(login);
}

get_data::~get_data()
{
    delete ui;
}

const QString &get_data::getLogin() const
{
    return login;
}

void get_data::setLogin(const QString &newLogin)
{
    login = newLogin;
}

void get_data::on_get_back_button_clicked()
{
    close();
    diary_menu menu_window(this, getLogin());
    menu_window.setModal(true);
    menu_window.exec();
}


void get_data::on_students_info_button_clicked()
{
    close();
    check_student student_window(this, getLogin());
    student_window.setModal(true);
    student_window.exec();
}


void get_data::on_classes_info_button_clicked()
{
    close();
    check_class class_window(this, getLogin());
    class_window.setModal(true);
    class_window.exec();
}


