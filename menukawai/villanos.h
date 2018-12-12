#ifndef VILLANOS_H
#define VILLANOS_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QGraphicsTextItem>
#include <QGraphicsScene>
#include <QMediaPlayer>
#include <typeinfo>
#include "caida.h"

class villanos : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit villanos(QGraphicsItem *parent = nullptr);
        QTimer * timer = new QTimer();
        QTimer *pum = new QTimer();
        //QTimer *bon = new QTimer();
        int cont=0;
        //int contboom=0;
private:
        int contador=0;

signals:

public slots:
        void move();
        void shoot();
        //void boom();
};

#endif // VILLANOS_H
