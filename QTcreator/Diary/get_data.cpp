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

const QString &get_data::getPassword() const
{
    return password;
}

void get_data::setPassword(const QString &newPassword)
{
    password = newPassword;
}

void get_data::on_get_back_button_clicked()
{
    hide();
    diary_menu menu_window(this, getLogin());
    menu_window.setModal(true);
    menu_window.exec();
}


void get_data::on_students_info_button_clicked()
{
    hide();
    check_student student_window;
    student_window.setModal(true);
    student_window.exec();
}


void get_data::on_classes_info_button_clicked()
{
    hide();
    check_class class_window;
    class_window.setModal(true);
    class_window.exec();
}


