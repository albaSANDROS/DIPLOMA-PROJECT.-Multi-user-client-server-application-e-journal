#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    //MainWindow(const QString &auth_login, const QString &auth_pass);
    ~MainWindow();


    const QString &getAuth_login() const;
    void setAuth_login(const QString &newAuth_login);
    const QString &getAuth_pass() const;
    void setAuth_pass(const QString &newAuth_pass);

private slots:
    void on_auth_confirm_clicked();

private:
    Ui::MainWindow *ui;

    QString auth_login;
    QString auth_pass;

};
#endif // MAINWINDOW_H
