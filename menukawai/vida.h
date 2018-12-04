#ifndef VIDA_H
#define VIDA_H

#include <QObject>
#include <QTimer>
#include <QGraphicsTextItem>
#include <QMediaPlayer>


class vida : public QObject
{
    Q_OBJECT
public:
    explicit vida(QObject *parent = nullptr);
    int vid1=5;


signals:   
public slots:
};

#endif // VIDA_H
