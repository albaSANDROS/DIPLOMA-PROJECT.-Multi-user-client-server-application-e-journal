#include "authorization.h"
#include "ui_authorization.h"
#include <diary_menu.h>
#include <parent_window.h>
#include <student_window.h>
#include <QMessageBox>

authorization::authorization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::authorization)
{
    ui->setupUi(this);


}

const QString &authorization::getToken() const
{
    return token;
}

void authorization::setToken(const QString &newToken)
{
    token = newToken;
}

authorization::~authorization()
{
    delete ui;
}

void authorization::on_accept_button_clicked()
{
    setToken(ui -> token_lineEdit -> text());
    question_to_db = "select user_id, role_id from users where token = '" + getToken() +"'";
    query.exec(question_to_db);
    if (!query.next()) {
        QMessageBox::warning(this, "Student Full Name", "This user is not presented");
    }
    else {
      close();
      user_id = query.value(0).toString();
      user_role = query.value(1).toString();
    }
    //select full_name_parent from stud_parent where id = '
    qDebug() << "Token: " << getToken();
    role_num = user_role.toInt();
    qDebug() << "role_num: " << getToken();
    if(role_num == 1){
        question_to_db = "select  full_name_t from teacher where id = '" + user_id + "'";
        query.exec(question_to_db);
        while (query.next()) {
          full_name_teacher = query.value(0).toString();
        }
        diary_menu menu_window(this, full_name_teacher);
        menu_window.setModal(true);
        menu_window.exec();
    }

    else if (role_num == 2){
        question_to_db = "select  full_name_parent from stud_parent where id = '" + user_id + "'";
        query.exec(question_to_db);
        while (query.next()) {
          full_name_parent = query.value(0).toString();
        }
        parent_window parent_window(this, full_name_parent);
        parent_window.setModal(true);
        parent_window.exec();
    }

    else if (role_num == 3){
        question_to_db = "select  full_name_st from student where id = '" + user_id + "'";
        query.exec(question_to_db);
        while (query.next()) {
          full_name_student = query.value(0).toString();
        }
        student_window student_window(this, full_name_student);
        student_window.setModal(true);
        student_window.exec();
    }


}

