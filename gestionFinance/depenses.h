#ifndef DEPENSES_H
#define DEPENSES_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class depenses
{
public:
    depenses();
    depenses(int,int,QString,int,QString);
    int get_id();
    int get_num();
    QString get_designiation();
    int get_montant();
     QString get_type();
     bool ajouter();
     QSqlQueryModel * afficher();
     QSqlQueryModel * affichertri1();
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
     int id,num_transaction,montant;
     QString designiation,type;
};

#endif // DEPENSES_H
