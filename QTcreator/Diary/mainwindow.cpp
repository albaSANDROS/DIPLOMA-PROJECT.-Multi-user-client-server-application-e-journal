#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <diary_menu.h>
#include <QTimer>


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

    auth_login = ui -> auth_login -> text();
    auth_pass  = ui -> auth_pass  -> text();

    if(!(auth_login == "" && auth_pass == "")){
        QMessageBox::warning(this, "Authorization", "Access denied");

    }else{
        QMessageBox m;
        m.setText("Authorization confirmed");
        QTimer::singleShot(950, &m, SLOT(close()));
        m.exec();
        hide();
        diary_menu menu_window;
        menu_window.setModal(true);
        menu_window.exec();
    }
}
