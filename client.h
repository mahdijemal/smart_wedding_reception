#ifndef CLIENT_H
#define CLIENT_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>


class Client
{
public:
    Client();
    Client(int,int,int,QString,QString,QString);
    QString get_nom();
    QString get_prenom();
    QString get_Tfete();
    int get_id();
    int get_idc();
     int get_date();
    bool ajouter();
    bool supprimer(int id_c);
    bool modifier(int ref,int date,int idc,QString prenom,QString nom,QString Tfete);
    QSqlQueryModel *afficher();
    bool rechercher (int id );
       QSqlQueryModel * tri();

private:
   int id,date,idc;
   QString nom,prenom,Tfete;


};

#endif // CLIENT_H
