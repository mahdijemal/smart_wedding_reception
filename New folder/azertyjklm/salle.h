#ifndef SALLE_H
#define SALLE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class salle
{
public:
    salle();
    salle(int,int,int,int,int);

        int get_id_salle();
        int get_nbr_tab_rd();
        int get_nbr_tab_rect();
        int get_nbr_tab_ov();
        int get_nbr_chs();

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
        int id_salle,nbr_tab_rd,nbr_tab_rect,nbr_tab_ov,nbr_chs;

};

#endif // SALLE_H
