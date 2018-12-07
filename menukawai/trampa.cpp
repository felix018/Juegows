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
    QList<QGraphicsItem *> colliding_items = collidingItems(); //lista de elemntos que colisionan
    for (int i = 0, n = colliding_items.size(); i < n; i++ ){
        if (typeid(*(colliding_items[i])) == typeid(personaje)){
            gamm->scene->removeItem(this);
            if(colliding_items[i]==gamm->per){
                gamm->vid->decrece1();
                 qDebug()<<"bye2";
            }
            gamm->vt=(gamm->vid->vid1)*10;
            qDebug()<<gamm->vt<<"zzzzzzz";
            return;
        }
    }
    setPos(x(), y()+25);
    if (y() == HEI){
        gamm->scene->removeItem(this);
        delete this; //liberar memoria
    }

}

