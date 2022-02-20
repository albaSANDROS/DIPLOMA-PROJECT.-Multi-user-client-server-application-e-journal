#ifndef CHECK_CLASS_H
#define CHECK_CLASS_H

#include <QDialog>

namespace Ui {
class check_class;
}

class check_class : public QDialog
{
    Q_OBJECT

public:
    explicit check_class(QWidget *parent = nullptr, QString login = "login");
    ~check_class();

    const QString &getLogin() const;
    void setLogin(const QString &newLogin);

    const QString &getClass_letter() const;
    void setClass_letter(const QString &newClass_letter);
    int getClass_num() const;
    void setClass_num(int newClass_num);

private slots:
    void on_cancel_button_clicked();

    void on_find_button_clicked();

private:
    Ui::check_class *ui;
    QString login = "login";
    QString class_letter = "none";
    int class_num = 0;
};

#endif // CHECK_CLASS_H
