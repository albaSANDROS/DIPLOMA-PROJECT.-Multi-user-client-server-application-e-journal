#ifndef ABOUT_INFO_H
#define ABOUT_INFO_H

#include <QDialog>

namespace Ui {
class about_info;
}

class about_info : public QDialog
{
    Q_OBJECT

public:
    explicit about_info(QWidget *parent = nullptr);
    ~about_info();

private:
    Ui::about_info *ui;
};

#endif // ABOUT_INFO_H
