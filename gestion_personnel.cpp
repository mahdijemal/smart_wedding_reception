#include "gestion_personnel.h"


gestion_personnel::gestion_personnel()
{
    nom="";
    identifiant="";
    role="" ;
    salaire="" ;
}
gestion_personnel::gestion_personnel(QString nom ,QString identifiant ,QString role,QString salaire )
{
    this->nom=nom ;
    this->identifiant=identifiant;
    this->role=role;

    this->salaire=salaire;
}


void gestion_personnel::setnom(QString n) { nom = n ;}
void gestion_personnel::setid(QString id){identifiant=id;}
void gestion_personnel::setrole(QString r) {role =r;}
void gestion_personnel::setsalaire(QString s) {salaire =s;}
QString gestion_personnel::getnom() {return nom;}
QString gestion_personnel::getid() {return identifiant;}
QString gestion_personnel::getrole(){return role ;}
QString gestion_personnel::getsalaire(){return salaire ;}
bool gestion_personnel:: ajouter_personnel()
{
    QSqlQuery query ;
    query.prepare("INSERT INTO PERSONNEL(NOM,IDENTIFIANT,ROLE,SALAIRE)VALUES(:nom,:identifiant,:role,:salaire)");
    query.bindValue(":nom",nom) ;
    query.bindValue(":identifiant",identifiant) ;
    query.bindValue(":role",role) ;
     query.bindValue(":salaire",salaire) ;
    return query.exec();

}
QSqlQueryModel * gestion_personnel::afficher_personnel()
{
    QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM PERSONNEL ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("ROLE"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("SALAIRE"));

return model ;
}

bool gestion_personnel::suprimerpersonnel(QString ident)
{
    QSqlQuery query ;
    query.prepare("delete from PERSONNEL where IDENTIFIANT=:identifiant");
    query.bindValue(":identifiant",ident);
    return  query.exec();
}




QSqlQueryModel *afficher_personnel();

