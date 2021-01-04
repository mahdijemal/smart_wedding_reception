#include "salle.h"

salle::salle()
{
    int id_salle=0;
    int nbr_tab_rd=0;
    int nbr_tab_rect=0;
    int nbr_tab_ov  =0;
    int nbr_chs=0;
}
salle::salle(int id_salle,int nbr_tab_rd,int nbr_tab_rect,int nbr_tab_ov,int nbr_chs)
{
        this->id_salle=id_salle;
        this->nbr_tab_rd=nbr_tab_rd;
        this->nbr_tab_rect=nbr_tab_rect;
        this->nbr_tab_ov=nbr_tab_ov;
        this->nbr_chs=nbr_chs;
}

int salle::get_id_salle(){return id_salle;}
int salle:: get_nbr_tab_rd(){return nbr_tab_rd;}
int salle:: get_nbr_tab_rect(){return nbr_tab_rect;}
int salle::get_nbr_tab_ov(){return nbr_tab_ov;}
int salle::get_nbr_chs(){return nbr_chs;}

bool salle::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO salle (id_salle,nbr_tab_rd,nbr_tab_rect,nbr_tab_ov,nbr_chs)"
                    "VALUES (:id_salle,:nbr_tab_rd,:nbr_tab_rect,:nbr_tab_ov,:nbr_chs )");
    query.bindValue(":id_salle",id_salle);
    query.bindValue(":nbr_tab_rd",nbr_tab_rd);
    query.bindValue(":nbr_tab_rect",nbr_tab_rect);
    query.bindValue(":nbr_tab_ov",nbr_tab_ov);
    query.bindValue(":nbr_chs",nbr_chs);
    return query.exec();
}
QSqlQueryModel * salle::affichertri1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from salle order by id_salle");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr_tab_rd"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_tab_rect"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nbr_tab_ov"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_chs"));
    return model;
}
QSqlQueryModel * salle::affichertri1_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from salle order by id_salle desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr_tab_rd"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_tab_rect"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nbr_tab_ov"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_chs"));
    return model;
}
QSqlQueryModel * salle::affichertri2()
{
    QSqlQueryModel * model = new QSqlQueryModel();
     model->setQuery("Select * from salle order by nbr_tab_rd ");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_salle"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr_tab_rd"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_tab_rect"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("nbr_tab_ov"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_chs"));
     return model;
}
QSqlQueryModel * salle::affichertri2_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from salle order by nbr_tab_rd desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr_tab_rd"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_tab_rect"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nbr_tab_ov"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_chs"));
    return model;
}
QSqlQueryModel * salle::affichertri3()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from salle order by nbr_tab_rect");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr_tab_rd"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_tab_rect"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nbr_tab_ov"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_chs"));
    return model;
}
QSqlQueryModel * salle::affichertri3_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from salle order by nbr_tab_rect desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr_tab_rd"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_tab_rect"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nbr_tab_ov"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_chs"));
    return model;
}
QSqlQueryModel * salle::affichertri4()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from salle order by nbr_tab_ov");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr_tab_rd"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_tab_rect"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nbr_tab_ov"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_chs"));
    return model;
}
QSqlQueryModel * salle::affichertri4_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from salle order by nbr_tab_ov desc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr_tab_rd"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_tab_rect"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nbr_tab_ov"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_chs"));
    return model;
}
QSqlQueryModel * salle::affichertri5()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from salle order by nbr_chs");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr_tab_rd"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_tab_rect"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nbr_tab_ov"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_chs"));
    return model;
}
QSqlQueryModel * salle::affichertri5_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from salle order by nbr_chs desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr_tab_rd"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_tab_rect"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nbr_tab_ov"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_chs"));
    return model;
}
bool salle::supprimer(int id_salle)
{
QSqlQuery query;

query.prepare("Delete from salle where id_salle = :id_salle ");
query.bindValue(":id_salle", id_salle);
return    query.exec();
}
bool salle::modifier( int id_salle)
{
QSqlQuery query;


query.prepare("UPDATE salle  SET id_salle=:id_salle, nbr_tab_rd=:nbr_tab_rd, nbr_tab_rect=:nbr_tab_rect , nbr_tab_ov=:nbr_tab_ov, nbr_chs=:nbr_chs WHERE id_salle= :id_salle ");

query.bindValue(":id_salle", id_salle);
query.bindValue(":nbr_tab_rd", nbr_tab_rd);
query.bindValue(":nbr_tab_rect", nbr_tab_rect);
query.bindValue(":nbr_tab_ov", nbr_tab_ov);
query.bindValue(":nbr_chs", nbr_chs);





return    query.exec();
}
