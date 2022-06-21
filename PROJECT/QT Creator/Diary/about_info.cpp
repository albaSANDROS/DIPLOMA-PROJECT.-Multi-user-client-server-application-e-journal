#include "about_info.h"
#include "ui_about_info.h"
#include <QFile>
about_info::about_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about_info)
{
    ui->setupUi(this);
}

about_info::~about_info()
{
    delete ui;
}
