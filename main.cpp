#include "mainwindow.h"
#include <QApplication>
#include"connexion.h"
#include<QDebug>
#include<QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    connecion c;
    bool test=c.ouvrirconnexion();
      MainWindow w;
    if(test){
     w.show();
    QMessageBox::information(nullptr,QObject::tr("database is open"),
                             QObject::tr("connexion etablie"),
                             QMessageBox::Ok);}
    else{
    //qDebug()<<"connexion echouer";
        QMessageBox::critical(nullptr,QObject::tr("database is not open"),
                                QObject::tr("non connecter"),
                                QMessageBox::Cancel);}
     //qDebug()<<"connexion echouer";
            return a.exec();

}
