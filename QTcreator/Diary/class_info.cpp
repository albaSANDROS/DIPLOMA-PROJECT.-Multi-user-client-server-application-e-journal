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
    qDebug() << "Class letter  "<< getClass_letter();
    qDebug() <<  "Class numbe  "<< getClass_num();
    QString question_to_db;

        QString get_gr_id;
        QString numb = QString::number(getClass_num());
        get_gr_id = "SELECT id from studying_group WHERE num = '" + numb + "' and profile = '" + getClass_letter() +"'";
        qDebug() << get_gr_id;
         QString gr_id = "null";
        QSqlQuery query_getid;
        query_getid.exec(get_gr_id);
        while (query_getid.next()) {
          gr_id = query_getid.value(0).toString();
        }


        question_to_db="SELECT * FROM student WHERE studying_group_id = '" + gr_id + "'";

    qDebug() << question_to_db;
    QSqlQuery query;
    query.exec(question_to_db);
    while (query.next()) {
      QString full_name = query.value(0).toString();
      QString gender = query.value(1).toString();
      QString birth_date = query.value(4).toString();
      ui->textBrowser->append(full_name);
      qDebug() << full_name << gender << birth_date;
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



