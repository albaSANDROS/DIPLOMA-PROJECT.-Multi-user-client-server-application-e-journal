#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class student_info;
}

class student_info : public QDialog
{
    Q_OBJECT

public:
    explicit student_info(QWidget *parent = nullptr, QString login = "login", QString full_name_st = "none");
    ~student_info();

    const QString &getLogin() const;
    void setLogin(const QString &newLogin);

    const QString &getFull_name_st() const;
    void setFull_name_st(const QString &newFull_name_st);
    QString full_name = "null";
    QString gender = "null";
    QString studying_group_id = "null";
    QString birth_date = "null";
    QString student_id = "null";
    QString stud_parent_id = "null";
    QString question_to_db = "null";
    QString gr_num = "null";
    QString gr_prof= "null";
    QString full_name_parent = "null";
    QString phone_numb_parent= "null";
    QSqlQuery query_getnotes_full;
    QSqlQuery query;

private slots:
    void on_cancel_buttom_clicked();

private:
    Ui::student_info *ui;
    QString login = "login";
    QString full_name_st = "none";
};

#endif // STUDENT_INFO_H
