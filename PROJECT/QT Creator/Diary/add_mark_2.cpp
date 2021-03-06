#include "add_mark.h"
#include "add_mark_2.h"
#include "ui_add_mark_2.h"
#include "diary_menu.h"
#include "connection.h"

#include <QMessageBox>

add_mark_2::add_mark_2(QWidget *parent, QString login, QString student_name) :
    QDialog(parent),
    ui(new Ui::add_mark_2)
{
    setLogin(login);
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog);
    setFixedSize(663, 442);

    if(!checkConnection())
    {
        exit(2);
    }

    ui->label->setText("Welcome back, " + getLogin());
    setStudent_name(student_name);
    ui->lineEdit_full_name->setText(student_name);

    //getting subject name
    question_to_db = "select subject_id from teacher where full_name_t = '" + getLogin() + "'";
    query.exec(question_to_db);
    if (!query.next()){
        QMessageBox::warning(this, "Subject Error", "You not teacher for this subject");
    }else{
        sub_id = query.value(0).toString();
    }
    question_to_db = "select sub_name from subject where id = '" + sub_id + "'";
    query.exec(question_to_db);
    if (!query.next()){
        QMessageBox::warning(this, "Subject Error", "Please, choose one of presented subjects");
    }else{
        subject = query.value(0).toString();
    }

    ui->lineEdit_subjectName->setText(subject);
}

add_mark_2::~add_mark_2()
{
    delete ui;
}

const QString &add_mark_2::getLogin() const
{
    return login;
}

void add_mark_2::setLogin(const QString &newLogin)
{
    login = newLogin;
}

const QString &add_mark_2::getStudent_name() const
{
    return student_name;
}

void add_mark_2::setStudent_name(const QString &newStudent_name)
{
    student_name = newStudent_name;
}


void add_mark_2::on_pushButton_cancel_clicked()
{
    close();
    add_mark mark_window(this, getLogin());
    mark_window.setModal(true);
    mark_window.exec();
}

void add_mark_2::on_pushButton_evaluate_clicked()
{
    int lessonID_int;
    int commentID_int;

    //mark2 and mark changed. maybe problems///

    mark = ui -> lineEdit_mark -> text();

    int mark_toCheck = 0;
    mark_toCheck = mark.toInt(0 ,10);

    if (mark_toCheck > 10 || mark_toCheck <= 0){
        QMessageBox::warning(this, "Mark error", "You can put only integer marks in range: 1..10");
    }else{

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Are you sure?", "Are you sure, that you wanna do this?",
                                    QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {

        //getting student id from his name
        question_to_db = "select id from student where full_name_st = '" + getStudent_name() + "'";
        query.exec(question_to_db);
        query.next();
        student_id = query.value(0).toString();

        //did user can place marks for this subject
        question_to_db = "select * from studying where subject_id = '" + sub_id + "' and student_id = '" + student_id + "'";
        query.exec(question_to_db);
        query.next();
        QString student_id_check = query.value(0).toString();

        if (student_id_check != student_id){
            QMessageBox::warning(this, "Subject error", "This student not studying this subject");
        }
        else{
            //getting last id  of lesson_status
            question_to_db = "select id from lesson_status ORDER BY id DESC LIMIT 1";
            query.exec(question_to_db);
            query.next();

            //moves from string to int to get ID num+1 and going back to strings for easy questions to db
            lessonID = query.value(0).toString();
            lessonID_int = lessonID.toInt();
            lessonID_int= lessonID_int + 1;
            lessonID = QString::number(lessonID_int);

            question_to_db = "INSERT INTO lesson_status VALUES ('" + mark + "', '" + lessonID + "', '" + lessonStatus + "')";
            query.exec(question_to_db);
            question_to_db = "INSERT INTO mark_id VALUES ('" + student_id + "', '" + lessonID + "')";
            query.exec(question_to_db);
            question_to_db = "INSERT INTO condition VALUES ('" + lessonID + "', '" + sub_id + "')";
            query.exec(question_to_db);

            //inserting comments
            comment=ui->lineEdit_comment->text();
            if (comment != ""){
                question_to_db = "select id from notes ORDER BY id DESC LIMIT 1";
                query.exec(question_to_db);
                query.next();

                //moves from string to int to get ID num+1 and going back to strings for easy questions to db
                commentID = query.value(0).toString();
                commentID_int = commentID.toInt();
                commentID_int= commentID_int + 1;
                commentID = QString::number(commentID_int);

                question_to_db = "INSERT INTO notes VALUES ('" + comment + "', '" + commentID + "')";
                query.exec(question_to_db);


                question_to_db = "INSERT INTO student_note VALUES ('" + student_id + "', '" + commentID + "')";
                query.exec(question_to_db);

            }

            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "Are you sure?", "Data saved. Do you want to add more marks?",
                                            QMessageBox::Yes|QMessageBox::No);
                if (reply == QMessageBox::Yes) {
                    close();
                    add_mark mark_window(nullptr, getLogin());
                    mark_window.setModal(true);
                    mark_window.exec();
                } else {
                    close();
                    diary_menu menu_window(nullptr, getLogin());
                    menu_window.setModal(true);
                    menu_window.exec();
                }

            }

        } else {}
    }
}



