
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

    {  QString identifiant =ui->identifiant->text();
      QString nom =ui->nom->text();

       QString prenom =ui->prenom->text();
     QString nbrj =ui->nbj->text();
      gestion_personnel p(nom,identifiant,prenom,nbrj) ;
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

void personnel::on_afficher_clicked()
{
     ui->tableView1->setModel(pers.afficher_personnel());
}

void personnel::on_modifier_clicked()
{
    QString identifiant =ui->modid->text();
      QString nom =ui->modnom->text();
      QString prenom=ui->modprenom->text();
         QString nbrj=ui->modnbrj->text();
    bool test = pers.modifierpersonnel(identifiant,nom,prenom,nbrj);

      if(test)
      {
          ui->tableView1->setModel(pers.afficher_personnel());


      }
      else {

      }
}

void personnel::on_ajouter_role_clicked()
{QString idrole =ui->idrole->text();
    QString nomrole =ui->nomrole->text();

     QString salaire =ui->salaire->text();

    role r(idrole,nomrole,salaire) ;
    bool test = r.ajouter_role();
    if (test)

    {
        ui->tableView2->setModel(r.afficher_role());

        //QMessageBox::information(nullptr, QObject::tr("ajouter un personnel"),
                             //  QObject::tr("personnel ajouter.\n"));


  }
    else { //QMessageBox::critical(nullptr, QObject::tr("ajouter un personnel"),
                                   // QObject::tr("personnel non ajouter.\n"));

    }

}
