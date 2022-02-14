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
    explicit check_class(QWidget *parent = nullptr);
    ~check_class();

private slots:
    void on_cancel_button_clicked();

    void on_find_button_clicked();

private:
    Ui::check_class *ui;
};

#endif // CHECK_CLASS_H
