#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QImage>
#include <QMediaPlayer>
#include <QFile>
#include <QKeyEvent>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>
#include <QWidget>
#include <personaje.h>
#include "vida.h"
#include "disparos.h"
#include "trampa.h"
#include "caida.h"
#include "joyas.h"
#define WIDTH 1000
#define HEIGHT 400

namespace Ui {
class game;
}

class game : public QWidget
{
    Q_OBJECT

public:

    explicit game(QWidget *parent = nullptr);
    QGraphicsScene *scene;
    QGraphicsRectItem *rect;
    QGraphicsRectItem *rec;
    trampa *trap;
    trampa *trick;
    trampa *team;
    caida *huevo;
    caida *huevo2;
    caida *huevo3;

    ~game();
    personaje *per;
    personaje *per2;
    void keyPressEvent(QKeyEvent * event);
    void keyReleaseEvent(QKeyEvent * event);
    void setHeight(int w);
    int cont=0;
    int vt;
    int p1=0, p2=0;
    int cambio=0;
    int flag=0;
    bool player=false;
    int huevos=10;
    QGraphicsTextItem *tex;
    disparos *balin;
    disparos *balin1;
    //joyas *gem;

    QTimer *interacion;

    QGraphicsPixmapItem *plataforma=new QGraphicsPixmapItem();

    QGraphicsPixmapItem *plat=new QGraphicsPixmapItem();

    vida *vid;
    vida *vid2;
    void niveles();
    void puntajes();
    void boom();



    QTimer *Jtime=new QTimer();
    QTimer *TGame = new QTimer();
    QTimer *TGame2 = new QTimer();
    QTimer *time_cambio = new QTimer();
    QTimer *Tcaer = new QTimer();
    QTimer *puntos = new QTimer();



private slots:
        //void on_save_clicked();

    void on_guardado_clicked();

public:
    void iniciar(int jugador = 0);

private:
    Ui::game *ui;
};

#endif // GAME_H
