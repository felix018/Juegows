#ifndef PIEDRASA_H
#define PIEDRASA_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <typeinfo>
#include "personaje.h"

class piedrasa : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    piedrasA();
    QTimer *tim= new QTimer();


signals:

public slots:
    void move();
};

#endif // PIEDRASA_H
