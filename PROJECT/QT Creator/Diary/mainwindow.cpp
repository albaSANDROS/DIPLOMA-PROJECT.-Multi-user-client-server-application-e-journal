#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "diary_menu.h"
#include "parent_window.h"
#include "student_window.h"
#include "connection.h"
#include "authorization.h"

#include <QMessageBox>
#include <QTimer>
#include <QOAuth2AuthorizationCodeFlow>
#include <QDesktopServices>
#include <QThread>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog);
    setFixedSize(778, 312);

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
        exit(2);
    }

    authorization auth_window(nullptr);
    auth_window.setModal(true);
    auth_window.exec();

}

