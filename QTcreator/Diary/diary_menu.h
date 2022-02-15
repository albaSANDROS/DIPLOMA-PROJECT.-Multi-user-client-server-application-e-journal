#ifndef DIARY_MENU_H
#define DIARY_MENU_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class diary_menu;
}

class diary_menu : public QDialog
{
    Q_OBJECT

public:
    MainWindow mw;
    QString auth_login = mw.getAuth_login();
    explicit diary_menu(QWidget *parent = nullptr, QString auth_login = "null");
    ~diary_menu();
    const QString &getLogin() const;
    void setLogin(const QString &newLogin);

private slots:
    void on_get_data_button_clicked();

    void on_exit_button_clicked();

    void on_about_button_clicked();

private:
    Ui::diary_menu *ui;
    QString login;
};

#endif // DIARY_MENU_H
