#include "student_window.h"
#include "ui_student_window.h"

student_window::student_window(QWidget *parent, QString full_name_st) :
    QDialog(parent),
    ui(new Ui::student_window)
{
    setFull_name_st(full_name_st);
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog);
    setFixedSize(374, 296);

    //getting student_id
    question_to_db = "select id from student where full_name_st='" + getFull_name_st() + "'";
    query.exec(question_to_db);
    while (query.next()) {
      student_id = query.value(0).toString();
    }
    //getting marks
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

}

student_window::~student_window()
{
    delete ui;
}

const QString &student_window::getFull_name_st() const
{
    return full_name_st;
}

void student_window::setFull_name_st(const QString &newFull_name_st)
{
    full_name_st = newFull_name_st;
}

void student_window::on_pushButton_clicked()
{
    QApplication::quit();
}

