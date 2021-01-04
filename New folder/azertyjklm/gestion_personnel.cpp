#include "gestion_personnel.h"

gestion_personnel::gestion_personnel()
{
  int  identifiant=0;
   QString nom="";
   QString prenom="" ;
   QString nbrj="" ;
   QString idr="";
}
gestion_personnel::gestion_personnel(int identifiant ,QString nom ,QString prenom,QString nbrj,QString idr )
{
    this->identifiant=identifiant;
    this->nom=nom ;
    this->prenom=prenom;
    this->nbrj=nbrj;
    this->idr=idr;
}

int gestion_personnel::getid() {return identifiant;}
QString gestion_personnel::getnom() {return nom;}
QString gestion_personnel::getprenom(){return prenom;}
QString gestion_personnel::getnbrj(){return nbrj ;}
QString gestion_personnel::getidr(){return idr ;}

bool gestion_personnel::ajouter(){
    QSqlQuery query;
    query.prepare("INSERT INTO personnel (identifiant,nom,prenom,nbrj,idr)"
                   "VALUES (:identifiant,:nom,:prenom,:nbrj,:idr)");
      query.bindValue(":identifiant",identifiant) ;
     query.bindValue(":nom",nom) ;
    query.bindValue(":prenom",prenom) ;
     query.bindValue(":nbrj",nbrj) ;
     query.bindValue(":idr",idr) ;
    return query.exec();
}
bool gestion_personnel::supprimer(int identifiant)
{
    QSqlQuery query ;
       query.prepare("delete from PERSONNEL where IDENTIFIANT=:identifiant");
       query.bindValue(":identifiant",identifiant);
       return  query.exec();
}
QSqlQueryModel * gestion_personnel::affichertri1()
{
    {QSqlQueryModel *model = new QSqlQueryModel;
           model->setQuery("SELECT * FROM PERSONNEL ORDER BY IDENTIFIANT ");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBRJ"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID ROLE"));

           return model ;
       }
}
bool  gestion_personnel::modifier(int identifiant)
{
    QSqlQuery query;
    query.prepare("UPDATE  PERSONNEL SET identifiant=:identifiant, nom=:nom ,PRENOM=:prenom,NBRJ=:nbrj,idr=:idr WHERE identifiant=:identifiant");
    query.bindValue(":identifiant",identifiant);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":nbrj",nbrj);
      query.bindValue(":idr",idr);
    return  query.exec();


}
QSqlQueryModel * gestion_personnel::affichertri1_1()
{
    {QSqlQueryModel *model = new QSqlQueryModel;
           model->setQuery("SELECT * FROM PERSONNEL ORDER BY IDENTIFIANT desc ");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBRJ"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID ROLE"));

           return model ;
       }
}
QSqlQueryModel * gestion_personnel::affichertri2_1()
{
    {QSqlQueryModel *model = new QSqlQueryModel;
           model->setQuery("SELECT * FROM PERSONNEL ORDER BY NOM desc ");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBRJ"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID ROLE"));

           return model ;
       }
}
QSqlQueryModel * gestion_personnel::affichertri2()
{
    {QSqlQueryModel *model = new QSqlQueryModel;
           model->setQuery("SELECT * FROM PERSONNEL ORDER BY NOM  ");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBRJ"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID ROLE"));

           return model ;
       }
}
QSqlQueryModel * gestion_personnel::affichertri3()
{
    {QSqlQueryModel *model = new QSqlQueryModel;
           model->setQuery("SELECT * FROM PERSONNEL ORDER BY PRENOM  ");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBRJ"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID ROLE"));

           return model ;
       }
}
QSqlQueryModel * gestion_personnel::affichertri3_1()
{
    {QSqlQueryModel *model = new QSqlQueryModel;
           model->setQuery("SELECT * FROM PERSONNEL ORDER BY PRENOM desc ");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBRJ"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID ROLE"));

           return model ;
       }
}
QSqlQueryModel * gestion_personnel::affichertri4()
{
    {QSqlQueryModel *model = new QSqlQueryModel;
           model->setQuery("SELECT * FROM PERSONNEL ORDER BY NBRJ  ");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBRJ"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID ROLE"));

           return model ;
       }
}
QSqlQueryModel * gestion_personnel::affichertri4_1()
{
    {QSqlQueryModel *model = new QSqlQueryModel;
           model->setQuery("SELECT * FROM PERSONNEL ORDER BY NBRJ desc  ");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBRJ"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID ROLE"));

           return model ;
       }
}
QSqlQueryModel * gestion_personnel::affichertri5_1()
{
    {QSqlQueryModel *model = new QSqlQueryModel;
           model->setQuery("SELECT * FROM PERSONNEL ORDER BY idr desc  ");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBRJ"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID ROLE"));

           return model ;
       }
}
QSqlQueryModel * gestion_personnel::affichertri5()
{
    {QSqlQueryModel *model = new QSqlQueryModel;
           model->setQuery("SELECT * FROM PERSONNEL ORDER BY idr   ");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBRJ"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID ROLE"));

           return model ;
       }
}
