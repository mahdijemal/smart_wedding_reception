#ifndef RESERVATION_H
#define RESERVATION_H

#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class reservation
{
public:
    reservation();
    reservation(int,QString,QString,QString,QString,QString,QString);
     int get_identifiant();
     QString get_Sfete();
     QString get_Nbande();
     QString get_Nph();
     QString get_Nser();
     QString get_Ntr();
     QString get_Nsec();

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
    QSqlQueryModel *affichertri7();
    QSqlQueryModel *affichertri7_1();
    QSqlQueryModel * recherche(int);

private:

    int identifiant;
    QString Sfete, Nbande,Nph, Nser, Ntr, Nsec;

};

#endif // RESERVATION_H

