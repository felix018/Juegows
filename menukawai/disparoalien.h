#ifndef DISPAROALIEN_H
#define DISPAROALIEN_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <typeinfo>
#include "personaje.h"


class disparoalien : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    disparoalien();
    QTimer *tmer= new QTimer();
    int cont=0;

public slots:
    void move(); //movimiento proyectil
};

#endif // DISPAROALIEN_H
