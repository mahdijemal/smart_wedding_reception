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
    Client(int,QString,QString,QString);
    QString get_nom();
    QString get_prenom();
    QString get_Tfete();
    int get_id();
    bool ajouter();
    bool supprimer(int id_c);
    bool modifier(int ref,QString prenom,QString nom,QString Tfete);
    QSqlQueryModel *afficher();

private:
   int id;
   QString nom,prenom,Tfete;


};

#endif // CLIENT_H
