#ifndef GEMAWIN_H
#define GEMAWIN_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <typeinfo>
#include <QDebug>
#include <QMediaPlayer>
#include "personaje.h"
#include "vida.h"


class gemawin: public QObject, public QGraphicsPixmapItem
{
public:
    gemawin();

    void escogerpiedrita(int a);
    QTimer *tel = new QTimer();
    QTimer *vil = new QTimer();
    QGraphicsTextItem *won = new QGraphicsTextItem();
public slots:
    void move();

};

#endif // GEMAWIN_H
