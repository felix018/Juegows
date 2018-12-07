#include "trampa.h"
#include "personaje.h"
#include <QDebug>
#include "game.h"
#include <QFont>
#include "disparos.h"
#include <typeinfo>

extern game *gamm;

trampa::trampa(QObject *parent)
{
    setPixmap(QPixmap(":/imágenes del juego/prefuego azul.png"));
    connect(tempo,SIGNAL(timeout()),this, SLOT(move()));
    tempo->start(50);

}
void trampa::move(){
    QList<QGraphicsItem *> collidin = collidingItems(); //lista de elemntos que colisionan
    for (int i = 0, n = collidin.size(); i < n; i++ ){
        if (typeid(*(collidin[i])) == typeid(personaje)){
            gamm->scene->removeItem(this);
            if(collidin[i]==gamm->per){
                gamm->vid->decrece1();
                 qDebug()<<"bye2";
            }
            gamm->vt=(gamm->vid->vid1)*10;
            qDebug()<<gamm->vt<<"zz";
            return;
        }
    }
    setPos(x(), y()+25);
    if (y() == HEI){
        y()-400;
        if(y()==0){
            gamm->scene->removeItem(this);
            delete this; //liberar memoria
        }
        //gamm->scene->removeItem(this);
        //delete this; //liberar memoria
    }

}

