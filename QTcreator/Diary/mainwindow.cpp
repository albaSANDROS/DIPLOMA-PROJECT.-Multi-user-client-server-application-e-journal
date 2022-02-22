#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <diary_menu.h>
#include <QTimer>
#include <QDebug>

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

void MainWindow::on_auth_confirm_clicked()
{
    MainWindow mw;
    mw.setAuth_login(ui -> auth_login -> text());
    mw.auth_pass  = ui -> auth_pass  -> text();

    if(!(mw.getAuth_login() == "a" && mw.auth_pass == "")){
        QMessageBox::warning(this, "Authorization", "Access denied");

    }else{
        QString named;
        named=mw.getAuth_login();
        QMessageBox m;
        m.setText("Authorization confirmed");
        QTimer::singleShot(950, &m, SLOT(close()));
        m.exec();
        close();
        diary_menu menu_window(this ,named);
        menu_window.setModal(true);
        menu_window.exec();
    }
}






