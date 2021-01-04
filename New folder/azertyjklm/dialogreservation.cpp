#include "dialogreservation.h"
#include "ui_dialogreservation.h"
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
#include "reservation.h"
#include "dialoglogin.h"
#include "ui_dialoglogin.h"
#include "dialogmenu.h"
#include "ui_dialogmenu.h"
#include "dialogclient.h"
#include "ui_dialogclient.h"
#include "ui_dialogfin.h"
#include "dialogfin.h"
#include <QPrinter>
#include <QPrintDialog>
#include "dialoginv.h"
#include "mail.h"
dialogreservation::dialogreservation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogreservation)
{
    ui->setupUi(this);
    ui->label_4->hide();
    ui->label_16->hide();
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
    ui->txt_Nsec->hide();
    ui->pushButton_2 ->hide();
    ui->pushButton_3 ->hide();
    ui->edit_Nsec->hide();
    ui->lineEdit_id->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->txt_id->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->deleteLine->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->idEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->id_asc->hide();
    ui->des_asc->hide();
    ui->montant_asc->hide();
    ui->num_asc->hide();
    ui->type_asc->hide();
    ui->type_asc_2->hide();
    ui->type_asc_3->hide();
}

dialogreservation::~dialogreservation()
{
    delete ui;
}

void dialogreservation::on_search_textChanged(const QString &arg1)
{

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();
    query->prepare("SELECT * FROM reservation WHERE identifiant  LIKE'"+arg1+"%' or Sfete  LIKE'"+arg1+"%' or Nbande  LIKE'"+arg1+"%' or Nph  like'"+arg1+"' or Nser  like '"+arg1+"'  or Ntr  like '"+arg1+"'or Nsec  like '"+arg1+"'");
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

void dialogreservation::on_ajouter_clicked()
{
    int identifiant =ui->lineEdit_id->text().toInt();
    QString Sfete =ui->lineEdit_idc->text();
    QString Nbande =ui->lineEdit_date->text();
    QString Nph =ui->lineEdit_nom->text();
    QString Nser =ui->lineEdit_prenom->text();
    QString Ntr =ui->lineEdit_Tfete->text();
    QString Nsec  =ui->lineEdit_Nsec ->text();
    reservation e(identifiant ,Sfete ,Nbande ,Nph ,Nser ,Ntr ,Nsec );
    bool test=e.ajouter();
    if (test)
    {
        ui->tabcli->setModel(tmpres.affichertri1());
             ui->lineEdit_id->clear();
             ui->lineEdit_idc->clear();
             ui->lineEdit_date->clear();
             ui->lineEdit_nom->clear();
             ui->lineEdit_prenom->clear();
             ui->lineEdit_Tfete->clear();
              ui->lineEdit_Nsec->clear();
             QMessageBox::information(nullptr, QObject::tr("RESERVATION "),
                                   QObject::tr("RESERVATION ADDED SUCCESFULY ! ! .\n"
                                               "Click CLOSE TO EXIT."), QMessageBox::Close);
    }
    else
                 QMessageBox::critical(nullptr, QObject::tr("RESERVATION"),
                             QObject::tr("Erreur ! Remplir les informations.\n"
                                         "Click Close to exit."), QMessageBox::Close);



}

void dialogreservation::on_nextcrud_clicked()
{
    this->hide();
    dialogclient c;
    c.exec();
}

void dialogreservation::on_prevcrud_clicked()
{
    this->hide();
    dialogclient c;
    c.exec();
}

void dialogreservation::on_logout_2_clicked()
{
    this->close();
}

void dialogreservation::on_logout_clicked()
{
    this->hide();
    dialoglogin d;
    d.exec();
}

void dialogreservation::on_tabWidget_currentChanged(int index)
{
     ui->tabcli->setModel(tmpres.affichertri1());
}

void dialogreservation::on_tabcli_activated(const QModelIndex &index)
{
    QString val=ui->tabcli->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("Select * from reservation where identifiant ='"+val+"'");
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
              ui->txt_Nsec->setText(qry.value(6).toString());
            ui->txt_des ->show();
            ui-> txt_id->show();
            ui->txt_mont ->show();
            ui->txt_num ->show();
            ui->txt_type ->show();
            ui->txt_tfete->show();
            ui->txt_Nsec->show();
            ui->pushButton_2 ->show();
            ui->pushButton_3 ->show();

        }
    }
}

void dialogreservation::on_pushButton_2_clicked()
{
    int identifiant=ui->txt_id->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from reservation where identifiant= ?");
    query.addBindValue(identifiant);
    query.exec();
    if(query.next()) {
    bool test=tmpres.supprimer(identifiant);
    if(test)
    {
        ui->tabcli->setModel(tmpres.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("RESERVATION"),
                    QObject::tr("RESERVATION DELETE.\n"
                                "Click Cancel to exit."), QMessageBox::Close);

    }}

    else
    QMessageBox::critical(nullptr, QObject::tr("RESERVATION"),
                    QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void dialogreservation::on_delete_btn_clicked()
{
    int identifiant = ui->deleteLine->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from reservation where identifiant = ?");
    query.addBindValue(identifiant);
    query.exec();
    if(query.next()) {
    bool test=tmpres.supprimer(identifiant);
    if(test)
    {
        ui->tabcli->setModel(tmpres.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("RESERVATION"),
                    QObject::tr("RESERVATION DELETED SUCCESFULY.\n"
                                "Click Cancel to exit."), QMessageBox::Close);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("RESERVATION"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);}
    else
        QMessageBox::critical(nullptr, QObject::tr("RESERVATION"),
                    QObject::tr("Erreur ID NOT FOUND !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialogreservation::on_pushButton_3_clicked()
{
    int identifiant=ui->txt_id->text().toInt();
         QString Sfete=ui->txt_num->text();
         QString Nbande=ui->txt_des->text();
         QString Nph=ui->txt_mont->text();
         QString Nser=ui->txt_type->text();
         QString Ntr=ui->txt_tfete->text();
         QString Nsec=ui->txt_Nsec->text();
         reservation e(identifiant,Sfete,Nbande,Nph,Nser,Ntr,Nsec);
          bool test=e.modifier(identifiant);
        if(test)
        {
            ui->tabcli->setModel(tmpres.affichertri1());
            QMessageBox::information(nullptr, QObject::tr("RESERVATION"),
                        QObject::tr("RESERVATION MODIFIED! .\n"
                                    "Click Cancel to exit."), QMessageBox::Close);
        }
        else
        QMessageBox::critical(nullptr, QObject::tr("RESERVATION"),
                        QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

}

void dialogreservation::on_edit_clicked()
{

    int identifiant = ui->idEdit ->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from reservation where identifiant=?");
    query.addBindValue(identifiant);
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
      ui->label_16->show();
      ui->edit_Nsec->show();
    }
            else
    {
        QMessageBox::critical(nullptr, QObject::tr("EDIT"),
         QObject::tr("\n ID not Found !\n"), QMessageBox::Cancel);

    }

}

void dialogreservation::on_editOk_clicked()
{
    int  identifiant=ui->idEdit->text().toInt();
         QString Sfete=ui->edit_idc->text();
         QString Nbande=ui->editDate->text();
         QString Nph=ui->edit_nom->text();
         QString Nser=ui->edit_prenom->text();
         QString Ntr=ui->edit_tfete->text();
          QString Nsec=ui->edit_Nsec->text();
         reservation e(identifiant,Sfete,Nbande,Nph,Nser,Ntr,Nsec);
          bool test=e.modifier(identifiant);
        if(test)
        {
            ui->tabcli->setModel(tmpres.affichertri1());
            QMessageBox::information(nullptr, QObject::tr("EDIT"),
                        QObject::tr("RESERVATION MODIFIED! .\n"
                                    "Click Cancel to exit."), QMessageBox::Close);

            ui->label_4->hide();
            ui->label_5->hide();
            ui->label_6->hide();
            ui->label_7->hide();
            ui->label_14->hide();
            ui->label_16->hide();
            ui->edit_idc->hide();
            ui->edit_nom->hide();
            ui->edit_prenom->hide();
            ui->edit_tfete->hide();
            ui->editDate->hide();
            ui->edit_Nsec->hide();

            ui->editOk->hide();
            ui->idEdit->clear();
        }
        else
        QMessageBox::critical(nullptr, QObject::tr("EDIT"),
                        QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

}

void dialogreservation::on_previousmodule_clicked()
{
    this->hide();
    dialogfin d;
    d.exec();
}

void dialogreservation::on_back_clicked()
{
    this->hide();
    dialogmenu d;
    d.exec();
}
void dialogreservation::on_id_desc_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri1_1());
    ui->id_desc->hide();
    ui->id_asc->show();
}

void dialogreservation::on_id_asc_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri1());
    ui->id_asc->hide();
    ui->id_desc->show();
}

void dialogreservation::on_num_asc_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri2());
    ui->num_asc->hide();
    ui->num_desc->show();
}

void dialogreservation::on_num_desc_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri2_1());
    ui->num_desc->hide();
    ui->num_asc->show();
}

void dialogreservation::on_des_asc_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri3());
    ui->des_asc->hide();
    ui->des_desc->show();
}

void dialogreservation::on_des_desc_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri3_1());
    ui->des_desc->hide();
    ui->des_asc->show();
}

void dialogreservation::on_montant_asc_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri4());
    ui->montant_asc->hide();
    ui->montant_desc->show();
}

void dialogreservation::on_montant_desc_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri4_1());
    ui->montant_desc->hide();
    ui->montant_asc->show();
}

void dialogreservation::on_type_asc_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri5());
    ui->type_asc->hide();
    ui->type_desc->show();
}

void dialogreservation::on_type_desc_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri5_1());
    ui->type_desc->hide();
    ui->type_asc->show();
}

void dialogreservation::on_type_asc_2_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri6());
    ui->type_asc_2->hide();
    ui->type_desc_2->show();
}

void dialogreservation::on_type_desc_2_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri6_1());
    ui->type_desc_2->hide();
    ui->type_asc_2->show();
}

void dialogreservation::on_type_asc_3_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri7());
    ui->type_asc_3->hide();
    ui->type_desc_3->show();
}

void dialogreservation::on_type_desc_3_clicked()
{
    ui->tabcli->setModel(tmpres.affichertri7_1());
    ui->type_desc_3->hide();
    ui->type_asc_3->show();
}

void dialogreservation::on_pushButton_clicked()
{

    QPrinter *imprimante;
    QPrintDialog pd(ui->tabcli);
    if(pd.exec()== QDialog::Accepted) return;
    imprimante=pd.printer();
    imprimante->setOutputFormat(QPrinter::PdfFormat);
    imprimante->setOutputFileName("C:/Users/ME/Desktop/pdf/doc.pdf");
}

void dialogreservation::on_nextmodule_clicked()
{
    this->hide();
    dialoginv d;
    d.exec();
}

void dialogreservation::on_pushButton_4_clicked()
{
 mail d;
 d.exec();
}
