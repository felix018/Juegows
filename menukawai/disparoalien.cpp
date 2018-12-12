#include "disparoalien.h"
#include "game.h"
extern game *gamm;
disparoalien::disparoalien()
{
    setPixmap(QPixmap(":/imágenes del juego/huevo san.png"));
    connect(tmer,SIGNAL(timeout()),this, SLOT(move()));
    tmer->start(50);
}
void disparoalien::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; i++ ){
        if (typeid(*(colliding_items[i])) == typeid(personaje)){
            gamm->scene->removeItem(this);
            if(colliding_items[i]==gamm->per){
                gamm->vid->decrece1();
                qDebug()<<"bye1";
            }return;
        }
    }
    if(cont==0){
        qDebug()<<"esta cosa si entra";
        setPos(x(), y()+20);
    }else if(cont==1){
        gamm->scene->removeItem(this);
        delete this;
    }
    if(y() >=340){
        cont=1;
    }
}
