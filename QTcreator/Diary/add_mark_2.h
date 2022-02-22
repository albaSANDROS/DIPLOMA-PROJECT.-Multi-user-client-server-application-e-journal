#ifndef ADD_MARK_2_H
#define ADD_MARK_2_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class add_mark_2;
}

class add_mark_2 : public QDialog
{
    Q_OBJECT

public:
    explicit add_mark_2(QWidget *parent = nullptr, QString login = "login", QString student_name = "none");
    ~add_mark_2();

    const QString &getLogin() const;
    void setLogin(const QString &newLogin);

    QString question_to_db = "null";
    QSqlQuery query;
    const QString &getStudent_name() const;
    void setStudent_name(const QString &newStudent_name);

private slots:

    void on_pushButton_cancel_clicked();

    void on_pushButton_evaluate_clicked();

private:
    Ui::add_mark_2 *ui;
    QString login = "login";
    QString student_name = "none";
};

#endif // ADD_MARK_2_H
