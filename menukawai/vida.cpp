#include "vida.h"
#include <QDebug>
#include "game.h"
#include <QFont>
#include "personaje.h"
#include "trampa.h"

extern game *gamm;



vida::vida(QObject *parent) : QObject(parent)
{
    over = new QGraphicsTextItem();
    //connect(tim,SIGNAL(timeout()),this,SLOT(vid()));
    //tim->start(2000);
}
void vida::decrece1(){
    vid1--;
    qDebug()<<vid1;
    if(vid1<=0) GameOver();
}
void vida::decrece2(){
    vid2--;
    qDebug()<<vid2;
    if(vid2<1){
            vid1=0;
            decrece1();
        };
}
void vida::decreceJazul(){
    vid1=3;
    qDebug()<<"joya azul";
}
void vida::GameOver(){
     qDebug()<<"Game  Over";
      gamm->scene->setBackgroundBrush(Qt::black);
      gamm->scene->removeItem(gamm->per);
      gamm->TGame->stop();
      gamm->TGame2->stop();
      gamm->puntos->stop();
      gamm->scene->clear();
      over->setPlainText(QString("GAME OVER"));
      over->setPos(300, 100);
      over->setDefaultTextColor(Qt::white);
      over->setFont(QFont("DEATH",50));
      gamm->scene->addItem(over);

}

