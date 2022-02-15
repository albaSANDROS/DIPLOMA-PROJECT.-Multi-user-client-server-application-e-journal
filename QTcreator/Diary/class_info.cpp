#include "class_info.h"
#include "ui_class_info.h"
#include <check_class.h>
class_info::class_info(QWidget *parent, QString login) :
    QDialog(parent),
    ui(new Ui::class_info)
{
    ui->setupUi(this);
    setLogin(login);
}

class_info::~class_info()
{
    delete ui;
}

const QString &class_info::getLogin() const
{
    return login;
}

void class_info::setLogin(const QString &newLogin)
{
    login = newLogin;
}

void class_info::on_cancel_buttom_clicked()
{
    hide();
    check_class class_window(this, getLogin());
    class_window.setModal(true);
    class_window.exec();
}


