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
    explicit check_student(QWidget *parent = nullptr);
    ~check_student();

private slots:
    void on_cancel_button_clicked();

private:
    Ui::check_student *ui;
};

#endif // CHECK_STUDENT_H
