#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"client.h"
#include "reservation.h"
#include<QMessageBox>
#include<QString>
#include "smtp.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(tmpclient.afficher());


    ui->tableView_2->setModel(tmpreservation.afficher());

}




MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_ajouter_clicked()
{
  int id=ui->lineEdit_id->text().toInt();
  int date=ui->lineEdit_date->text().toInt();
  QString nom=ui->lineEdit_nom->text();
  QString prenom=ui->lineEdit_prenom->text();
  QString Tfete=ui->lineEdit->text();
  Client e(date,id,nom,prenom,Tfete);
  bool test= e.ajouter();

  if(test){
      ui->tableView->setModel(tmpclient.afficher());
      QMessageBox::information(nullptr,QObject::tr("AJOUTER UN CLIENT"),
                                    QObject::tr("CLIENT AJOUTER"),
                                    QMessageBox::Ok);}
  else{QMessageBox::critical(nullptr,QObject::tr("AJOUTER UN CLIENT"),
                             QObject::tr("CLIENT NON AJOUTER"),
                             QMessageBox::Cancel);}
}

void MainWindow::on_pushButton_clicked()
{
    int id_ch = ui->reference_sup_e->text().toInt();
    bool test=tmpclient.supprimer(id_ch);
    if(test)
    {ui->tableView->setModel(tmpclient.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un employe"),
                    QObject::tr("Employé supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}}

void MainWindow::on_pushButton_2_clicked()
{
    int id_c = ui->lineEdit_2->text().toInt();
    int date_r=ui->lineEdit_6->text().toInt();
    bool test=tmpclient.modifier(id_c,date_r,ui->lineEdit_nom_3->text(),ui->lineEdit_prenom_3->text(),ui->lineEdit_5->text());
    if(test)
    {ui->tableView->setModel(tmpclient.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un employe"),
                    QObject::tr("Employé modifier.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}}





void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}



void MainWindow::on_pushButton_15_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_9_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_17_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_18_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_19_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_21_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_20_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_25_clicked()
{
    bool  q=tmpclient.rechercher(ui->lineEdit_7->text().toInt());

      if(  q== true){
          QMessageBox::information(nullptr,QObject::tr("OK"),
                               QObject::tr("Found ! this Vehicule already exists"),
                               QMessageBox::Ok);
      }else{
          QMessageBox::information(nullptr,QObject::tr("not OK"),
                               QObject::tr("Not Found ! this Vehicule does not exist"),
                               QMessageBox::Ok);
      }
}

void MainWindow::on_pushButton_26_clicked()
{
    ui->tableView->setModel(tmpclient.tri());
}


void MainWindow::on_pushButton_ajouter_2_clicked()
{
    {
      int identifiant=ui->lineEdit_id_2->text().toInt();
      QString Sfete=ui->lineEdit_NF->text();
      QString Nbande=ui->lineEdit_B->text();
      QString Nph=ui->lineEdit_ph->text();
      QString Nser=ui->lineEdit_ser->text();
      QString Ntr=ui->lineEdit_nt->text();
      QString Nsec=ui->lineEdit_secu->text();
      Reservation r(identifiant,Sfete,Nbande,Nph,Nser,Ntr,Nsec);
      bool test= r.ajouter();

      if(test){
          ui->tableView->setModel(tmpreservation.afficher());
          QMessageBox::information(nullptr,QObject::tr("AJOUTER UNE RESERVATION"),
                                        QObject::tr("RESERVATION AJOUTER"),
                                        QMessageBox::Ok);}
      else{QMessageBox::critical(nullptr,QObject::tr("AJOUTER UNE RESERVATION"),
                                 QObject::tr("RESERVATION NON AJOUTER"),
                                 QMessageBox::Cancel);}
    }
}

void MainWindow::on_pushButton_rechercheR_clicked()
{
    bool  q=tmpreservation.rechercher(ui->lineEdit_R->text().toInt());

          if(  q== true){
              QMessageBox::information(nullptr,QObject::tr("OK"),
                                   QObject::tr("Found ! this Vehicule already exists"),
                                   QMessageBox::Ok);
          }else{
              QMessageBox::information(nullptr,QObject::tr("not OK"),
                                   QObject::tr("Not Found ! this Vehicule does not exist"),
                                   QMessageBox::Ok);
}}

void MainWindow::on_pushButton_triR_clicked()
{
    ui->tableView_2->setModel(tmpreservation.tri());
}

void MainWindow::on_pushButton_supprimer_clicked()
{
    int id_r = ui->reference_sup_e_2->text().toInt();
    bool test=tmpreservation.supprimer(id_r);
    if(test)
    {ui->tableView_2->setModel(tmpreservation.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un employe"),
                    QObject::tr("Employé supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}}

void MainWindow::on_pushButton_modifierR_clicked()
{
    int id_r = ui->lineEdit_id_4->text().toInt();
    bool test=tmpreservation.modifier(id_r,ui->lineEdit_NF->text(),ui->lineEdit_B->text(),ui->lineEdit_ph->text(),ui->lineEdit_ser->text(),ui->lineEdit_nt->text(),ui->lineEdit_secu->text());
    if(test)
    {ui->tableView_2->setModel(tmpreservation.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un employe"),
                    QObject::tr("Employé modifier.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}}
