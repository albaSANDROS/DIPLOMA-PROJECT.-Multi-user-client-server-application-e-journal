#ifndef CHECK_STUDENT_H
#define CHECK_STUDENT_H

#include <QDialog>

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

private slots:
    void on_cancel_button_clicked();

    void on_find_button_clicked();

private:
    Ui::check_student *ui;
    QString login = "login";
};

#endif // CHECK_STUDENT_H
