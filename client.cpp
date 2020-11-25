#include "client.h"
#include<QString>

Client::Client()
{
    id=0;
    nom="";
    prenom="";
    Tfete="";


}

Client::Client(int id, QString nom,QString prenom,QString Tfete)
{
 this->id=id;
 this-> nom= nom;
 this-> prenom= prenom;
  this-> Tfete= Tfete;
}
QString Client::get_nom(){return nom;}
QString Client::get_prenom(){return prenom;}
int Client::get_id(){return id;}
bool Client::ajouter ()

{

  QSqlQuery query ;
QString res=QString::number(id);
query.prepare("INSERT INTO Client(ID,NOM,PRENOM,TFETE)VALUES(:id,:nom,:prenom,:Tfete)  ");
query.bindValue(":id",res) ;
query.bindValue(":nom",nom) ;
query.bindValue(":prenom",prenom) ;
query.bindValue(":Tfete",Tfete) ;
return  query.exec();

}
QSqlQueryModel * Client::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel;

    model->setQuery("SELECT* FROM Client");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal,  QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal,  QObject::tr("prenom"));
    model->setHeaderData(1, Qt::Horizontal,  QObject::tr("Tfete"));
     return model;

}
bool Client::supprimer(int ref)
{
QSqlQuery query;

query.prepare("Delete from Client where ID=:ref ");
query.bindValue(":ref", ref);
return    query.exec();
}
bool Client::modifier(int ref,QString prenom,QString nom,QString Tfete)
{QSqlQuery edit;
    edit.prepare("Update Client set nom=:nom,prenom=:prenom,Tfete=:Tfete where ID =:ref");
    edit.bindValue(":ref",ref);
    edit.bindValue(":nom",nom);
    edit.bindValue(":prenom",prenom);
    edit.bindValue(":Tfete",Tfete);


    return       edit.exec()  ;
}



