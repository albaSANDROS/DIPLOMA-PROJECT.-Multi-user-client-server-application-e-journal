#include "diary_menu.h"
#include "ui_diary_menu.h"
#include "mainwindow.h"
#include <QDateTime>
#include <get_data.h>
#include <QMessageBox>
#include <QTimer>

diary_menu::diary_menu(QWidget *parent, QString auth_login) :
    QDialog(parent),
    ui(new Ui::diary_menu)
{

    ui->setupUi(this);

    //MainWindow m;
    qDebug() << auth_login;
    ui->label->setText(auth_login);

}

diary_menu::~diary_menu()
{
    delete ui;
}

void diary_menu::on_get_data_button_clicked()
{
    hide();
    get_data data_window;
    data_window.setModal(true);
    data_window.exec();
}


void diary_menu::on_exit_button_clicked()
{
    QApplication::quit();
}


void diary_menu::on_about_button_clicked()
{
     QMessageBox m;
     m.setText("This code created by Aliaksandr Basko");
     QTimer::singleShot(10000, &m, SLOT(close()));
     m.exec();
}

