#include "mainwindow.h"
#include <QApplication>
#include<connection.h>
#include<QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
        MainWindow w;
        //w.show();
        connection c;
        bool test=c.creat_cnx();
        if(test){
        //qDebug()<<"connexion etablie";
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
