#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <personaje.h>
#include<QGraphicsView>
#include<QGraphicsScene>
#include<QObject>
#include "menu1.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    /*
    QObject *padrejose = nullptr;
    personaje *pancracio=new personaje(200,200,padrejose);
    QGraphicsScene *cenando=new QGraphicsScene(0,0,400,400);
    cenando->addItem(pancracio);
    ui->graphicsView->setScene(cenando);
    ui->graphicsView->adjustSize();
    pancracio->setFocus();
    */
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    menu1 *eleccion = new menu1();
    eleccion->show();
    close();
}
