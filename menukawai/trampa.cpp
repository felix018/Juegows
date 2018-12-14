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
    QList<QGraphicsItem *> collidin = collidingItems(); //lista de elementos que colisionan
    for (int i = 0, n = collidin.size(); i < n; i++ ){
        if (typeid(*(collidin[i])) == typeid(personaje)){
            if(collidin[i]==gamm->per){
                gamm->vid->decrece1();
                 qDebug()<<"bye2";
            }
            gamm->vt=(gamm->vid->vid1)*10;
            qDebug()<<gamm->vt<<"zz";
            return;
        }
    }
    if(cont==0) setPos(x(), y()+20);
            else if(cont==1) setPos(x(),y()-20);
            if(y()>220) cont=1;
            if(y()<20) cont=0;

}

