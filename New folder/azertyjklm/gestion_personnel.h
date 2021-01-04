
#ifndef GESTION_PERSONNEL_H
#define GESTION_PERSONNEL_H
#include<QString>
#include<QSqlQueryModel>
#include <QSqlQuery>

class gestion_personnel

        {
        public:

            QString getnom();
            int getid();
            QString getprenom();
             QString getnbrj();
             QString getidr();
           gestion_personnel();
           gestion_personnel(int identifiant,QString nom  ,QString prenom,QString nbrj,QString idr );
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
            QSqlQueryModel * recherche(int);

private:
           QString nom  ,prenom ,nbrj,idr ;
           int identifiant;

};

#endif // GESTION_PERSONNEL_H
