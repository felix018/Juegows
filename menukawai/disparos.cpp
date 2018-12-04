#include "disparos.h"
#include "villanos.h"
#include "game.h"


disparos::disparos()
{
    connect(tim,SIGNAL(timeout()),this, SLOT(move()));   //timer de movimiento
    tim->start(50);
}
void disparos::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems(); // lista de proyectiles
    for (int i = 0, n = colliding_items.size(); i < n; i++ ){ // se recorre la lista  proyectiles
        if (typeid(*(colliding_items[i])) == typeid(villanos)){//condición para eliminación
            scene()->removeItem(colliding_items[i]);//se remueve al villano de la escena
            scene()->removeItem(this);  //adiós proyectil
            delete colliding_items[i]; //liberar memoria
            return;
        }
    }
}
