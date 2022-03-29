#include "class_info.h"
#include "ui_class_info.h"
#include <check_class.h>
#include <QSqlTableModel>
#include <connection.h>

class_info::class_info(QWidget *parent, QString login, QString class_letter, int class_num) :
    QDialog(parent),
    ui(new Ui::class_info)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog);
    setFixedSize(426, 366);

    setClass_letter(class_letter);
    setClass_num(class_num);

    //configuring info message
    if (getClass_num() == 0 && getClass_letter() == ""){
        infoText = "Info about all students";
    }else{
        infoText = "All info about " + QString::number(getClass_num()) + " '" + getClass_letter() + "'" + "class";
    }
    ui->textEdit->append(infoText);

    //get info about all classes or not
    if (getClass_num() == 0 && getClass_letter() == ""){
        question_to_db="SELECT * FROM student";
    }
    else{

        QString numb = QString::number(getClass_num());
        get_gr_id_request = "SELECT id from studying_group WHERE num = '" + numb + "' and profile = '" + getClass_letter() +"'";
        query_getid.exec(get_gr_id_request);
        while (query_getid.next()) {
          gr_id = query_getid.value(0).toString();
        }
        question_to_db="SELECT * FROM student WHERE studying_group_id = '" + gr_id + "'";
    }

    query.exec(question_to_db);
    while (query.next()) {

    //getting data from db
    full_name = query.value(0).toString();
    studying_group_id = query.value(3).toString();
    birth_date = query.value(4).toString();
    stud_parent_id = query.value(5).toString();

    //getting data about parents from db
    question_to_db_par = "select full_name_parent, phone_numb_parent from  stud_parent where id = '" + stud_parent_id + "'";
    query_parents.exec(question_to_db_par);
    while (query_parents.next()) {
      full_name_parent = query_parents.value(0).toString();
      phone_numb_parent= query_parents.value(1).toString();
    }

    //info about class numb
    if(getClass_num() == 0 && getClass_letter() == ""){
        class_question = "select num, profile from studying_group where id = '" + studying_group_id + "'";
        query_class_num.exec(class_question);
        while (query_class_num.next()) {
          gr_num = query_class_num.value(0).toString();
          gr_prof= query_class_num.value(1).toString();
        }
        infoText = "\n=================================\n"
               "\nFull name: " + full_name +
               "\nBirth data: " + birth_date +
               "\nGroup number: " + gr_num + " '" + gr_prof + "' " +
               "\nParent full name: " + full_name_parent +
               "\nParent phone number: " + phone_numb_parent;
    }else{
         infoText = "\n=================================\n"
                "\nFull name: " + full_name +
                "\nBirth data: " + birth_date +
                "\nParent full name: " + full_name_parent +
                "\nParent phone number: " + phone_numb_parent;

         }
    ui->textEdit->append(infoText);
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
    close();
    check_class class_window(this, getLogin());
    class_window.setModal(true);
    class_window.exec();
}



