#ifndef ADD_MARK_2_H
#define ADD_MARK_2_H

#include <QDialog>

namespace Ui {
class add_mark_2;
}

class add_mark_2 : public QDialog
{
    Q_OBJECT

public:
    explicit add_mark_2(QWidget *parent = nullptr, QString login = "login", QString student_name = "none");
    ~add_mark_2();

    const QString &getLogin() const;
    void setLogin(const QString &newLogin);

    const QString &getName() const;
    void setName(const QString &newName);

private slots:

    void on_pushButton_2_clicked();

private:
    Ui::add_mark_2 *ui;
    QString login = "login";
    QString name = "none";
};

#endif // ADD_MARK_2_H
