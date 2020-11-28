#include "client.h"
#include<QString>

Client::Client()
{
    id=0;
    nom="";
    prenom="";
    Tfete="";
    date=0;



}

Client::Client(int date,int id, QString nom,QString prenom,QString Tfete)
{
 this->id=id;
 this-> nom= nom;
 this-> prenom= prenom;
  this-> Tfete= Tfete;
    this->date=date;
}
QString Client::get_nom(){return nom;}
QString Client::get_prenom(){return prenom;}
int Client::get_id(){return id;}
int Client::get_date(){return date;}
bool Client::ajouter ()

{

  QSqlQuery query ;
QString res=QString::number(id);
query.prepare("INSERT INTO Client(ID,NOM,PRENOM,TFETE,DATE_RESERVATION)VALUES(:id,:nom,:prenom,:Tfete,:date)  ");
query.bindValue(":id",res) ;
query.bindValue(":nom",nom) ;
query.bindValue(":prenom",prenom) ;
query.bindValue(":Tfete",Tfete) ;
query.bindValue(":date",date) ;
return  query.exec();

}
QSqlQueryModel * Client::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel;

    model->setQuery("SELECT* FROM Client");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal,  QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal,  QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal,  QObject::tr("Tfete"));
     model->setHeaderData(3, Qt::Horizontal,  QObject::tr("date"));
     return model;

}
bool Client::supprimer(int ref)
{
QSqlQuery query;

query.prepare("Delete from Client where ID=:ref ");
query.bindValue(":ref", ref);
return    query.exec();
}
bool Client::modifier(int ref,int date, QString prenom,QString nom,QString Tfete)
{QSqlQuery edit;
    edit.prepare("Update Client set nom=:nom,prenom=:prenom,Tfete=:Tfete where ID =:ref");
    edit.bindValue(":ref",ref);
    edit.bindValue(":date",date);
    edit.bindValue(":nom",nom);
    edit.bindValue(":prenom",prenom);
    edit.bindValue(":Tfete",Tfete);


    return       edit.exec()  ;
}



