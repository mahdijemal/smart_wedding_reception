#include "reservation.h"

reservation::reservation()
{
    identifiant=0;
    Sfete="";
    Nbande="";
    Nph="";
    Nser="";
    Ntr="";
    Nsec="";
}
reservation::reservation(int identifiant,QString Sfete,QString Nbande,QString Nph,QString Nser,QString Ntr,QString Nsec)
{
 this->identifiant=identifiant;
 this-> Sfete= Sfete;
 this-> Nbande= Nbande;
 this-> Nph= Nph;
 this->Nser=Nser;
 this-> Ntr= Ntr;
 this->Nsec=Nsec;
}
int reservation::get_identifiant(){return identifiant;}
QString reservation::get_Sfete(){return Sfete;}
QString reservation::get_Nbande(){return Nbande;}
QString reservation::get_Nph(){return Nph;}
QString reservation::get_Nser(){return Nser;}
QString reservation::get_Ntr(){return Ntr;}
QString reservation::get_Nsec(){return Nsec;}

bool reservation::ajouter(){
    QSqlQuery query;
    query.prepare("INSERT INTO reservation (identifiant,Sfete,Nbande,Nph,Nser,Ntr,Nsec)"
                   "VALUES (:identifiant,:Sfete,:Nbande,:Nph,:Nser,:Ntr,:Nsec)");
    query.bindValue(":identifiant",identifiant);
    query.bindValue(":Sfete",Sfete);
    query.bindValue(":Nbande",Nbande);
    query.bindValue(":Nph",Nph);
    query.bindValue(":Nser",Nser);
    query.bindValue(":Ntr",Ntr);
        query.bindValue(":Nsec",Nsec);
    return query.exec();
}

bool reservation::modifier(int identifiant)
{
    QSqlQuery query;

    query.prepare ("UPDATE reservation SET identifiant=:identifiant,Sfete=:Sfete,Nbande=:Nbande,Nph=:Nph,Nser=:Nser,Ntr=:Ntr,Nsec=:Nsec where identifiant=:identifiant");
    query.bindValue(":identifiant",identifiant);
    query.bindValue(":Sfete",Sfete);
    query.bindValue(":Nbande",Nbande);
    query.bindValue(":Nph",Nph);
    query.bindValue(":Nser",Nser);
    query.bindValue(":Ntr",Ntr);
    query.bindValue(":Nsec",Nsec);

    return    query.exec();
}
bool reservation::supprimer(int identifiant)
{
    QSqlQuery query;

    query.prepare("DELETE from reservation where identifiant =:identifiant ");
    query.bindValue(":identifiant",identifiant);

    return    query.exec();
}
QSqlQueryModel * reservation::affichertri1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by identifiant ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri1_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by identifiant desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri2()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by SFETE ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri2_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by SFETE desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri3()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by NBANDE ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri3_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by NBANDE desc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri4()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by Nph ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri4_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by Nph desc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri5()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by Nser ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri5_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by Nser desc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri6()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by Ntr ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri6_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by Ntr desc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri7()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by Nsec  ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
QSqlQueryModel * reservation::affichertri7_1()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * from reservation order by Nsec desc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sfete "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbande  "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nph "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nser "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Ntr "));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nsec  "));
    return model;
}
