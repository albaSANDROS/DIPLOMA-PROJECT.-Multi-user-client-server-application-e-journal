#include "diary_menu.h"
#include "ui_diary_menu.h"

diary_menu::diary_menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::diary_menu)
{
    ui->setupUi(this);
}

diary_menu::~diary_menu()
{
    delete ui;
}
