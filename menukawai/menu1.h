#ifndef MENU1_H
#define MENU1_H
#include <QMediaPlayer>
#include <mainwindow.h>
#include <QWidget>
#include <iostream>
#include "stdlib.h"
#include <QString>

namespace Ui {
class menu1;
}

class menu1 : public QWidget
{
    Q_OBJECT

public:
    explicit menu1(QWidget *parent = nullptr);
    std::string b;
    ~menu1();


private slots:
    void on_lineEdit_editingFinished();
    void on_return_2_clicked();
    void on_saved_clicked();

private:
    Ui::menu1 *ui;
    QMediaPlayer *playing;
};

#endif // MENU1_H
