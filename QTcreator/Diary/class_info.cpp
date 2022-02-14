#include "class_info.h"
#include "ui_class_info.h"
#include <check_class.h>
class_info::class_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::class_info)
{
    ui->setupUi(this);
}

class_info::~class_info()
{
    delete ui;
}

void class_info::on_cancel_buttom_clicked()
{
    hide();
    check_class class_window;
    class_window.setModal(true);
    class_window.exec();
}

