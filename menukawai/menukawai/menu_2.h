#ifndef MENU_2_H
#define MENU_2_H

#include <QWidget>

namespace Ui {
class menu_2;
}

class menu_2 : public QWidget
{
    Q_OBJECT

public:
    explicit menu_2(QWidget *parent = nullptr);
    ~menu_2();

private:
    Ui::menu_2 *ui;
};

#endif // MENU_2_H
