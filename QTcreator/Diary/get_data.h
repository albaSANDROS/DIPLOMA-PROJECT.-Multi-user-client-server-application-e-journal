#ifndef GET_DATA_H
#define GET_DATA_H

#include <QDialog>

namespace Ui {
class get_data;
}

class get_data : public QDialog
{
    Q_OBJECT

public:
    explicit get_data(QWidget *parent = nullptr, QString login = "login");
    ~get_data();

    const QString &getLogin() const;
    void setLogin(const QString &newLogin);

private slots:
    void on_get_back_button_clicked();

    void on_students_info_button_clicked();

    void on_classes_info_button_clicked();

private:
    Ui::get_data *ui;
    QString login = "login";
};

#endif // GET_DATA_H
