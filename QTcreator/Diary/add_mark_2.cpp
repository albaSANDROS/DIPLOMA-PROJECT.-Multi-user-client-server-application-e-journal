#include "add_mark_2.h"
#include "ui_add_mark_2.h"
#include "add_mark.h"
#include <QMessageBox>
#include "diary_menu.h"

add_mark_2::add_mark_2(QWidget *parent, QString login, QString student_name) :
    QDialog(parent),
    ui(new Ui::add_mark_2)
{
    setLogin(login);
    ui->setupUi(this);
    ui->label->setText(getLogin());
    setStudent_name(student_name);
    ui->lineEdit_full_name->setText(student_name);
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
    hide();
    add_mark mark_window(this, getLogin());
    mark_window.setModal(true);
    mark_window.exec();
}


void add_mark_2::on_pushButton_evaluate_clicked()
{
    QString subject = ui->comboBox_subject ->currentText();
    QString sub_id;
    QString student_id;
    QString mark = ui->comboBox_mark ->currentText();;
    QString lessonID;
    int lessonID_int;
    QString commentID;
    int commentID_int;
    QString lessonStatus = "yes";
    QString comment;

    if(subject == "<none>"){
            QMessageBox::warning(this, "Mark Error", "Please, choose one of presented subjects");
    }
    else if(mark == "<none>"){
        QMessageBox::warning(this, "Mark Error", "Please, choose one of presented marks");
    }
    else{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Are you sure?", "Are you sure, that you wanna do this?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {

    //getting id of subject
    question_to_db = "select id from subject where sub_name = '" + subject + "'";
    query.exec(question_to_db);
    if (!query.next()){
        QMessageBox::warning(this, "Subject Error", "Please, choose one of presented subjects");
    }else{
        sub_id = query.value(0).toString();
    }

    //getting student id from his name
    question_to_db = "select id from student where full_name_st = '" + getStudent_name() + "'";
    query.exec(question_to_db);
    query.next();
    student_id = query.value(0).toString();

    //checking, did this student can study this subject
    question_to_db = "select * from studying where student_id = '" + student_id + "' and subject_id = '" + sub_id + "'";
    query.exec(question_to_db);

    //checking for exercise problems (did we can continue)
    if (!query.next()){
        QMessageBox::warning(this, "Subject Error", "This student don`t study this subject");
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
            hide();
            add_mark mark_window(this, getLogin());
            mark_window.setModal(true);
            mark_window.exec();
        } else {
            hide();
            diary_menu menu_window(this, getLogin());
            menu_window.setModal(true);
            menu_window.exec();
        }
    }


    } else {}

    }

}
