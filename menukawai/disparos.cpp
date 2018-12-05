#include "disparos.h"
#include "villanos.h"
#include "game.h"

extern game *gamm;

disparos::disparos()
{
    connect(tim,SIGNAL(timeout()),this, SLOT(move()));   //timer de movimiento
    //for(int i=50; i<70;i+5) //movimiento uniformemente acelerado
    tim->start(50);

}
void disparos::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems(); // lista de proyectiles
    for (int i = 0, n = colliding_items.size(); i < n; i++ ){ // se recorre la lista  proyectiles
        if (typeid(*(colliding_items[i])) == typeid(villanos)){//condición para eliminación
            scene()->removeItem(colliding_items[i]);//se remueve al villano de la escena
            scene()->removeItem(this);  //adiós proyectil
            gamm->p1=gamm->p1+10;  //se suman 10 al puntaje
            delete colliding_items[i]; //liberar memoria
            return;
        } //por aquí irá lo del jefe final
    }
     setPos(x()+20, y()); //posición en x
     if (x()==1000){
         scene()->removeItem(this);
         delete this;  //se libera la memoria
     }
     if(gamm->vid->vid1<=0){
          tim->stop();  //se para el timer
     }
}
