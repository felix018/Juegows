#include "piedrasa.h"
#include "game.h"
extern game *gamm;
piedrasA::piedrasA()
{
    setPixmap(QPixmap(":/imágenes del juego/huevo san.png")); //imagene del huevo
    connect(tim,SIGNAL(timeout()),this, SLOT(move()));
    tim->start(50);
}
void piedrasA::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; i++ ){
        if (typeid(*(colliding_items[i])) == typeid(personaje)){
            gamm->scene->removeItem(this); //se elimina el huevo
            if(colliding_items[i]==gamm->per){
                gamm->vid->decrece1();
                qDebug()<<"bye3";
            }
            return;
        }
    }
    if(y()<380){
        setPos(x(), y()+20);
        if(y() >280 && y()<380) setPixmap(QPixmap(":/imágenes del juego/boom.png"));

    }
    if(y() >=340){
         setPos(x(),y());
         gamm->scene->removeItem(this);
         delete this;
    }
}
