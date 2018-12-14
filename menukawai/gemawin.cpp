#include "gemawin.h"
#include "game.h"
#include "villanos.h"
#include "personaje.h"
extern game *gamm;

gemawin::gemawin()
{
    setPixmap(QPixmap(":/imágenes del juego/roja.png"));
    connect(tel,SIGNAL(timeout()),this, SLOT(move()));
    //connect(vil,SIGNAL(timeout()),gamm->per, SLOT(generar()));

    tel->start(50);

}
void gemawin::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems(); //lista de elemntos que colisionan
    for (int i = 0, n = colliding_items.size(); i < n; i++ ){
        if (typeid(*(colliding_items[i])) == typeid(personaje)){
            gamm->scene->removeItem(this);
            if(colliding_items[i]==gamm->per){
                vil->start(2500);
                //tel->stop();
                //setPixmap(QPixmap(":/imágenes del juego/040.jpg"));
                //setPos(x(),160);
                //won= new QGraphicsTextItem();
                //won->setPlainText(QString("YOU WIN!"));
                //won->setPos(300, 100);
                //won->setDefaultTextColor(Qt::white);

                //gamm->scene->addItem(won);
                //vil->start(2500);

                 qDebug()<<"bye1";
            }
             gamm->vt=(gamm->vid->vid1)*10;
             qDebug()<<gamm->vt<<"zzzzzzz";
             return;
        }
    }
    //setPos(x()-20, y());
    if (x() < 0){
        gamm->scene->removeItem(this);
        delete this;
    }
}
