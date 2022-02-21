#include "student_info.h"
#include "ui_student_info.h"
#include "check_student.h"


student_info::student_info(QWidget *parent, QString login, QString full_name_st) :
    QDialog(parent),
    ui(new Ui::student_info)
{
    ui->setupUi(this);
    setFull_name_st(full_name_st);

    question_to_db = "select * from student WHERE full_name_st = '" + getFull_name_st() + "'";
    query.exec(question_to_db);
    while (query.next()) {
      full_name = query.value(0).toString();
      gender = query.value(1).toString();
      studying_group_id = query.value(3).toString();
      birth_date =  query.value(4).toString();
      stud_parent_id = query.value(5).toString();
    }

    //converting id into num (id=1 -> 10A)
    get_class_num = "select num, profile from studying_group where id = '" + studying_group_id + "'";
    query_getnum.exec(get_class_num);
    while (query_getnum.next()) {
      gr_num = query_getnum.value(0).toString();    //10
      gr_prof= query_getnum.value(1).toString();    //A
    }

    //getting info about parents

    get_parents_info = "select full_name_parent, phone_numb_parent from  stud_parent where id = '" + stud_parent_id + "'";
    query_getparents.exec(get_parents_info);
    while (query_getparents.next()) {
      full_name_parent = query_getparents.value(0).toString();    //name
      phone_numb_parent= query_getparents.value(1).toString();    //ph_num
    }

    //output info
    ui->lineEdit_full_name->insert(full_name);
    ui->lineEdit_dateOfBirth->insert(birth_date);
    ui->lineEdit_class_num->insert(gr_num + " " + gr_prof);
    ui->lineEdit_parents_fullname->insert(full_name_parent);
    ui->lineEdit_parents_phonenum->insert(phone_numb_parent);

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


