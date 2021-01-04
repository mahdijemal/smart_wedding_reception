#ifndef INVITE_H
#define INVITE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
class invite
{
public:
    invite();
    invite(QString,int,int,int,int);


    QString get_nom_fam();
    int get_id_inv();
    int get_nbr_pers();
    int get_nbr_ad();
    int get_nbr_enf();
    bool ajouter();
    QSqlQueryModel * affichertri1();
    QSqlQueryModel * affichertri1_1();
    QSqlQueryModel * affichertri2();
    QSqlQueryModel * affichertri2_1();
    QSqlQueryModel * affichertri3();
    QSqlQueryModel * affichertri3_1();
    QSqlQueryModel * affichertri4();
    QSqlQueryModel * affichertri4_1();
    QSqlQueryModel * affichertri5();
    QSqlQueryModel * affichertri5_1();

    QSqlQueryModel * recherche(int);
    bool supprimer(int);
    bool modifier(int);

private :
    QString nom_fam;
    int id,nbr_pers,nbr_ad,nbr_enf;
};

#endif // INVITE_H
