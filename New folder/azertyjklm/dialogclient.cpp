#include "dialogclient.h"
#include "ui_dialogclient.h"
#include "client.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include "dialoglogin.h"
#include "ui_dialoglogin.h"
#include "dialogmenu.h"
#include "ui_dialogmenu.h"
#include "dialogreservation.h"
#include "ui_dialogreservation.h"
#include "dialogfin.h"
#include "ui_dialogfin.h"
#include <QPrinter>
#include <QPrintDialog>
#include "dialoginv.h"
#include "stqt_type.h"
#include "statistiques.h"

dialogclient::dialogclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogclient)
{
    ui->setupUi(this);
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->label_14->hide();
    ui->edit_idc->hide();
    ui->edit_nom->hide();
    ui->edit_prenom->hide();
    ui->edit_tfete->hide();
    ui->editDate->hide();
    ui->editOk->hide();
    ui->txt_des ->hide();
    ui-> txt_id->hide();
    ui->txt_mont ->hide();
    ui->txt_num ->hide();
    ui->txt_type ->hide();
    ui->txt_tfete->hide();
    ui->pushButton_2 ->hide();
    ui->pushButton_3 ->hide();
    ui->txt_id->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->txt_num->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->lineEdit_id->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->lineEdit_idc->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->deleteLine->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->edit_idc->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->id_asc->hide();
    ui->des_asc->hide();
    ui->montant_asc->hide();
    ui->num_asc->hide();
    ui->type_asc->hide();
    ui->type_asc_2->hide();

}

dialogclient::~dialogclient()
{
    delete ui;
}

void dialogclient::on_ajouter_clicked()
{
    int id=ui->lineEdit_id->text().toInt();
    int idc=ui->lineEdit_idc->text().toInt();
    QString daate=ui->lineEdit_date->text();
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString tfete=ui->lineEdit_Tfete->text();
    client e(id,idc,daate,nom,prenom,tfete);
    bool test=e.ajouter();
    if (test)
    {
        ui->tabcli->setModel(tmpcli.affichertri1());
             ui->lineEdit_id->clear();
             ui->lineEdit_idc->clear();
             ui->lineEdit_date->clear();
             ui->lineEdit_nom->clear();
             ui->lineEdit_prenom->clear();
             ui->lineEdit_Tfete->clear();
             QMessageBox::information(nullptr, QObject::tr("CLIENT "),
                                   QObject::tr("CLIENT ADDED SUCCESFULY ! ! .\n"
                                               "Click CLOSE TO EXIT."), QMessageBox::Close);
    }
    else
                 QMessageBox::critical(nullptr, QObject::tr("Ajouter Depense"),
                             QObject::tr("Erreur ! Remplir les informations.\n"
                                         "Click Close to exit."), QMessageBox::Close);



}

void dialogclient::on_tabcli_activated(const QModelIndex &index)
{
    QString val=ui->tabcli->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("Select * from client where id='"+val+"'");
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->txt_id->setText(qry.value(0).toString());
            ui->txt_num->setText(qry.value(1).toString());
            ui->txt_des->setText(qry.value(2).toString());
            ui->txt_mont->setText(qry.value(3).toString());
            ui->txt_type->setText(qry.value(4).toString());
            ui->txt_tfete->setText(qry.value(5).toString());
            ui->txt_des ->show();
            ui-> txt_id->show();
            ui->txt_mont ->show();
            ui->txt_num ->show();
            ui->txt_type ->show();
            ui->txt_tfete->show();
            ui->pushButton_2 ->show();
            ui->pushButton_3 ->show();

        }
    }
}

void dialogclient::on_tabWidget_currentChanged(int index)
{
    ui->tabcli->setModel(tmpcli.affichertri1());
}

void dialogclient::on_logout_clicked()
{
    this->close();
    dialoglogin d;
    d.exec();
}


void dialogclient::on_logout_2_clicked()
{
    this->close();
}

void dialogclient::on_pushButton_2_clicked()
{
    int id = ui->txt_id->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from client where id = ?");
    query.addBindValue(id);
    query.exec();
    if(query.next()) {
    bool test=tmpcli.supprimer(id);
    if(test)
    {
        ui->tabcli->setModel(tmpcli.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("CLIENT"),
                    QObject::tr("CLIENT DELETE.\n"
                                "Click Cancel to exit."), QMessageBox::Close);

    }}

    else
    QMessageBox::critical(nullptr, QObject::tr("CLIENT"),
                    QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void dialogclient::on_delete_btn_clicked()
{
    int id = ui->deleteLine->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from client where id = ?");
    query.addBindValue(id);
    query.exec();
    if(query.next()) {
    bool test=tmpcli.supprimer(id);
    if(test)
    {
        ui->tabcli->setModel(tmpcli.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("CLIENT"),
                    QObject::tr("CLIENT DELETED SUCCESFULY.\n"
                                "Click Cancel to exit."), QMessageBox::Close);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("CLIENT"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);}
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Depense"),
                    QObject::tr("Erreur ID NOT FOUND !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialogclient::on_pushButton_3_clicked()
{
    int id=ui->txt_id->text().toInt();
     int idc=ui->txt_num->text().toInt();
     QString daate=ui->txt_des->text();
     QString nom=ui->txt_mont->text();
     QString prenom=ui->txt_type->text();
     QString tfete=ui->txt_tfete->text();
     client e(id,idc,daate,nom,prenom,tfete);
      bool test=e.modifier(id);
    if(test)
    {
        ui->tabcli->setModel(tmpcli.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("CLIENT"),
                    QObject::tr("CLIENT MODIFIED! .\n"
                                "Click Cancel to exit."), QMessageBox::Close);
    }
    else
    { QMessageBox::critical(nullptr, QObject::tr("CLIENT"),
                    QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}}

void dialogclient::on_edit_clicked()
{
    int id = ui->idEdit ->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from client where id=?");
    query.addBindValue(id);
    query.exec();
    if(query.next()){
     ui->editOk->show();
     ui->label_4->show();
     ui->label_5->show();
     ui->label_6->show();
     ui->label_7->show();
     ui->label_14->show();
     ui->editDate->show();
     ui->edit_idc->show();
     ui->edit_nom->show();
      ui->edit_tfete->show();
      ui->edit_prenom->show();

    }
            else
    {
        QMessageBox::critical(nullptr, QObject::tr("EDIT"),
         QObject::tr("\n ID not Found !\n"), QMessageBox::Cancel);

    }

}

void dialogclient::on_editOk_clicked()
{

    int id=ui->idEdit->text().toInt();
         int idc=ui->edit_idc->text().toInt();
         QString daate=ui->editDate->text();
         QString nom=ui->edit_nom->text();
         QString prenom=ui->edit_prenom->text();
         QString tfete=ui->edit_tfete->text();
         client e(id,idc,daate,nom,prenom,tfete);
          bool test=e.modifier(id);
        if(test)
        {
            ui->tabcli->setModel(tmpcli.affichertri1());
            QMessageBox::information(nullptr, QObject::tr("CLIENT"),
                        QObject::tr("CLIENT MODIFIED! .\n"
                                    "Click Cancel to exit."), QMessageBox::Close);

            ui->label_4->hide();
            ui->label_5->hide();
            ui->label_6->hide();
            ui->label_7->hide();
            ui->label_14->hide();
            ui->edit_idc->hide();
            ui->edit_nom->hide();
            ui->edit_prenom->hide();
            ui->edit_tfete->hide();
            ui->editDate->hide();
            ui->editOk->hide();
            ui->idEdit->clear();
        }
        else
        QMessageBox::critical(nullptr, QObject::tr("CLIENT"),
                        QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialogclient::on_pushButton_clicked()
{

    QPrinter *imprimante;
    QPrintDialog pd(ui->tabcli);
    if(pd.exec()== QDialog::Accepted) return;
    imprimante=pd.printer();
    imprimante->setOutputFormat(QPrinter::PdfFormat);
    imprimante->setOutputFileName("C:/Users/ME/Desktop/pdf/doc.pdf");
}



void dialogclient::on_search_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();
    query->prepare("SELECT * FROM client WHERE id LIKE'"+arg1+"%' or idc LIKE'"+arg1+"%' or daate LIKE'"+arg1+"%' or nom like'"+arg1+"' or prenom like '"+arg1+"'  or tfete like '"+arg1+"'");
     query->exec();
    if(query->next())
    {
     model->setQuery(*query);
     ui->tabcli->setModel(model); }
    else {
        QMessageBox::critical(nullptr, QObject::tr("CLIENT"),
                        QObject::tr("NO MATCH FOUND !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        ui->search->clear();

    }
}

void dialogclient::on_back_clicked()
{
    this->hide();
    dialogmenu d;
    d.exec();
}

void dialogclient::on_nextcrud_clicked()
{
    this->hide();
    dialogreservation d;
    d.exec();
}

void dialogclient::on_prevcrud_clicked()
{
    this->hide();
    dialogreservation d;
    d.exec();
}

void dialogclient::on_previousmodule_clicked()
{

    this->hide();
    dialogfin d;
    d.exec();
}

void dialogclient::on_id_desc_clicked()
{
    ui->tabcli->setModel(tmpcli.affichertri1_1());
    ui->id_desc->hide();
    ui->id_asc->show();
}

void dialogclient::on_id_asc_clicked()
{
    ui->tabcli->setModel(tmpcli.affichertri1());
    ui->id_asc->hide();
    ui->id_desc->show();
}

void dialogclient::on_num_asc_clicked()
{
    ui->tabcli->setModel(tmpcli.affichertri2());
    ui->num_asc->hide();
    ui->num_desc->show();
}

void dialogclient::on_num_desc_clicked()
{
    ui->tabcli->setModel(tmpcli.affichertri2_1());
    ui->num_desc->hide();
    ui->num_asc->show();
}

void dialogclient::on_des_asc_clicked()
{
    ui->tabcli->setModel(tmpcli.affichertri3());
    ui->des_asc->hide();
    ui->des_desc->show();
}

void dialogclient::on_des_desc_clicked()
{
    ui->tabcli->setModel(tmpcli.affichertri3_1());
    ui->des_desc->hide();
    ui->des_asc->show();
}

void dialogclient::on_montant_asc_clicked()
{
    ui->tabcli->setModel(tmpcli.affichertri4());
    ui->montant_asc->hide();
    ui->montant_desc->show();
}

void dialogclient::on_montant_desc_clicked()
{
    ui->tabcli->setModel(tmpcli.affichertri4_1());
    ui->montant_desc->hide();
    ui->montant_asc->show();
}

void dialogclient::on_type_asc_clicked()
{
    ui->tabcli->setModel(tmpcli.affichertri5());
    ui->type_asc->hide();
    ui->type_desc->show();
}

void dialogclient::on_type_desc_clicked()
{
    ui->tabcli->setModel(tmpcli.affichertri5_1());
    ui->type_desc->hide();
    ui->type_asc->show();
}

void dialogclient::on_type_asc_2_clicked()
{
    ui->tabcli->setModel(tmpcli.affichertri6());
    ui->type_asc_2->hide();
    ui->type_desc_2->show();
}

void dialogclient::on_type_desc_2_clicked()
{
    ui->tabcli->setModel(tmpcli.affichertri6_1());
    ui->type_desc_2->hide();
    ui->type_asc_2->show();
}

void dialogclient::on_nextmodule_clicked()
{
    this->hide();
    dialoginv d;
    d.exec();
}

void dialogclient::on_pushButton_4_clicked()
{
 statistiques d;
 d.exec();

}
