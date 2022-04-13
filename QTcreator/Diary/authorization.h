#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class authorization;
}

class authorization : public QDialog
{
    Q_OBJECT

public:
    explicit authorization(QWidget *parent = nullptr);
    ~authorization();

    const QString &getToken() const;
    void setToken(const QString &newToken);
    const QByteArray &getToken_toUtf8() const;
    void setToken_toUtf8(const QByteArray &newToken_toUtf8);
    QSqlQuery query;
    QString question_to_db;
    QString user_id;
    QString full_name;
    int role_num;


private slots:
    void on_accept_button_clicked();

private:
    Ui::authorization *ui;
    QString token;
    QByteArray token_toUtf8;
};

#endif // AUTHORIZATION_H
