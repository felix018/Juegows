#ifndef GEMARE_H
#define GEMARE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <typeinfo>
#include <QDebug>
#include <QMediaPlayer>
#include "personaje.h"
#include "vida.h"

class gemare : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit gemare();
    void escogerpiedrita(int a);
    QTimer *tel = new QTimer();
    QTimer *vil = new QTimer();
    QGraphicsTextItem *winn = new QGraphicsTextItem();


signals:

public slots:
    void move();
};

#endif // GEMARE_H
