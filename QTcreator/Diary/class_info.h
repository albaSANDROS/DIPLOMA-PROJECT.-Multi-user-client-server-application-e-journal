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
    explicit class_info(QWidget *parent = nullptr);
    ~class_info();

private slots:
    void on_cancel_buttom_clicked();

private:
    Ui::class_info *ui;
};

#endif // CLASS_INFO_H
