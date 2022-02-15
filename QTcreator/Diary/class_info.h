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
    explicit class_info(QWidget *parent = nullptr, QString login = "login");
    ~class_info();

    const QString &getLogin() const;
    void setLogin(const QString &newLogin);

private slots:
    void on_cancel_buttom_clicked();

private:
    Ui::class_info *ui;
    QString login = "login";
};

#endif // CLASS_INFO_H
