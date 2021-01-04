#include "client.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
client::client()
{
 int id=0;
 int idc=0;
 QString daate="";
 QString nom="";
 QString prenom="";
 QString tfete="";
}
client::client(int id,int idc,QString daate,QString nom,QString prenom,QString tfete)
{
 this->id=id;
 this->idc=idc;
 this->daate=daate;
 this->nom=nom;
 this->prenom=prenom;
 this->tfete=tfete;
}

int client:: get_id(){return id;}
int client::  get_idc(){return idc;}
QString client::get_date(){return daate;}
QString client::get_nom(){return nom;}
QString client::get_prenom(){return prenom;}
QString client::get_Tfete(){return tfete; }

bool client::ajouter(){
    QSqlQuery query;
    query.prepare("INSERT INTO CLIENT (id,idc,daate,nom,prenom,tfete)"
                   "VALUES (:id,:idc,:daate,:nom,:prenom,:tfete)");
    query.bindValue(":id",id);
    query.bindValue(":idc",idc);
    query.bindValue(":daate",daate);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":tfete",tfete);
    return query.exec();
}

bool client::modifier(int id)
{
    QSqlQuery query;

    query.prepare ("UPDATE CLIENT SET ID=:id,idc=:idc, daate=:daate,nom=:nom , prenom=:prenom,tfete=:tfete where id=:id ");
    query.bindValue(":id", id);
    query.bindValue(":idc", idc);
    query.bindValue(":daate", daate);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":tfete",tfete);

    return    query.exec();
}

bool client::supprimer(int id)
{
    QSqlQuery query;

    query.prepare("DELETE from client where id=:id");
    query.bindValue(":id",id);

    return    query.exec();
}

QSqlQueryModel * client::affichertri1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from client order by id ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TFETE"));
    return model;
}
QSqlQueryModel * client::affichertri1_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from client order by id desc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TFETE"));
    return model;
}
QSqlQueryModel * client::affichertri2()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from client order by IDC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TFETE"));
    return model;
}
QSqlQueryModel * client::affichertri2_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from client order by IDC desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TFETE"));
    return model;
}
QSqlQueryModel * client::affichertri3()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from client order by DAaTE ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TFETE"));
    return model;
}
QSqlQueryModel * client::affichertri3_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from client order by DAaTE desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TFETE"));
    return model;
}
QSqlQueryModel * client::affichertri4()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from client order by NOM ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TFETE"));
    return model;
}
QSqlQueryModel * client::affichertri4_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from client order by NOM desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TFETE"));
    return model;
}
QSqlQueryModel * client::affichertri5()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from client order by PRENOM ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TFETE"));
    return model;
}
QSqlQueryModel * client::affichertri5_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from client order by PRENOM desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TFETE"));
    return model;
}
QSqlQueryModel * client::affichertri6()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from client order by TFETE ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TFETE"));
    return model;
}
QSqlQueryModel * client::affichertri6_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from client order by TFETE desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TFETE"));
    return model;
}
