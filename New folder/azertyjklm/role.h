#ifndef ROLE_H
#define ROLE_H

#include<QString>
#include<QSqlQueryModel>
#include <QSqlQuery>
class role
{
public:
    role();

    int getidrole();
    QString getnomrole();
    QString getsalaire();
    role(int idrole ,QString nomrole ,QString salaire );
    bool ajouter();
    bool supprimer(int);
    bool modifier(int);
    QSqlQueryModel *affichertri1();
    QSqlQueryModel *affichertri1_1();
    QSqlQueryModel *affichertri2();
    QSqlQueryModel *affichertri2_1();
    QSqlQueryModel *affichertri3();
    QSqlQueryModel *affichertri3_1();
     QSqlQueryModel * recherche(int);
private :
     int idrole;
     QString nomrole,salaire;
};

#endif // ROLE_H
