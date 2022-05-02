#include "authorization.h"
#include "ui_authorization.h"
#include "diary_menu.h"
#include "parent_window.h"
#include "student_window.h"
#include "connection.h"
#include <QMessageBox>
#include <QOAuth2AuthorizationCodeFlow>
#include <QDesktopServices>
#include <QCryptographicHash>

authorization::authorization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::authorization)
{
    ui->setupUi(this);

    show();

    QDesktopServices::openUrl(QUrl("https://oauth.yandex.ru/authorize?response_type=token&client_id=cff690b59de94c6dbc0e42f9a0c28721"));
    setWindowFlags(Qt::Dialog);
    setFixedSize(358, 258);

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

const QByteArray &authorization::getToken_toUtf8() const
{
    return token_toUtf8;
}

void authorization::setToken_toUtf8(const QByteArray &newToken_toUtf8)
{
    token_toUtf8 = newToken_toUtf8;
}

void authorization::on_accept_button_clicked()
{

    setToken(ui -> token_lineEdit -> text());

    setToken_toUtf8(getToken().toUtf8());

    setToken(QCryptographicHash::hash(getToken_toUtf8(), QCryptographicHash::Sha256).toHex());

    question_to_db = "select user_id, role_id from users where token = '" + getToken() +"'";
    query.exec(question_to_db);
    if (!query.next()) {
        QMessageBox::warning(nullptr
                             , "Authorization", "This user is not presented in DataBase");
    }
    else {
      close();
      user_id = query.value(0).toString();
      role_num = query.value(1).toInt();
    }

    if(role_num == 1){
        question_to_db = "select  full_name_t from teacher where id = '" + user_id + "'";
        query.exec(question_to_db);
        while (query.next()) {
          full_name = query.value(0).toString();
        }

        if(!createConnection("teacher","teacherDBpassword"))
        {
            exit(2);
        }

        diary_menu menu_window(nullptr, full_name);
        menu_window.setModal(true);
        menu_window.exec();
    }

    else if (role_num == 2){
        question_to_db = "select  full_name_parent from stud_parent where id = '" + user_id + "'";
        query.exec(question_to_db);
        while (query.next()) {
          full_name = query.value(0).toString();
        }
        parent_window parent_window(nullptr, full_name);
        parent_window.setModal(true);
        parent_window.exec();
    }

    else if (role_num == 3){
        question_to_db = "select  full_name_st from student where id = '" + user_id + "'";
        query.exec(question_to_db);
        while (query.next()) {
          full_name = query.value(0).toString();
        }
        student_window student_window(nullptr, full_name);
        student_window.setModal(true);
        student_window.exec();
    }

}
