#ifndef STUDENT_WINDOW_H
#define STUDENT_WINDOW_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class student_window;
}

class student_window : public QDialog
{
    Q_OBJECT

public:
    explicit student_window(QWidget *parent = nullptr, QString full_name_st = "none");
    ~student_window();

    const QString &getFull_name_st() const;
    void setFull_name_st(const QString &newFull_name_st);
    QString marks = "null";
    QString subject = "null";
    QSqlQuery query;
    QString question_to_db = "null";
    QString student_id = "null";

private slots:
    void on_pushButton_clicked();

private:
    Ui::student_window *ui;
    QString full_name_st = "none";
};

#endif // STUDENT_WINDOW_H
