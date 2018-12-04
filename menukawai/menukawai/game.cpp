#include "game.h"
#include "ui_game.h"
#include "menu1.h"
#include <iostream>
#include <QMessageBox>
#include <fstream>
#include "mainwindow.h"
#define RUTA_ARCHIVO "guardar.txt"

extern menu1 *menu;
using namespace std;

game::game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);

    interacion=new QTimer;
    interacion->start(10);
    connect(interacion,SIGNAL (timeout()),SLOT (F()));

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1000,400);
    ui->view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);  //Quita la barra de desplazamiento inferior
    ui->view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);    //Quita la barra de desplazamineto lateral
    ui->view->setScene(scene);
    setFixedSize(WIDTH,HEIGHT);
    qDebug()<<cont<<" "<<p1<<" "<<p2;
//comienzo intento del personaje
    if(cont==0){
         scene->setBackgroundBrush(QBrush(QImage(":/imágenes del juego/fondo kawai 1.png")));
         /*
        plataforma->setPixmap(QPixmap(":/imágenes del juego/plataforma1 fuego.png"));
        plataforma->setPos(420,200);
        scene->addItem(plataforma);
        plat->setPixmap(QPixmap(":/imágenes del juego/plataforma2 fuego.png"));
        plat->setPos(200,120);
        scene->addItem(plat);
        */
;//-------------------------------------------------------------------------------------------------
        per= new personaje();
        per->setPixmap(QPixmap(":/imágenes del juego/muñequita2 derecha.png"));
        per->setPos(15,280) ;
        per->setHeight(HEIGHT);
        scene->addItem(per);
        QObject::connect(Jtime, SIGNAL(timeout()),per,SLOT(jump()));
        Jtime->start(45);
        //generar villano
        //QObject::connect(TGame, SIGNAL(timeout()),per2,SLOT(generar()));
        //TGame->start(3500);

    }else if(cont==1){
        scene->setBackgroundBrush(QBrush(QImage(":/imágenes del juego/WhatsApp Image 2018-11-29 at 10.37.13 PM.jpeg")));

    }
}
void game::keyPressEvent(QKeyEvent *event)
{
    //personaje 1
    if(event->key()==Qt::Key_M){
        per->settBanRight();
        per->setPixmap(QPixmap(":/imágenes del juego/muñequita1 derecha.png"));
        qDebug() << "left";
    }else if (event->key() == Qt::Key_N){
        per->settBanLeft();
        per->setPixmap(QPixmap(":/imágenes del juego/muñequita1 izquierda.png"));
        qDebug() << "right";

    }else if(event->key()==Qt::Key_S){
        per->setBandera();
    }
}
void game::keyReleaseEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_M){
        per->resettBanRight();
        per->setPixmap(QPixmap(":/imágenes del juego/muñequita3 derecha.png"));
    }else if (event->key()==Qt::Key_N) {
        per->resettBanLeft();
        per->setPixmap(QPixmap(":/imágenes del juego/muñequita3 izquierda.png"));
    }
}





game::~game()
{
    delete ui;
}


