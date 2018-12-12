#ifndef CAIDA_H
#define CAIDA_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QGraphicsTextItem>
#include <QGraphicsScene>
#include <typeinfo>

class caida : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit caida(QObject *parent = nullptr);
    QTimer * tempo = new QTimer();
    int contplum=0;
    //int HEI=400;
private:
    int contador=0;


signals:

public slots:
     void move();

};

#endif // CAIDA_H
