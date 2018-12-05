#ifndef VIDA_H
#define VIDA_H

#include <QObject>
#include <QTimer>
#include <QGraphicsTextItem>
#include <QMediaPlayer>
#include "personaje.h"


class vida : public QObject
{
    Q_OBJECT
public:
    explicit vida(QObject *parent = nullptr);
    int vid1=5;
    QTimer *tim=new QTimer();
    QGraphicsTextItem *over;
    void decrece1();
    void GameOver();
private slots:




signals:   
public slots:
};

#endif // VIDA_H
