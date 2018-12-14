#ifndef PIEDRITAS_H
#define PIEDRITAS_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <typeinfo>
#include <QDebug>
#include <QMediaPlayer>
#include "personaje.h"
#include "vida.h"

class piedritas : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    piedritas();
    void escogerpiedrita(int a);
    QTimer *tel = new QTimer();
    QTimer *vil = new QTimer();


public slots:
    void move();//proyectiles personajes
};

#endif // PIEDRITAS_H
