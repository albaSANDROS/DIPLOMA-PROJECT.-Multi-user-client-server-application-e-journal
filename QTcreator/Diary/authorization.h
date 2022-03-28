#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class authorization;
}

class authorization : public QDialog
{
    Q_OBJECT

public:
    explicit authorization(QWidget *parent = nullptr);
    ~authorization();

    const QString &getToken() const;
    void setToken(const QString &newToken);
    QSqlQuery query;
    QString question_to_db;
    QString user_id;
    QString user_role;
    QString full_name_teacher;
    QString full_name_student;
    QString full_name_parent;
    int role_num;
private slots:
    void on_accept_button_clicked();

private:
    Ui::authorization *ui;
    QString token;
};

#endif // AUTHORIZATION_H
