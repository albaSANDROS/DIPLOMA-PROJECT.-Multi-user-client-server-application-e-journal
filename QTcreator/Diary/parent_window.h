#ifndef PARENT_WINDOW_H
#define PARENT_WINDOW_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class parent_window;
}

class parent_window : public QDialog
{
    Q_OBJECT

public:
    explicit parent_window(QWidget *parent = nullptr, QString auth_login = "null");
    ~parent_window();


    const QString &getFull_name_parent() const;
    void setFull_name_parent(const QString &newFull_name_parent);

    QString question_to_db;
    QSqlQuery query;
    QString parent_id;
    QString full_name_st;
    QString studying_group_id;
    QString student_id;
    QString gr_num;
    QString gr_prof;
private slots:
    void on_pushButton_cancel_clicked();

    void on_pushButton_info_clicked();

private:
    Ui::parent_window *ui;
    QString full_name_parent = "null";
    QSqlQuery query_getnotes_full;
    QString note_id = "null";
    QString marks = "null";
    QString subject = "null";
};

#endif // PARENT_WINDOW_H
