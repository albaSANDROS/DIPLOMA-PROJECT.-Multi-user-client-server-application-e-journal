#include "add_mark.h"
#include "ui_add_mark.h"
#include "diary_menu.h"
#include "add_mark_2.h"
#include "QMessageBox"

add_mark::add_mark(QWidget *parent, QString login) :
    QDialog(parent),
    ui(new Ui::add_mark)
{
    setLogin(login);
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog);
    setFixedSize(498, 332);

    ui->label->setText("Welcome back, "+getLogin());
}

const QString &add_mark::getLogin() const
{
    return login;
}

void add_mark::setLogin(const QString &newLogin)
{
    login = newLogin;
}

add_mark::~add_mark()
{
    delete ui;
}

const QString &add_mark::getStudent_fullname() const
{
    return student_fullname;
}

void add_mark::setStudent_fullname(const QString &newStudent_fullname)
{
    student_fullname = newStudent_fullname;
}

void add_mark::on_back_pushButton_clicked()
{
    close();
    diary_menu menu_window(this, getLogin());
    menu_window.setModal(true);
    menu_window.exec();
}


void add_mark::on_next_pushButton_clicked()
{
    setStudent_fullname(ui->student_fullname->text());
    question_to_db = "select id from student where full_name_st = '" + getStudent_fullname() + "'";
    query.exec(question_to_db);
    if (!query.next()) {



        QMessageBox::warning(this, "Student Full Name", "This student is not presented in DataBases");
    }
    else{
        close();
        add_mark_2 mark2_window(this, getLogin(), getStudent_fullname());
        mark2_window.setModal(true);
        mark2_window.exec();
        }
}

