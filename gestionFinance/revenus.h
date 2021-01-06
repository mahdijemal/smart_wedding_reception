#ifndef REVENUS_H
#define REVENUS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class revenus
{
public:
    revenus();
    revenus(int,QString,int,QString,int);
    int get_id_client();
    QString get_nom_client();
    int get_numero_transation();
    QString get_type();
    int get_montant();

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
    int id_client,numero_transation,montant;
    QString nom_client,type;

};

#endif // REVENUS_H
