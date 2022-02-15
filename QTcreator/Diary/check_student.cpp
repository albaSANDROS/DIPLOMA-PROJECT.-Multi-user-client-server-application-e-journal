#include "check_student.h"
#include "ui_check_student.h"
#include <get_data.h>
#include "student_info.h"

check_student::check_student(QWidget *parent, QString login) :
    QDialog(parent),
    ui(new Ui::check_student)
{
    ui->setupUi(this);
    setLogin(login);
}

check_student::~check_student()
{
    delete ui;
}

const QString &check_student::getLogin() const
{
    return login;
}

void check_student::setLogin(const QString &newLogin)
{
    login = newLogin;
}

void check_student::on_cancel_button_clicked()
{
    hide();
    get_data menu_window(this, getLogin());
    menu_window.setModal(true);
    menu_window.exec();
}


void check_student::on_find_button_clicked()
{
    hide();
    student_info student_window(this, getLogin());
    student_window.setModal(true);
    student_window.exec();
}

