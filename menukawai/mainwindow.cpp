#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <personaje.h>
#include<QGraphicsView>
#include<QGraphicsScene>
#include<QObject>
#include "menu1.h"
#include "game.h"
game *gamm;
menu1 *eleccion;
int a = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    //gamm=new game();
    //gamm->player=true;

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    eleccion = new menu1();
    eleccion->show();
    close();
}

void MainWindow::on_pushButton_3_clicked()
{
    //gamm=new game();
    //gamm->player=true;
    a=1;
    eleccion = new menu1();
    eleccion->show();
    close();

}
