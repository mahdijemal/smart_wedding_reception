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
    Client(int,int,QString,QString,QString);
    QString get_nom();
    QString get_prenom();
    QString get_Tfete();
    int get_id();
     int get_date();
    bool ajouter();
    bool supprimer(int id_c);
    bool modifier(int ref,int date,QString prenom,QString nom,QString Tfete);
    QSqlQueryModel *afficher();

private:
   int id,date;
   QString nom,prenom,Tfete;


};

#endif // CLIENT_H
