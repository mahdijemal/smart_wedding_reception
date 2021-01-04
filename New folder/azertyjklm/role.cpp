#include "role.h"

role::role()
{
 int idrole=0;
 QString nomrole="";
 QString salaire="";
}
role::role(int idrole,QString nomrole,QString salaire)
{
    this->idrole=idrole;
    this->nomrole=nomrole;
    this->salaire=salaire;
}
int role::getidrole() {return idrole;}
QString role::getnomrole() {return nomrole;}
QString role::getsalaire() {return salaire;}

bool role::ajouter(){
    QSqlQuery query;
    query.prepare("INSERT INTO ROLE (idrole,nomrole,salaire)"
                   "VALUES (:idrole,:nomrole,:salaire)");
    query.bindValue(":idrole",idrole);
    query.bindValue(":nomrole",nomrole);
    query.bindValue(":salaire",salaire);
    return query.exec();
}

bool role::modifier(int idrole)
{
    QSqlQuery query;

    query.prepare ("UPDATE role SET idrole=:idrole,nomrole=:nomrole, salaire=:salaire where idrole=:idrole ");
    query.bindValue(":idrole",idrole);
    query.bindValue(":nomrole",nomrole);
    query.bindValue(":salaire",salaire);
    return query.exec();
}
bool role::supprimer(int idrole)
{
    QSqlQuery query;

    query.prepare("DELETE from role where idrole=:idrole");
    query.bindValue(":idrole",idrole);

    return    query.exec();
}
QSqlQueryModel * role::affichertri1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from role order by idrole ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("SALAIRE "));
       return model;
}
QSqlQueryModel * role::affichertri1_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from role order by idrole desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("SALAIRE "));
       return model;
}
QSqlQueryModel * role::affichertri2()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from role order by nomrole ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("SALAIRE "));
       return model;
}
QSqlQueryModel * role::affichertri2_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from role order by nomrole desc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("SALAIRE "));
       return model;
}
QSqlQueryModel * role::affichertri3()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from role order by salaire ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("SALAIRE "));
       return model;
}
QSqlQueryModel * role::affichertri3_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from role order by salaire desc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("SALAIRE "));
       return model;
}

