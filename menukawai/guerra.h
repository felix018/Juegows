#ifndef GUERRA_H
#define GUERRA_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QDebug>
#include <QTimer>
#include <QGraphicsTextItem>
#include <QMediaPlayer>
#include <QGraphicsScene>


class guerra : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit guerra(QObject *parent = nullptr);
     QTimer * timer = new QTimer();
     QTimer *rocas = new QTimer();
     QGraphicsTextItem *yey;
     QGraphicsPixmapItem *nani;
     int cont=0,cont1=0;
     int controc=0;


signals:

public slots:
     //void move();
     //void roca();
};

#endif // GUERRA_H
