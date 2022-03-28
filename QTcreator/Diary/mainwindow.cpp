#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <diary_menu.h>
#include <QTimer>
#include "parent_window.h"
#include "student_window.h"
#include <QOAuth2AuthorizationCodeFlow>
#include <QDesktopServices>
#include <QThread>
#include <connection.h>
#include <authorization.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

const QString &MainWindow::getAuth_login() const
{
    return auth_login;
}

void MainWindow::setAuth_login(const QString &newAuth_login)
{
    auth_login = newAuth_login;
}

const QString &MainWindow::getAuth_pass() const
{
    return auth_pass;
}

void MainWindow::setAuth_pass(const QString &newAuth_pass)
{
    auth_pass = newAuth_pass;
}

//void MainWindow::on_auth_confirm_clicked()
//{
//    MainWindow mw;
//    mw.setAuth_login(ui -> auth_login -> text());
//    mw.auth_pass  = ui -> auth_pass  -> text();
//
//    QString role = ui->comboBox_role ->currentText();
//    if (role == "Teacher"){
//        question_to_db = "select password from teacher where full_name_t = '" + mw.getAuth_login() + "'";
//    }
//    else if (role == "Parent"){
//        question_to_db = "select password from stud_parent where full_name_parent = '" + mw.getAuth_login() + "'";
//    }
//    else if (role == "Student"){
//        question_to_db = "select password from student where full_name_st = '" + mw.getAuth_login() + "'";
//    }
//
//    mw.query.exec(question_to_db);
//    while (mw.query.next()) {
//      password = mw.query.value(0).toString();
//    }
//    if (role == "<none>"){
//        QMessageBox::warning(this, "Authorization", "You need to choose role");
//    }
//    if (mw.auth_pass == ""){
//        QMessageBox::warning(this, "Authorization", "Access denied");
//    }
//    else if((mw.auth_pass != password)){
//        QMessageBox::warning(this, "Authorization", "Access denied");
//
//    }else{
//        QString named;
//        named=mw.getAuth_login();
//        QMessageBox m;
//        m.setText("Authorization confirmed");
//        QTimer::singleShot(950, &m, SLOT(close()));
//        m.exec();
//        mw.auth_pass = "null";
//        password = "null";
//        close();
//
//
//        //get role to choose window
//        if (role == "Teacher"){
//            diary_menu menu_window(this, named);
//            menu_window.setModal(true);
//            menu_window.exec();
//        }
//        else if (role == "Parent"){
//            parent_window parent_window(this, named);
//            parent_window.setModal(true);
//            parent_window.exec();
//        }
//        else if (role == "Student"){
//            student_window student_window(this, named);
//            student_window.setModal(true);
//            student_window.exec();
//        }
//    }
//}







void MainWindow::on_authorize_button_clicked()
{
    close();
    QMessageBox m;
    m.setText("How to authorize!");
    QTimer::singleShot(1550, &m, SLOT(close()));
    m.exec();

    QDesktopServices::openUrl(QUrl("https://oauth.yandex.ru/authorize?response_type=token&client_id=cff690b59de94c6dbc0e42f9a0c28721"));


    if(!createConnection())
    {
        exit(2);    //https://docs.microsoft.com/ru-ru/sql/relational-databases/errors-events/database-engine-events-and-errors?view=sql-server-ver15
    }


    authorization auth_window(this);
    auth_window.setModal(true);
    auth_window.exec();

}

