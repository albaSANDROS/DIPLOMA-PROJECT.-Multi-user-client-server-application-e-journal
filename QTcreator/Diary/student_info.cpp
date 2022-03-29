#include "student_info.h"
#include "ui_student_info.h"
#include "check_student.h"


student_info::student_info(QWidget *parent, QString login, QString full_name_st) :
    QDialog(parent),
    ui(new Ui::student_info)
{
    ui->setupUi(this);
    setFull_name_st(full_name_st);

    setWindowFlags(Qt::Dialog);
    setFixedSize(459, 834);

    question_to_db = "select * from student WHERE full_name_st = '" + getFull_name_st() + "'";
    query.exec(question_to_db);
    while (query.next()) {
      full_name = query.value(0).toString();
      gender = query.value(1).toString();
      student_id = query.value(2).toString();
      studying_group_id = query.value(3).toString();
      birth_date =  query.value(4).toString();
      stud_parent_id = query.value(5).toString();
    }

    //converting id into num (id=1 -> 10A)
    question_to_db = "select num, profile from studying_group where id = '" + studying_group_id + "'";
    query.exec(question_to_db);
    while (query.next()) {
      gr_num = query.value(0).toString();    //10
      gr_prof= query.value(1).toString();    //A
    }

    //getting info about parents
    question_to_db = "select full_name_parent, phone_numb_parent from  stud_parent where id = '" + stud_parent_id + "'";
    query.exec(question_to_db);
    while (query.next()) {
      full_name_parent = query.value(0).toString();    //name
      phone_numb_parent= query.value(1).toString();    //ph_num
    }

    //getting mark
    question_to_db = "select string_agg(mark::text, ',' order by mark::text asc) as mark , sub_name from subject "
                        "join condition c on subject.id = c.subject_id "
                        "join lesson_status ls on c.lesson_status_id = ls.id "
                        "join mark_id mi on ls.id = mi.lesson_status_id "
                        "join student s on mi.student_id = s.id "      
                        "where mi.student_id = '" + student_id + "' "
                        "group by sub_name ";
    query.exec(question_to_db);
    while (query.next()) {
      marks = query.value(0).toString();
      subject = query.value(1).toString();
      ui->textEdit_marks->append(subject + ": " + marks);
    }


    //getting notes
    question_to_db = "select notes_id from student_note where student_id = '" + student_id + "'";
    query.exec(question_to_db);    
    while (query.next()) {
      note_id = query.value(0).toString();
      //select note from notes where id = '2'
            QString notesQuestionFinal;
            notesQuestionFinal = "select note from notes where id = '" + note_id + "'";
            query_getnotes_full.exec(notesQuestionFinal);
            QString note;
            while (query_getnotes_full.next()){
                note = query_getnotes_full.value(0).toString();
                ui->textEdit_comments->append(note);
            }
      //ui->textEdit_comments->append(note_id);
    }
    //output info
    ui->lineEdit_full_name->insert(full_name);
    ui->lineEdit_dateOfBirth->insert(birth_date);
    ui->lineEdit_class_num->insert(gr_num + " " + gr_prof);
    ui->lineEdit_parents_fullname->insert(full_name_parent);
    ui->lineEdit_parents_phonenum->insert(phone_numb_parent);

    setLogin(login);
}

student_info::~student_info()
{
    delete ui;
}

const QString &student_info::getLogin() const
{
    return login;
}

void student_info::setLogin(const QString &newLogin)
{
    login = newLogin;
}

const QString &student_info::getFull_name_st() const
{
    return full_name_st;
}

void student_info::setFull_name_st(const QString &newFull_name_st)
{
    full_name_st = newFull_name_st;
}

void student_info::on_cancel_buttom_clicked()
{
    close();
    check_student student_window(this, getLogin());
    student_window.setModal(true);
    student_window.exec();
}


