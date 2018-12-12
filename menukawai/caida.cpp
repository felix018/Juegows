#include "caida.h"
#include "personaje.h"
#include <QDebug>
#include "game.h"
#include <QFont>
#include "disparos.h"
#include <typeinfo>
 extern game *gamm;

caida::caida(QObject *parent) : QObject(parent)
{
    //setPixmap(QPixmap(""));
    connect(tempo,SIGNAL(timeout()),this, SLOT(move()));
    tempo->start(50);

}
void caida::move(){
    QList<QGraphicsItem *> collidin = collidingItems(); //lista de elemntos que colisionan
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
    setPos(x(), y()+20);
    if(y()>400) gamm->scene->removeItem(this);
    qDebug()<<"caigo";
    //delete(this);
}
