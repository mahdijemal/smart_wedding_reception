#include "depenses.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

depenses::depenses()
{
 int id=0;
 int num_transaction=0;
 QString designiation="";
 int montant =0;
 QString type="";
}
depenses::depenses(int id, int num_transaction,QString designiation,int montant,QString type )
{
    this->id=id;
    this->num_transaction=num_transaction;
    this->designiation=designiation;
    this->montant=montant;
    this->type=type;
}
int depenses::get_id(){return id;}
int depenses::get_num(){return num_transaction;}
QString depenses::get_designiation(){return designiation;}
int depenses::get_montant(){return montant;}
QString depenses::get_type(){return type;}

bool depenses::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO depenses (id,num_transaction,designiation,montant,type)"
                    "VALUES (:id,:num_transaction,:designiation,:montant,:type )");
    query.bindValue(":id",id);
    query.bindValue(":num_transaction",num_transaction);
    query.bindValue(":designiation",designiation);
    query.bindValue(":montant",montant);
    query.bindValue(":type",type);
    return query.exec();
}
QSqlQueryModel * depenses::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from depenses order by id");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Num De Transaction"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Designiation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Montant"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
    return model;
}
QSqlQueryModel * depenses::affichertri1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from depenses order by id desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Num De Transaction"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Designiation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Montant"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
    return model;
}
QSqlQueryModel * depenses::affichertri2()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from depenses order by num_transaction");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Num De Transaction"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Designiation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Montant"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
    return model;
}
QSqlQueryModel * depenses::affichertri2_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from depenses order by num_transaction desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Num De Transaction"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Designiation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Montant"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
    return model;
}
QSqlQueryModel * depenses::affichertri3()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from depenses order by designiation");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Num De Transaction"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Designiation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Montant"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
    return model;
}
QSqlQueryModel * depenses::affichertri3_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from depenses order by designiation desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Num De Transaction"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Designiation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Montant"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
    return model;
}
QSqlQueryModel * depenses::affichertri4()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from depenses order by montant");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Num De Transaction"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Designiation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Montant"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
    return model;
}
QSqlQueryModel * depenses::affichertri4_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from depenses order by montant desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Num De Transaction"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Designiation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Montant"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
    return model;
}
QSqlQueryModel * depenses::affichertri5()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from depenses order by type");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Num De Transaction"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Designiation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Montant"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
    return model;
}
QSqlQueryModel * depenses::affichertri5_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from depenses order by type desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Num De Transaction"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Designiation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Montant"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
    return model;
}
bool depenses::supprimer(int id)
{
QSqlQuery query;

query.prepare("Delete from depenses where id = :id ");
query.bindValue(":id", id);
return    query.exec();
}
bool depenses::modifier( int id)
{
QSqlQuery query;


query.prepare("UPDATE depenses SET id=:id, num_transaction=:num_transaction, designiation=:designiation , montant=:montant, type=:type WHERE id= :id ");

query.bindValue(":id", id);
query.bindValue(":num_transaction", num_transaction);
query.bindValue(":designiation", designiation);
query.bindValue(":montant", montant);
query.bindValue(":type", type);





return    query.exec();
}

