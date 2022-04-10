#include "parent_window.h"
#include "ui_parent_window.h"
#include <QSqlQuery>
#include "mainwindow.h"
#include <QMessageBox>
#include <QTimer>

parent_window::parent_window(QWidget *parent, QString login) :
    QDialog(parent),
    ui(new Ui::parent_window)
{
    setFull_name_parent(login);
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog);
    setFixedSize(494, 573);

    question_to_db = "select id from stud_parent WHERE full_name_parent = '" + getFull_name_parent() + "'";
    query.exec(question_to_db);
    while (query.next()) {
      parent_id = query.value(0).toString();
    }
    //asking for students data
    question_to_db = "select full_name_st, studying_group_id, id from student where stud_parent_id = '" + parent_id + "'";
    query.exec(question_to_db);
    while (query.next()) {
      full_name_st = query.value(0).toString();
      studying_group_id = query.value(1).toString();
      student_id = query.value(2).toString();
    }

    question_to_db = "select num, profile from studying_group where id = '" + studying_group_id + "'";
    query.exec(question_to_db);
    while (query.next()) {
      gr_num = query.value(0).toString();    //10
      gr_prof= query.value(1).toString();    //A
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

    //avg marks
    question_to_db = "select avg(mark), sub_name from subject "
                     "join condition c on subject.id = c.subject_id "
                     "join lesson_status ls on c.lesson_status_id = ls.id "
                     "join mark_id mi on ls.id = mi.lesson_status_id "
                     "join student s on mi.student_id = s.id "
                     "where mi.student_id = '" + student_id + "' "
                     "group by sub_name";

    query.exec(question_to_db);
    while(query.next()){
      marks = query.value(0).toString();
      ui->textEdit_avg_marks->append(marks);
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

    ui->lineEdit_studname->setText(full_name_st);
    ui->lineEdit_studclass->setText(gr_num + " " + gr_prof);

}

parent_window::~parent_window()
{
    delete ui;
}

const QString &parent_window::getFull_name_parent() const
{
    return full_name_parent;
}

void parent_window::setFull_name_parent(const QString &newFull_name_parent)
{
    full_name_parent = newFull_name_parent;
}


void parent_window::on_pushButton_cancel_clicked()
{
    QApplication::quit();
}


void parent_window::on_pushButton_info_clicked()
{
    close();
    QMessageBox m;
    m.setText("Contact adress: Minsk, Jukovskogo st, place 13\nContact phone: 8 017 222-10-10");
    QTimer::singleShot(10000, &m, SLOT(close()));
    m.exec();
    close();
    parent_window parent_window(this, getFull_name_parent());
    parent_window.setModal(true);
    parent_window.exec();
}

