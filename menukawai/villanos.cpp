#include "villanos.h"
#include <QDebug>
#include "game.h"
#include <QFont>
#include "personaje.h"
#include <typeinfo>

villanos::villanos(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap((QPixmap(":/imágenes del juego/malo1.png")));
    connect(timer, SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);

}
void villanos::move(){
    if(pos().x() > 500){
        setPos(x()-5,y());
        if(cont==0){
            setPixmap((QPixmap(":/imágenes del juego/malo1.png")));
            cont=1;
        }
    }else setPos(x(),y());
}
