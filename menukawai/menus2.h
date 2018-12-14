#ifndef MENUS2_H
#define MENUS2_H

#include <QMainWindow>
#include "game.h"
#include <iostream>
#include <Vector>
#include <QMediaPlayer>
#include "mainwindow.h"

namespace Ui {
class menus2;
}

class menus2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit menus2(QWidget *parent = nullptr);
    std::string b;

    ~menus2();
    int nivel=0, pp1=0,pp2=0;
        int cont=0;
        int flag=0;

private slots:
    void on_ingresar_clicked();

private:
    Ui::menus2 *ui;
};

#endif // MENUS2_H
