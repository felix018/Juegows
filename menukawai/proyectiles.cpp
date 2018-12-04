#include "proyectiles.h"
#include "game.h"
extern game *gamm;


proyectiles::proyectiles()
{
    setPixmap(QPixmap(":/imágenes del juego/bola de fuego2.png"));
    connect(tel,SIGNAL(timeout()),this, SLOT(move()));
    tel->start(50);

}
void proyectiles::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems(); //lista de elemntos que colisionan
    for (int i = 0, n = colliding_items.size(); i < n; i++ ){
        if (typeid(*(colliding_items[i])) == typeid(personaje)){
            gamm->scene->removeItem(this);
        }
    }
}



