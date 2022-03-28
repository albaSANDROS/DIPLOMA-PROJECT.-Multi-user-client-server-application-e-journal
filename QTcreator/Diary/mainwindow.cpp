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

