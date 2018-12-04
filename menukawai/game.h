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

    QTimer *interacion;

    QGraphicsPixmapItem *plataforma=new QGraphicsPixmapItem();

    QGraphicsPixmapItem *plat=new QGraphicsPixmapItem();


    QTimer *Jtime=new QTimer();
    QTimer *TGame = new QTimer();


private slots:
        //void on_save_clicked();


private:
    Ui::game *ui;
};

#endif // GAME_H
