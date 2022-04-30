#include "check_class.h"
#include "ui_check_class.h"
#include <get_data.h>
#include <class_info.h>
#include <QMessageBox>
#include <QSqlQuery>
#include <QProcess>
#include "connection.h"

check_class::check_class(QWidget *parent, QString login) :
    QDialog(parent),
    ui(new Ui::check_class)
{
    ui->setupUi(this);
    setLogin(login);

    setWindowFlags(Qt::Dialog);
    setFixedSize(482, 350);

    if(!checkConnection())
    {
        exit(2);
    }


}

check_class::~check_class()
{
    delete ui;
}

const QString &check_class::getLogin() const
{
    return login;
}

void check_class::setLogin(const QString &newLogin)
{
    login = newLogin;
}

const QString &check_class::getClass_letter() const
{
    return class_letter;
}

void check_class::setClass_letter(const QString &newClass_letter)
{
    class_letter = newClass_letter;
}

int check_class::getClass_num() const
{
    return class_num;
}

void check_class::setClass_num(int newClass_num)
{
    class_num = newClass_num;
}

void check_class::on_cancel_button_clicked()
{
    close();
    get_data menu_window(nullptr, getLogin());
    menu_window.setModal(true);
    menu_window.exec();
}


void check_class::on_find_button_clicked()
{

   checkConnection();

    setClass_letter(ui->class_letter_label->text().toUpper());
    QString STRING_NUM = "null";
    int INT_NUM = 0;

    STRING_NUM = ui->class_num_label->text();
    INT_NUM = STRING_NUM.toInt();
    setClass_num(INT_NUM);

    if(getClass_letter() == "" && getClass_num() == 0){

        close();
        class_info class_window(nullptr, getLogin(), getClass_letter(), getClass_num());
        class_window.setModal(true);
        class_window.exec();
    }
    else{

        if(getClass_letter() == ""){

            QMessageBox::warning(this, "Checking class info", "You need to input class letter");
        }
        else if(getClass_num() == 0){

            QMessageBox::warning(this, "Checking class info", "You need to input class number");
        }
        else if (getClass_num() < 0 || getClass_num() > 11){

            QMessageBox::warning(this, "Checking class info", "Check class number. It must be in range 0..11");
        }
        else{
            question_to_db = "select id from studying_group where num = '" + QString::number(getClass_num()) + "' and profile = '" + getClass_letter() +"'";
            query.exec(question_to_db);
            if (!query.next()){
                QMessageBox::warning(this, "Checking class info", "This class is not presented in DataBase");
            }else{

                if (( (getClass_letter() != "" && getClass_num() > 0 && getClass_num() < 12)) ){
                    close();
                    class_info class_window(nullptr, getLogin(), getClass_letter(), getClass_num());
                    class_window.setModal(true);
                    class_window.exec();
                }


                }
        }
    }
}
