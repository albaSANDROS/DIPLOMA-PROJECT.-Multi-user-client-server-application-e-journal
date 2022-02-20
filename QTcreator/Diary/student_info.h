#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

#include <QDialog>

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

private slots:
    void on_cancel_buttom_clicked();

private:
    Ui::student_info *ui;
    QString login = "login";
    QString full_name_st = "none";
};

#endif // STUDENT_INFO_H
