#include "invite.h"


invite::invite()
{
    nom_fam="";
    id=0;
    nbr_pers=0;
    nbr_ad=0;
    nbr_enf=0;
}
invite::invite( QString nom_fam,int id,int nbr_pers,int nbr_ad,int nbr_enf)
{
  this->nom_fam=nom_fam;
  this->id=id;
  this->nbr_pers=nbr_pers;
  this->nbr_ad=nbr_ad;
  this->nbr_enf=nbr_enf;
}
QString invite::get_nom_fam(){return nom_fam;}
int invite::get_id_inv(){return id;}
int invite::get_nbr_pers(){return nbr_pers;}
int invite::get_nbr_ad(){return nbr_ad;}
int invite::get_nbr_enf(){return nbr_enf;}

bool invite::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO invite (id,nom_fam,nbr_pers,nbr_ad,nbr_enf)"
                    "VALUES (:id,:nom_fam,:nbr_pers,:nbr_ad,:nbr_enf )");
    query.bindValue(":id", id);
    query.bindValue(":nom_fam", nom_fam);
    query.bindValue(":nbr_pers", nbr_pers);
    query.bindValue(":nbr_ad", nbr_ad);
    query.bindValue(":nbr_enf", nbr_enf);
    return query.exec();

}
QSqlQueryModel * invite::affichertri1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from invite order by nom_fam");
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("FAM NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NBR PER"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBR AD"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("NBR ENF"));
    return model;
}
QSqlQueryModel * invite::affichertri1_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from invite order by nom_fam desc");
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("FAM NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NBR PER"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBR AD"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("NBR ENF"));
    return model;
}
QSqlQueryModel * invite::affichertri2()
{
    QSqlQueryModel * model = new QSqlQueryModel();
     model->setQuery("Select * from invite order by id ");
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("FAM NAME"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("NBR PER"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBR AD"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("NBR ENF"));
     return model;
}
QSqlQueryModel * invite::affichertri2_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from invite order by id desc");
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("FAM NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NBR PER"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBR AD"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("NBR ENF"));
    return model;
}
QSqlQueryModel * invite::affichertri3()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from invite order by nbr_pers");
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("FAM NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NBR PER"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBR AD"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("NBR ENF"));
    return model;
}
QSqlQueryModel * invite::affichertri3_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from invite order by nbr_pers desc");
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("FAM NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NBR PER"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBR AD"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("NBR ENF"));
    return model;
}
QSqlQueryModel * invite::affichertri4()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from invite order by nbr_ad");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("FAM NAME"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NBR PER"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBR AD"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("NBR ENF"));
    return model;
}
QSqlQueryModel * invite::affichertri4_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from invite order by nbr_ad desc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("FAM NAME"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NBR PER"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBR AD"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("NBR ENF"));
    return model;
}
QSqlQueryModel * invite::affichertri5()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from invite order by nbr_enf");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("FAM NAME"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NBR PER"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBR AD"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("NBR ENF"));
    return model;
}
QSqlQueryModel * invite::affichertri5_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from invite order by nbr_enf desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("FAM NAME"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NBR PER"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBR AD"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("NBR ENF"));
    return model;
}
bool invite::supprimer(int id)
{
QSqlQuery query;

query.prepare("Delete from invite where id = :id ");
query.bindValue(":id", id);
return    query.exec();
}
bool invite::modifier( int id)
{
QSqlQuery query;


query.prepare("UPDATE invite SET nom_fam=:nom_fam, id=:id, nbr_pers=:nbr_pers , nbr_ad=:nbr_ad, nbr_enf=:nbr_enf WHERE id= :id ");

query.bindValue(":nom_fam", nom_fam);
query.bindValue(":id", id);
query.bindValue(":nbr_pers", nbr_pers);
query.bindValue(":nbr_ad", nbr_ad);
query.bindValue(":nbr_enf", nbr_enf);
return    query.exec();
}
