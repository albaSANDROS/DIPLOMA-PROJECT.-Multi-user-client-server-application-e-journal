#ifndef ADD_MARK_H
#define ADD_MARK_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class add_mark;
}

class add_mark : public QDialog
{
    Q_OBJECT

public:
    explicit add_mark(QWidget *parent = nullptr, QString login = "login");
    ~add_mark();

    const QString &getLogin() const;
    void setLogin(const QString &newLogin);

    const QString &getStudent_fullname() const;
    void setStudent_fullname(const QString &newStudent_fullname);
    QString question_to_db = "null";
    QSqlQuery query;
private slots:
    void on_back_pushButton_clicked();

    void on_next_pushButton_clicked();

private:
    Ui::add_mark *ui;
    QString student_fullname = "null";
    QString login= "login";
};

#endif // ADD_MARK_H
