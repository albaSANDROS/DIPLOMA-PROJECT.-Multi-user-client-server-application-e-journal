#ifndef DIARY_MENU_H
#define DIARY_MENU_H

#include <QDialog>

namespace Ui {
class diary_menu;
}

class diary_menu : public QDialog
{
    Q_OBJECT

public:
    explicit diary_menu(QWidget *parent = nullptr);
    ~diary_menu();

private:
    Ui::diary_menu *ui;
};

#endif // DIARY_MENU_H
