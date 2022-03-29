#include "check_student.h"
#include "ui_check_student.h"
#include <get_data.h>
#include "student_info.h"
#include <QMessageBox>
check_student::check_student(QWidget *parent, QString login) :
    QDialog(parent),
    ui(new Ui::check_student)
{
    ui->setupUi(this);
    setLogin(login);

    setWindowFlags(Qt::Dialog);
    setFixedSize(428, 312);

}

check_student::~check_student()
{
    delete ui;
}

const QString &check_student::getLogin() const
{
    return login;
}

void check_student::setLogin(const QString &newLogin)
{
    login = newLogin;
}

const QString &check_student::getFull_name_st() const
{
    return full_name_st;
}

void check_student::setFull_name_st(const QString &newFull_name_st)
{
    full_name_st = newFull_name_st;
}


void check_student::on_cancel_button_clicked()
{
    close();
    get_data menu_window(this, getLogin());
    menu_window.setModal(true);
    menu_window.exec();
}


void check_student::on_find_button_clicked()
{
    setFull_name_st(ui->student_full_name->text());
    if (getFull_name_st() != ""){
        question_to_db = "select id from student where full_name_st = '" + getFull_name_st() + "'";
        query.exec(question_to_db);
        if (!query.next()) {
            QMessageBox::warning(this, "Student Full Name", "This student is not presented in DataBases");
        }else{
        close();
        student_info student_window(this, getLogin(), getFull_name_st());
        student_window.setModal(true);
        student_window.exec();
        }
    }
    else{
        QMessageBox::warning(this, "Checking student info", "You need to input full name of student!");
    }
}

