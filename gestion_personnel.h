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
            void setprenom(QString p);
            void setnbrj(QString nb);
            QString getnom();
            QString getid();
            QString getprenom();
             QString getnbrj();
           gestion_personnel();
           gestion_personnel(QString nom ,QString identifiant ,QString prenom,QString nbrj );
           bool ajouter_personnel();
           QSqlQueryModel *afficher_personnel();
           bool suprimerpersonnel(QString identifiant);
        private:
            QString nom , identifiant ,prenom ,nbrj ;


        };


#endif // GESTION_PERSONNEL_H
