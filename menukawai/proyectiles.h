#ifndef PROYECTILES_H
#define PROYECTILES_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <typeinfo>
#include <QDebug>
#include <QMediaPlayer>
#include "personaje.h"

class proyectiles : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    proyectiles();
    QTimer *tel = new QTimer();

public slots:
    void move();//proyectiles personajes
};

#endif // PROYECTILES_H
