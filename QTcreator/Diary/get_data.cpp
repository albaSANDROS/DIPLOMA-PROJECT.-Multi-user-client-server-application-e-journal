#include "get_data.h"
#include "ui_get_data.h"
#include <diary_menu.h>
#include <check_class.h>
#include <check_student.h>

get_data::get_data(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::get_data)
{
    ui->setupUi(this);
}

get_data::~get_data()
{
    delete ui;
}

void get_data::on_get_back_button_clicked()
{
    hide();
    diary_menu menu_window;
    menu_window.setModal(true);
    menu_window.exec();
}


void get_data::on_students_info_button_clicked()
{
    hide();
    check_student student_window;
    student_window.setModal(true);
    student_window.exec();
}


void get_data::on_classes_info_button_clicked()
{
    hide();
    check_class class_window;
    class_window.setModal(true);
    class_window.exec();
}

