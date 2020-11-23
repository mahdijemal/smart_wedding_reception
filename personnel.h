#ifndef PERSONNEL_H
#define PERSONNEL_H
#include<QLabel>
#include"gestion_personnel.h"
#include <QDialog>
#include "ui_personnel.h"
#include <QString>
#include"role.h"


namespace Ui {
class personnel;
}

class personnel : public QDialog
{
    Q_OBJECT

public:
    explicit personnel(QWidget *parent = nullptr);
    ~personnel();

private slots:
    void on_ajouter_clicked();

    void on_supprimer_clicked();

    void on_afficher_clicked();


    void on_modifier_clicked();

    void on_ajouter_role_clicked();

private:
    Ui::personnel *ui;
 gestion_personnel pers;
 role r;
};

#endif // PERSONNEL_H
