#include "reservation.h"
#include<QString>

Reservation::Reservation()
{
            identifiant=0;
            Sfete="";
            Nbande="";
            Nph="";
            Nser="";
            Ntr="";
            Nsec="";



}

Reservation::Reservation(int identifiant,QString Sfete,QString Nbande,QString Nph,QString Nser,QString Ntr,QString Nsec)
{
 this->identifiant=identifiant;
 this-> Sfete= Sfete;
 this-> Nbande= Nbande;
 this-> Nph= Nph;
 this->Nser=Nser;
 this-> Ntr= Ntr;
 this->Nsec=Nsec;
}
int Reservation::get_identifiant(){return identifiant;}
QString Reservation::get_Sfete(){return Sfete;}
QString Reservation::get_Nbande(){return Nbande;}
QString Reservation::get_Nph(){return Nph;}
QString Reservation::get_Nser(){return Nser;}
QString Reservation::get_Ntr(){return Ntr;}
QString Reservation::get_Nsec(){return Nsec;}
bool Reservation::ajouter ()

{

  QSqlQuery query ;
QString res=QString::number(identifiant);
query.prepare("INSERT INTO Reservation(IDENTIFIANT,NOM_DU_BAND,NOM_DE_SALLE_DES_FETES,NOM_DU_PHOTOGRAPHE,NOM_DEQUIPE_SERVEUR,NOM_DU_TRAITEUR,NOM_DEQUIPE_SECURITER)VALUES(:identifiant,:Sfete,:Nbande,:Nph,:Nser,:Ntr,:Nsec)  ");
query.bindValue(":identifiant",res) ;
query.bindValue(":Sfete",Sfete) ;
query.bindValue(":Nbande",Nbande) ;
query.bindValue(":Nph",Nph) ;
query.bindValue(":Nser",Nser) ;
query.bindValue(":Ntr",Ntr) ;
query.bindValue(":Nsec",Nsec) ;
return  query.exec();

}
QSqlQueryModel * Reservation::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel;

    model->setQuery("SELECT* FROM Reservation");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
    model->setHeaderData(1, Qt::Horizontal,  QObject::tr("Sfete"));
    model->setHeaderData(2, Qt::Horizontal,  QObject::tr("Nbande"));
    model->setHeaderData(3, Qt::Horizontal,  QObject::tr("Nph"));
     model->setHeaderData(4, Qt::Horizontal,  QObject::tr("Nser"));
     model->setHeaderData(5, Qt::Horizontal,  QObject::tr("Ntr"));
     model->setHeaderData(6, Qt::Horizontal,  QObject::tr("Nsec"));

     return model;

}
bool Reservation::supprimer(int ref)
{
QSqlQuery query;

query.prepare("Delete from Reservation where IDENTIFIANT=:ref ");
query.bindValue(":ref", ref);
return    query.exec();
}
bool Reservation::modifier(int ref, QString Sfete,QString Nbande,QString Nph,QString Nser,QString Ntr,QString Nsec)
{QSqlQuery edit;
    edit.prepare("Update Reservation set NOM_DE_SALLE_DES_FETES=:Sfete,NOM_DU_BAND=:Nbande,NOM_DU_PHOTOGRAPHE=:Nph,NOM_DEQUIPE_SERVEUR=:Nser,NOM_DU_TRAITEUR=:Ntr,NOM_DEQUIPE_SECURITER=:Nsec where IDENTIFIANT =:ref");
    edit.bindValue(":ref",ref);
    edit.bindValue(":Sfete",Sfete) ;
     edit.bindValue(":Nbande",Nbande) ;
     edit.bindValue(":Nph",Nph) ;
     edit.bindValue(":Nser",Nser) ;
     edit.bindValue(":Ntr",Ntr) ;
     edit.bindValue(":Nsec",Nsec) ;


    return       edit.exec()  ;
}
bool Reservation:: rechercher (int identifiant )
{
    QSqlQuery query;
               query.prepare("Select * from Reservation where IDENTIFIANT= :IDENTIFIANT");
               query.bindValue(":IDENTIFIANT", identifiant);
               query.exec();
                QSqlQueryModel * model = new QSqlQueryModel();
              model->setQuery(query);
              if(model->rowCount() == 0){ return false;}//thabet e requete ili b3thetha el SQL heki el 7aja mawjouda wala la
           return  true;

}
QSqlQueryModel *Reservation:: tri()
{
    QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from Reservation order by IDENTIFIANT DESC");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifiant"));
     model->setHeaderData(1, Qt::Horizontal,  QObject::tr("Sfete"));
     model->setHeaderData(2, Qt::Horizontal,  QObject::tr("Nbande"));
     model->setHeaderData(3, Qt::Horizontal,  QObject::tr("Nph"));
     model->setHeaderData(4, Qt::Horizontal,  QObject::tr("Nser"));
     model->setHeaderData(5, Qt::Horizontal,  QObject::tr("Ntr"));
     model->setHeaderData(6, Qt::Horizontal,  QObject::tr("Nsec"));

     return model;



}
