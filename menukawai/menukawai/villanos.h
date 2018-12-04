#ifndef VILLANOS_H
#define VILLANOS_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QGraphicsTextItem>
#include <QGraphicsScene>
#include <QMediaPlayer>
#include <typeinfo>

class villanos: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit villanos(QGraphicsItem *parent = nullptr);
    QTimer *time= new QTimer();
    QTimer *boom = new QTimer();
    int cont=0;
private:
    int contar=0;


signals:

public slots:
    void move();
    //void shoot();
};

#endif // VILLANOS_H
