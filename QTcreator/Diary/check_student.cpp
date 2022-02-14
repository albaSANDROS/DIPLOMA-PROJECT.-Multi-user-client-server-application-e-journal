#include "check_student.h"
#include "ui_check_student.h"
#include <get_data.h>

check_student::check_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::check_student)
{
    ui->setupUi(this);
}

check_student::~check_student()
{
    delete ui;
}

void check_student::on_cancel_button_clicked()
{
    hide();
    get_data menu_window;
    menu_window.setModal(true);
    menu_window.exec();
}

