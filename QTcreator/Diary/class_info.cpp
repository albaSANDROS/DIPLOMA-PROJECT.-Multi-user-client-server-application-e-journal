#include "class_info.h"
#include "ui_class_info.h"
#include <check_class.h>
#include <QSqlTableModel >
#include <connection.h>

class_info::class_info(QWidget *parent, QString login, QString class_letter, int class_num) :
    QDialog(parent),
    ui(new Ui::class_info)
{
    ui->setupUi(this);

    setClass_letter(class_letter);
    setClass_num(class_num);

    QString infoText = "All info about " + QString::number(getClass_num()) + " ' " + getClass_letter() + "'" + "class\n";
    ui->textBrowser->append(infoText);

    QString question_to_db;
    if (getClass_num() == 0 && getClass_letter() == ""){
        question_to_db="SELECT * FROM student";
    }
    else{
        QString get_gr_id_request;
        QString numb = QString::number(getClass_num());
        get_gr_id_request = "SELECT id from studying_group WHERE num = '" + numb + "' and profile = '" + getClass_letter() +"'";
        QString gr_id = "null";
        QSqlQuery query_getid;
        query_getid.exec(get_gr_id_request);
        while (query_getid.next()) {
          gr_id = query_getid.value(0).toString();
        }
        question_to_db="SELECT * FROM student WHERE studying_group_id = '" + gr_id + "'";
    }
    QSqlQuery query;
    query.exec(question_to_db);
    while (query.next()) {
      QString full_name = query.value(0).toString();
      QString gender = query.value(1).toString();
      QString birth_date = query.value(4).toString();
      ui->textBrowser->append(full_name);
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
const QString &class_info::getClass_letter() const
{
    return class_letter;
}

void class_info::setClass_letter(const QString &newClass_letter)
{
    class_letter = newClass_letter;
}

int class_info::getClass_num() const
{
    return class_num;
}

void class_info::setClass_num(int newClass_num)
{
    class_num = newClass_num;
}

void class_info::on_cancel_buttom_clicked()
{
    hide();
    check_class class_window(this, getLogin());
    class_window.setModal(true);
    class_window.exec();
}



