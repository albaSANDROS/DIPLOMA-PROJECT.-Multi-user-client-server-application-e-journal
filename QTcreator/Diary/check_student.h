#ifndef CHECK_STUDENT_H
#define CHECK_STUDENT_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class check_student;
}

class check_student : public QDialog
{
    Q_OBJECT

public:
    explicit check_student(QWidget *parent = nullptr, QString login = "login");
    ~check_student();

    const QString &getLogin() const;
    void setLogin(const QString &newLogin);
    const QString &getFull_name_st() const;
    void setFull_name_st(const QString &newFull_name_st);

    QString question_to_db = "null";
    QSqlQuery query;

private slots:
    void on_cancel_button_clicked();

    void on_find_button_clicked();

private:
    Ui::check_student *ui;
    QString login = "login";
    QString full_name_st = "none";
};

#endif // CHECK_STUDENT_H
