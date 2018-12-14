#include "joyas.h"
#include "game.h"
extern game* gamm;
joyas::joyas()
{
    setPixmap(QPixmap(":/imágenes del juego/azul.png"));
    connect(tel,SIGNAL(timeout()),this, SLOT(moves()));
    tel->start(50);

}
void joyas::d_JAzul(){
    vud->decreceJazul();
    qDebug()<<"azulito";
}
void joyas::moves(){
    QList<QGraphicsItem *> colliding_items = collidingItems(); //lista de elemntos que colisionan
    for (int i = 0, n = colliding_items.size(); i < n; i++ ){
        if (typeid(*(colliding_items[i])) == typeid(personaje)){
           gamm->scene->removeItem(this);
            //qDebug()<<"morite pues";
            if(colliding_items[i]==gamm->per){
                gamm->vid->decrece1();
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
}
