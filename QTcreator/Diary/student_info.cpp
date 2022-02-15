#include "student_info.h"
#include "ui_student_info.h"
#include "check_student.h"

student_info::student_info(QWidget *parent, QString login) :
    QDialog(parent),
    ui(new Ui::student_info)
{
    ui->setupUi(this);
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

void student_info::on_cancel_buttom_clicked()
{
    hide();
    check_student student_window(this, getLogin());
    student_window.setModal(true);
    student_window.exec();
}

