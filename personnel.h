#ifndef PERSONNEL_H
#define PERSONNEL_H
#include<QLabel>
#include"gestion_personnel.h"
#include <QDialog>
#include "ui_personnel.h"
#include <QString>


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

private:
    Ui::personnel *ui;
 gestion_personnel pers;
};

#endif // PERSONNEL_H
