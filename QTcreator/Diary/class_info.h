#ifndef CLASS_INFO_H
#define CLASS_INFO_H

#include <QDialog>

namespace Ui {
class class_info;
}

class class_info : public QDialog
{
    Q_OBJECT

public:
    explicit class_info(QWidget *parent = nullptr, QString login = "login", QString class_letter = "none", int class_num = 0);
    ~class_info();

    const QString &getLogin() const;
    void setLogin(const QString &newLogin);

    const QString &getClass_letter() const;
    void setClass_letter(const QString &newClass_letter);
    int getClass_num() const;
    void setClass_num(int newClass_num);

private slots:
    void on_cancel_buttom_clicked();

private:
    Ui::class_info *ui;
    QString login = "login";
    QString class_letter = "none";
    int class_num = 0;
};

#endif // CLASS_INFO_H
