#ifndef RESERVATION_H
#define RESERVATION_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>


class Reservation

        {
        public:
           Reservation();
           Reservation(int,QString,QString,QString,QString,QString,QString);
            QString get_Sfete();
            QString get_Nbande();
            QString get_Nph();
            QString get_Nser();
            QString get_Ntr();
            QString get_Nsec();
            int get_identifiant();
            bool ajouter();
            bool supprimer(int id_r);
            bool modifier(int ref,QString Sfete,QString Nbande,QString Nph,QString Nser,QString Ntr,QString Nsec);
            QSqlQueryModel *afficher();
            bool rechercher (int identifiant );
               QSqlQueryModel * tri();

        private:
           int identifiant;
           QString Sfete, Nbande,Nph, Nser, Ntr, Nsec;


        };



#endif // RESERVATION_H
