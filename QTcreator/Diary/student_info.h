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
    explicit student_info(QWidget *parent = nullptr, QString login = "login");
    ~student_info();

    const QString &getLogin() const;
    void setLogin(const QString &newLogin);

private slots:
    void on_cancel_buttom_clicked();

private:
    Ui::student_info *ui;
    QString login = "login";
};

#endif // STUDENT_INFO_H
