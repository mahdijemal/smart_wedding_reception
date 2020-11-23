#include "gestion_personnel.h"


gestion_personnel::gestion_personnel()
{    identifiant="";
    nom="";
    prenom="" ;
    nbrj="" ;
}
gestion_personnel::gestion_personnel(QString nom ,QString identifiant ,QString prenom,QString nbrj )
{
    this->identifiant=identifiant;
    this->nom=nom ;

    this->prenom=prenom;

    this->nbrj=nbrj;
}

void gestion_personnel::setid(QString id){identifiant=id;}
void gestion_personnel::setnom(QString n) { nom = n ;}
void gestion_personnel::setprenom(QString p) {prenom =p;}
void gestion_personnel::setnbrj(QString nb) {nbrj =nb;}
QString gestion_personnel::getid() {return identifiant;}
QString gestion_personnel::getnom() {return nom;}
QString gestion_personnel::getprenom(){return prenom;}
QString gestion_personnel::getnbrj(){return nbrj ;}



bool gestion_personnel:: ajouter_personnel()
{
    QSqlQuery query ;
    query.prepare("INSERT INTO PERSONNEL(IDENTIFIANT,NOM,PRENOM,NBRJ)VALUES(:identifiant,:nom,:prenom,:nbrj)");

    query.bindValue(":identifiant",identifiant) ;
     query.bindValue(":nom",nom) ;
    query.bindValue(":prenom",prenom) ;
     query.bindValue(":nbrj",nbrj) ;
    return query.exec();

}
QSqlQueryModel * gestion_personnel::afficher_personnel()
{
    QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM PERSONNEL ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("JOUR TRAVAILLER"));

return model ;
}

bool gestion_personnel::suprimerpersonnel(QString ident)
{
    QSqlQuery query ;
    query.prepare("delete from PERSONNEL where IDENTIFIANT=:identifiant");
    query.bindValue(":identifiant",ident);
    return  query.exec();
}

bool  gestion_personnel::modifierpersonnel(QString identifiant, QString nom, QString prenom,QString nbrj )
{
    QSqlQuery query;
    query.prepare("UPDATE  PERSONNEL SET IDENTIFIANT='"+identifiant+"',NOM='"+nom+"',PRENOM='"+prenom+"',NBRJ='"+nbrj+"'WHERE IDENTIFIANT='"+identifiant+"' ");
    query.bindValue(":identifiant",identifiant);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":nbrj",nbrj);
    return  query.exec();


}



QSqlQueryModel *afficher_personnel();

