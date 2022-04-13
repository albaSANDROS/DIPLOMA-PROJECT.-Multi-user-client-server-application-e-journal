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

    setWindowFlags(Qt::Dialog);
    setFixedSize(778, 422);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_authorize_button_clicked()
{
    close();
    message.setText("Now you will be redirected to YANDEX authorization form. You need to confirm yourself there. After successful connection "
              "you will get validation code. Put it in the next window of application. This code not contain your personal data or other. "
              "This is just your identification number in our application. Don`t send this code for another persons!");
    QTimer::singleShot(18000, &message, SLOT(close()));
    message.exec();


    if(!createConnection("auth_user","pgsecret"))
    {
        exit(2);    //https://docs.microsoft.com/ru-ru/sql/relational-databases/errors-events/database-engine-events-and-errors?view=sql-server-ver15
    }

    authorization auth_window(this);
    auth_window.setModal(true);
    auth_window.exec();

}

