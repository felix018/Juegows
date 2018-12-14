#include "villanos.h"
#include <QDebug>
#include "game.h"
#include <QFont>
#include "personaje.h"
#include <typeinfo>
#include "proyectiles.h"
#include "game.h"
#include <QFont>

villanos::villanos(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap((QPixmap(":/imágenes del juego/malo1.png")));
    connect(timer, SIGNAL(timeout()),this,SLOT(move()));
    connect(pum, SIGNAL(timeout()),this,SLOT(shoot()));
    //connect(bon, SIGNAL(timeout()),this,SLOT(boom()));


    timer->start(50);
    pum->start(3000);
    //bon->start(50);

}
void villanos::move(){
    if(pos().x() > 300){
        setPos(x()-5,y());
        if(cont==0){
            setPixmap((QPixmap(":/imágenes del juego/malo1.png")));
            cont=1;
        }
    }else setPos(x(),y());
}
void villanos::shoot(){
    proyectiles *bal=new proyectiles();
    bal->setPos(this->x()-20,this->y()+25);
    scene()->addItem(bal);
}
/*
void villanos::boom(){
    contboom++;
    if(contboom<21){
        caida *bim = new caida();
        bim->setPos(700,20);
        scene()->addItem(bim);
    }else{
        bon->stop();
    }
}
*/
