#include "aliens.h"
#include <QDebug>
#include "game.h"
#include <QFont>
#include "personaje.h"
//#include "disparoalien.h"
#include <typeinfo>



aliens::aliens(QObject *parent)
{
    connect(tempo, SIGNAL(timeout()),this,SLOT(move()));//timer para mover del alien raro
    //connect(pom, SIGNAL(timeout()),this,SLOT(shoot())); //timer para los disparos
    tempo->start(50);
    //pom->start(2500);

}
void aliens::move(){
    if(pos().x() > 0){ //si el alien raro está en una posición mayor a 0
        setPos(x()-5,y()); //se resta 5 a la posición
        if(cont==0){
            setPixmap((QPixmap(":/imágenes del juego/alien1.png")));
            cont=1;
        }else if(cont==1){
            setPixmap((QPixmap(":/imágenes del juego/alien2.png")));
            cont=2;
        }else if(cont==2){
            setPixmap((QPixmap(":/imágenes del juego/alien3.png")));
            cont=3;
        }else if(cont==3){
            setPixmap((QPixmap(":/imágenes del juego/alien4.png")));
            cont=0;
        }
    }else setPos(x(),y()); //si no se queda quieto
    if(pos().x()<=0){  //si la posición es menor o igual a 0
        scene()->removeItem(this);
        delete this;
    }

}
/*
void aliens::shoot(){
    qDebug()<<"no joda";
    disparoalien *bala = new disparoalien();
    bala->setPos(this->x(),this->y());
    scene()->addItem(bala);

}
*/
