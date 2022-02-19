#include "class_info.h"
#include "ui_class_info.h"
#include <check_class.h>
#include <QSqlTableModel >
#include <connection.h>

class_info::class_info(QWidget *parent, QString login) :
    QDialog(parent),
    ui(new Ui::class_info)
{
    ui->setupUi(this);

    QSqlQuery query;
    query.exec("SELECT * FROM teacher");
    while (query.next()) {
      QString full_name = query.value(0).toString();
      QString gender = query.value(1).toString();
      QString phon_num = query.value(4).toString();
      qDebug() << full_name << gender << phon_num;
    }


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


