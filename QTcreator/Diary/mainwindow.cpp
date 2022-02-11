#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
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


void MainWindow::on_auth_confirm_clicked()
{
    QString auth_login = ui -> auth_login -> text();
    QString auth_pass  = ui -> auth_pass  -> text();

    if(auth_login == "" && auth_pass == ""){
        QMessageBox::information(this, "Authorization", "Authorization confirmed");
    }else
        QMessageBox::warning(this, "Authorization", "Authorization denied");
}

