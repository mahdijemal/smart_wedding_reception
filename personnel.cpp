
#include "personnel.h"
#include "ui_personnel.h"
#include"gestion_personnel.h"
#include<QString>

#include<QMessageBox>

personnel::personnel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::personnel)
{
    ui->setupUi(this);


}

personnel::~personnel()
{
    delete ui;

}

void personnel::on_ajouter_clicked()

    {
      QString nom =ui->nom->text();
      QString identifiant =ui->identifiant->text();
       QString role =ui->role->text();
     QString salaire =ui->salaire->text();
      gestion_personnel p(nom,identifiant,role,salaire) ;
      bool test = p.ajouter_personnel();
      if (test)

      {
          ui->tableView1->setModel(pers.afficher_personnel());

          //QMessageBox::information(nullptr, QObject::tr("ajouter un personnel"),
                               //  QObject::tr("personnel ajouter.\n"));


    }
      else { //QMessageBox::critical(nullptr, QObject::tr("ajouter un personnel"),
                                     // QObject::tr("personnel non ajouter.\n"));

      }
    }

void personnel::on_supprimer_clicked()
{
    QString id =ui->identifiant_supp->text();
    bool test =pers.suprimerpersonnel(id);
    if (test)
    {ui->tableView1->setModel(pers.afficher_personnel());
}}
