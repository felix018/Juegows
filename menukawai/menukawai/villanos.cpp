#include "villanos.h"
#include <QDebug>
#include "game.h"
#include <QFont>
#include "personaje.h"
#include <typeinfo>
#include "disparos.h"
#include "villanos.h"

villanos::villanos(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem (parent)
{
    setPixmap((QPixmap(":/imágenes del juego/malo1.png")));
    connect(time, SIGNAL(timeout()),this,SLOT(move()));
    time->start(50);
}
/*
void villanos::move(){
    if(pos().x()>500){
        setPos(x()-5,y());
        if(cont==0){
            setPixmap((QPixmap(":/imágenes del juego/malo1.png")));
            cont=1;
        }
    }else setPos(x(),y());

}
*/
