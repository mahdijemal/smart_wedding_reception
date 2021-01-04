#ifndef CLIENT_H
#define CLIENT_H

#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class client
{
public:
    client();
    client(int,int,QString,QString,QString,QString);
    int get_id();
    int get_idc();
    QString get_date();
    QString get_nom();
    QString get_prenom();
    QString get_Tfete();
    bool ajouter();
    bool supprimer(int);
    bool modifier(int);
    QSqlQueryModel *affichertri1();
    QSqlQueryModel *affichertri1_1();
    QSqlQueryModel *affichertri2();
    QSqlQueryModel *affichertri2_1();
    QSqlQueryModel *affichertri3();
    QSqlQueryModel *affichertri3_1();
    QSqlQueryModel *affichertri4();
    QSqlQueryModel *affichertri4_1();
    QSqlQueryModel *affichertri5();
    QSqlQueryModel *affichertri5_1();
    QSqlQueryModel *affichertri6();
    QSqlQueryModel *affichertri6_1();
    QSqlQueryModel * recherche(int);

private:
   int id,idc;
   QString nom,prenom,tfete,daate;


};

#endif // CLIENT_H
