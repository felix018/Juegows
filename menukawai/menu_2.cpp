#include "menu_2.h"
#include "ui_menu_2.h"
#include <QMessageBox>
menu_2::menu_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu_2)
{
    ui->setupUi(this);
}

menu_2::~menu_2()
{
    delete ui;
}
