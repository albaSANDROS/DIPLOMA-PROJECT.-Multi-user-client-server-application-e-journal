#include "student_info.h"
#include "ui_student_info.h"
#include "check_student.h"

student_info::student_info(QWidget *parent, QString login, QString full_name_st) :
    QDialog(parent),
    ui(new Ui::student_info)
{
    ui->setupUi(this);
    setFull_name_st(full_name_st);
    setLogin(login);
}

student_info::~student_info()
{
    delete ui;
}

const QString &student_info::getLogin() const
{
    return login;
}

void student_info::setLogin(const QString &newLogin)
{
    login = newLogin;
}

const QString &student_info::getFull_name_st() const
{
    return full_name_st;
}

void student_info::setFull_name_st(const QString &newFull_name_st)
{
    full_name_st = newFull_name_st;
}

void student_info::on_cancel_buttom_clicked()
{
    hide();
    check_student student_window(this, getLogin());
    student_window.setModal(true);
    student_window.exec();
}


