#include "gemare.h"
#include "game.h"
#include "villanos.h"
#include "personaje.h"
extern game *gamm;

gemare::gemare()
{
    setPixmap(QPixmap(":/imágenes del juego/roja.png"));
    connect(tel,SIGNAL(timeout()),this, SLOT(move()));
    //connect(vil,SIGNAL(timeout()),gamm->per, SLOT(generar()));

    tel->start(50);


}
void gemare::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems(); //lista de elemntos que colisionan
    for (int i = 0, n = colliding_items.size(); i < n; i++ ){
        if (typeid(*(colliding_items[i])) == typeid(personaje)){
            gamm->scene->removeItem(this);
            if(colliding_items[i]==gamm->per){
                //gamm->vid->decreceJazul();
                //vil->start(2500);
                setPixmap(QPixmap(":/imágenes del juego/040.jpg"));
                        setPos(x(),160);
                        winn = new QGraphicsTextItem();
                        winn->setPlainText(QString("YOU WIN!"));
                        winn->setPos(300, 100);
                        winn->setDefaultTextColor(Qt::white);
                        winn->setFont(QFont("Dead Kansas",50));
                        gamm->scene->addItem(winn);
                qDebug()<<"me mandan y obedesco";
                if(gamm->player==true){
                    gamm->vid2->decrece2();
                }
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


