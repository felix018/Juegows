#include "guerra.h"
#include "personaje.h"
#include <random>
#include "game.h"
#include "caida.h"

extern game *gime;

guerra::guerra(QObject *parent) : QObject(parent)
{
    //setPixmap(QPixmap(":/imágenes del juego/boom.png"));
    //connect(rocas, SIGNAL(timeout()),this,SLOT(roca()));
    //rocas->start(50);

}
/*
void guerra::roca(){
    controc++;
    if(controc<21){
        caida *bim = new caida();
        bim->setPos(700,20);
        scene()->addItem(bim);
    }else{
        rocas->stop();
    }
}
*/
