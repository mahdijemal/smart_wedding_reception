#include "role.h"

role::role()
{idrole="";
    nomrole="";
    salaire="";

}
role::role(QString idrole,QString nomrole,QString salaire)
{
    this->idrole=idrole;
    this->nomrole=nomrole;
    this->salaire=salaire;


}
void role::setidrole(QString ide){idrole=ide;}
void role::setnomrole(QString nr){nomrole=nr;}
void role::setsalaire(QString s){salaire=s;}
QString role::getidrole() {return idrole;}
QString role::getnomrole() {return nomrole;}
QString role::getsalaire() {return salaire;}

bool role:: ajouter_role()
{
    QSqlQuery query ;
    query.prepare("INSERT INTO ROLE(IDENTIFIANT,NOM_ROLE,SALAIRE)VALUES(:idrole,:nomrole,:salaire)");

    query.bindValue(":idrole",idrole) ;
     query.bindValue(":nomrole",nomrole) ;
    query.bindValue(":salaire",salaire) ;

    return query.exec();

}
QSqlQueryModel * role::afficher_role()
{
    QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM ROLE ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_ROLE"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("SALAIRE"));


return model ;
}

QSqlQueryModel *afficher_role();
