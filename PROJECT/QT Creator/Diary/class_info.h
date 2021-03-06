#ifndef CLASS_INFO_H
#define CLASS_INFO_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class class_info;
}

class class_info : public QDialog
{
    Q_OBJECT

public:
    explicit class_info(QWidget *parent = nullptr, QString login = "login", QString class_letter = "none", int class_num = 0);
    ~class_info();

    const QString &getLogin() const;
    void setLogin(const QString &newLogin);

    const QString &getClass_letter() const;
    void setClass_letter(const QString &newClass_letter);
    int getClass_num() const;
    void setClass_num(int newClass_num);
    QString infoText = "null";
    QString question_to_db = "null";
    QString question_to_db_par = "null";
    QString question_to_db_class = "null";
    QString get_gr_id_request = "null";
    QString gr_id = "null";
    QString full_name_parent = "null";
    QString phone_numb_parent = "null";
    QString full_name = "null";
    QString birth_date = "null";
    QString stud_parent_id = "null";
    QString studying_group_id = "null";
    QString gr_num = "null";
    QString gr_prof= "null";
    QSqlQuery query_getid;
    QSqlQuery query;
    QSqlQuery query_parents;
    QSqlQuery query_class_num;

private slots:
    void on_cancel_button_clicked();

private:
    Ui::class_info *ui;
    QString login = "login";
    QString class_letter = "none";
    int class_num = 0;
};

#endif // CLASS_INFO_H
