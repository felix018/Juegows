#include "menus2.h"
#include "ui_menus2.h"
#include <ctype.h>
#include <iostream>
#include <fstream>
#include "stdlib.h"
#include <QMessageBox>
using namespace std;
extern game *gamm;

menus2::menus2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menus2)
{
    ui->setupUi(this);
}

menus2::~menus2()
{
    delete ui;
}

void menus2::on_ingresar_clicked()
{
    b="holi";                                                                                 //Guarda algo en la variable donde se guarda el nick
       std::string var;                                                                          //Crea la variable var
       QString a= ui->usuario->text()+".txt";                                                       //Guarda en a lo que se escribe en la linea de texto
       b = a.toLocal8Bit().constData();                                                          //Convierte el Qstring a String y lo guarda en la variable b
       ifstream load;                                                                            //Definimos en archivo en lectura
       load.open(b,ios::in);

       // abrimos el archivo en modo lectura

       if(load.fail()){                                                                          //Si el archivo falla
           QMessageBox::information(this, tr("Error"), tr("Nombre de usuario Incorrecto"));
           //Muestre un mensaje
       }
       else{                                                                                     //Si no falla
                                                                                //Cierra el archivo
              gamm = new game();
              //Crea el juego
              gamm->iniciar(0);
              gamm->show();                                                                        //Lo muestra
              close();                                                                              //Cierra el widget actual
          }


}
