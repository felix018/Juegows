#ifndef LOAD_H
#define LOAD_H

#include <QObject>
#include <QWidget>
#include <iostream>
#include <Vector>
#include "mainwindow.h"

namespace Ui {
class load;
}

class load : public QWidget
{
    Q_OBJECT

public:
    // load();
    //~load();
    //std::string b;
    //int nivel=0, pp1=0,pp2=0;
    //int cont=0;
    //int flag=0;


private slots:
    //void on_back_clicked();

    //void on_ok_clicked();

private:
    Ui::load *ui;
};
#endif // LOAD_H
