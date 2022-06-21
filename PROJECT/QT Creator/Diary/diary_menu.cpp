#include "diary_menu.h"
#include "ui_diary_menu.h"
#include "mainwindow.h"
#include <QDateTime>
#include "get_data.h"
#include "add_mark.h"
#include "connection.h"

#include <QMessageBox>
#include <QTimer>

const QString &diary_menu::getLogin() const
{
return login;
}

void diary_menu::setLogin(const QString &newLogin)
{
    login = newLogin;
}

diary_menu::diary_menu(QWidget *parent, QString auth_login) :
    QDialog(parent),
    ui(new Ui::diary_menu)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog);
    setFixedSize(545, 445);

    setLogin(auth_login);

    if(!checkConnection())
    {
        exit(2);
    }

    ui->label->setText("Welcome back, " + auth_login);
}

diary_menu::~diary_menu()
{
    delete ui;
}

void diary_menu::on_get_data_button_clicked()
{
    close();
    get_data data_window(nullptr, getLogin());
    data_window.setModal(true);
    data_window.exec();
}


void diary_menu::on_exit_button_clicked()
{
    QApplication::quit();
}


void diary_menu::on_contact_info_button_clicked()
{
    close();
    QMessageBox m;
    m.setText("<a href=\"https://www.linkedin.com/in/albasandros\">To get support or contact with creator "
              "you may press this hyperlink</a>");
    QTimer::singleShot(10000, &m, SLOT(close()));
    m.exec();
    close();
    diary_menu menu_window(nullptr , getLogin());
    menu_window.setModal(true);
    menu_window.exec();
}


void diary_menu::on_start_lesson_button_clicked()
{
    close();
    add_mark mark_window(nullptr, getLogin());
    mark_window.setModal(true);
    mark_window.exec();
}

