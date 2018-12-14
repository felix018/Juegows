#ifndef JOYAS_H
#define JOYAS_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <typeinfo>
#include <QDebug>
#include "personaje.h"
#include "vida.h"

class joyas : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
     joyas();
     QGraphicsPixmapItem *azul ;
     QGraphicsPixmapItem *roja ;
     QGraphicsPixmapItem *rosa ;
     QGraphicsPixmapItem *blanco ;
     QGraphicsPixmapItem *cafe ;
     vida *vud;
     QTimer *tel = new QTimer();
     void d_JAzul(); //para mermar la vida
     void d_JRoja();
     void d_JRosa();
     void d_JBlanca();
     void victory_JCafe();


signals:


public slots:
     void moves();

};

#endif // JOYAS_H
