#ifndef GESTION_PERSONNEL_H
#define GESTION_PERSONNEL_H
#include<QString>
#include<QSqlQueryModel>
#include <QSqlQuery>

class gestion_personnel

        {
        public:
            void setnom(QString n);
            void setid(QString id);
            void setrole(QString r);
            void setsalaire(QString s);
            QString getnom();
            QString getid();
            QString getrole();
             QString getsalaire();
           gestion_personnel();
           gestion_personnel(QString nom ,QString identifiant ,QString role,QString salaire );
           bool ajouter_personnel();
           QSqlQueryModel *afficher_personnel();
           bool suprimerpersonnel(QString identifiant);
        private:
            QString nom , identifiant ,role ,salaire ;


        };


#endif // GESTION_PERSONNEL_H
