#include "revenus.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
revenus::revenus()
{
    int id_client =0;
    QString nom_client ="";
    int numero_transation = 0;
    QString type ="";
    int montant =0;
}
revenus::revenus(int id_client
                ,QString nom_client
                ,int numero_transation
                ,QString type
                , int montant)
{
    this->id_client=id_client;
    this->nom_client=nom_client;
    this->numero_transation=numero_transation;
    this->type=type;
    this->montant=montant;
}

int revenus::get_id_client(){return id_client;}
QString revenus::get_nom_client(){return nom_client;}
int revenus::get_numero_transation(){return numero_transation;}
QString revenus::get_type(){return type;}
int revenus::get_montant(){return montant;}
bool revenus::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO revenus (id_client,nom_client,numero_transation,type,montant)"
                    "VALUES (:id_client,:nom_client,:numero_transation,:type,:montant )");
    query.bindValue(":id_client",id_client);
    query.bindValue(":nom_client",nom_client);
    query.bindValue(":numero_transation",numero_transation);
    query.bindValue(":type",type);
    query.bindValue(":montant",montant);
    return query.exec();
}
QSqlQueryModel * revenus::affichertri1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from revenus order by id_client");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("numero_transation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("montant"));
    return model;
}
QSqlQueryModel * revenus::affichertri1_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from revenus order by id_client desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("numero_transation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("montant"));
    return model;
}
QSqlQueryModel * revenus::affichertri2()
{
    QSqlQueryModel * model = new QSqlQueryModel();
     model->setQuery("Select * from revenus order by nom_client ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("numero_transation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("montant"));
    return model;
}
QSqlQueryModel * revenus::affichertri2_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from revenus order by nom_client desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("numero_transation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("montant"));
    return model;
}
QSqlQueryModel * revenus::affichertri3()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from revenus order by numero_transation");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("numero_transation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("montant"));
    return model;
}
QSqlQueryModel * revenus::affichertri3_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from revenus order by numero_transation desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("numero_transation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("montant"));
    return model;
}
QSqlQueryModel * revenus::affichertri4()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from revenus order by type");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("numero_transation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("montant"));
    return model;
}
QSqlQueryModel * revenus::affichertri4_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from revenus order by type desc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("numero_transation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("montant"));
    return model;
}
QSqlQueryModel * revenus::affichertri5()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from revenus order by montant");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("numero_transation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("montant"));
    return model;
}
QSqlQueryModel * revenus::affichertri5_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from revenus order by montant desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("numero_transation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("montant"));
    return model;
}
bool revenus::supprimer(int id_client)
{
QSqlQuery query;

query.prepare("Delete from revenus where id_client = :id_client ");
query.bindValue(":id_client", id_client);
return    query.exec();
}
bool revenus::modifier( int id_client)
{
QSqlQuery query;


query.prepare("UPDATE revenus SET id_client=:id_client, nom_client=:nom_client, numero_transation=:numero_transation , type=:type, montant=:montant WHERE id_client= :id_client ");

query.bindValue(":id_client", id_client);
query.bindValue(":nom_client", nom_client);
query.bindValue(":numero_transation", numero_transation);
query.bindValue(":type", type);
query.bindValue(":montant", montant);





return    query.exec();
}
