#include "add_mark_2.h"
#include "ui_add_mark_2.h"
#include "add_mark.h"

add_mark_2::add_mark_2(QWidget *parent, QString login, QString student_name) :
    QDialog(parent),
    ui(new Ui::add_mark_2)
{
    setLogin(login);
    ui->setupUi(this);
    ui->label->setText(getLogin());
    ui->lineEdit_full_name->setText(student_name);
}

add_mark_2::~add_mark_2()
{
    delete ui;
}

const QString &add_mark_2::getLogin() const
{
    return login;
}

void add_mark_2::setLogin(const QString &newLogin)
{
    login = newLogin;
}

const QString &add_mark_2::getName() const
{
    return name;
}

void add_mark_2::setName(const QString &newName)
{
    name = newName;
}



void add_mark_2::on_pushButton_2_clicked()
{
    hide();
    add_mark mark_window(this, getLogin());
    mark_window.setModal(true);
    mark_window.exec();
}

