#ifndef DISPAROS_H
#define DISPAROS_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QTimer>
#include <typeinfo>
#include "personaje.h"

class disparos : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:

    disparos();
    QTimer *tim=new QTimer();
    int vilian; //#malos
    int alien;


signals:

public slots:
    void move();//proyectiles personajes
};

#endif // DISPAROS_H
