#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"client.h"
#include<QMessageBox>
#include<QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(tmpclient.afficher());

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

void MainWindow::on_background_2_linkActivated(const QString &link)
{

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
void MainWindow::on_pushButton_10_clicked()
{
    int id_ch = ui->reference_sup_e->text().toInt();
    bool test=tmpclient.supprimer(id_ch);
    if(test)
    {ui->tableView->setModel(tmpclient.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un employe"),
                    QObject::tr("Employé supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
}

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
