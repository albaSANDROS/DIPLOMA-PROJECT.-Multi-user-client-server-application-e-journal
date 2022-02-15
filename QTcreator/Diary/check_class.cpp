#include "check_class.h"
#include "ui_check_class.h"
#include <get_data.h>
#include <class_info.h>

check_class::check_class(QWidget *parent, QString login) :
    QDialog(parent),
    ui(new Ui::check_class)
{
    ui->setupUi(this);
    setLogin(login);
}

check_class::~check_class()
{
    delete ui;
}

const QString &check_class::getLogin() const
{
    return login;
}

void check_class::setLogin(const QString &newLogin)
{
    login = newLogin;
}

void check_class::on_cancel_button_clicked()
{
    hide();
    get_data menu_window(this, getLogin());
    menu_window.setModal(true);
    menu_window.exec();
}


void check_class::on_find_button_clicked()
{
    hide();
    class_info class_window;
    class_window.setModal(true);
    class_window.exec();
}

