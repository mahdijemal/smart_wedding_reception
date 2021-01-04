#include "dialogpersonnel.h"
#include "ui_dialogpersonnel.h"
#include "dialoglogin.h"
#include "dialogres.h"
#include "dialogmenu.h"
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
#include <QPrinter>
#include <QPrintDialog>
#include "dialogfin.h"
#include "dialoginv.h"
#include "dialogrole.h"
dialogpersonnel::dialogpersonnel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogpersonnel)
{
    ui->setupUi(this);
    ui->edit_idc->hide();
    ui->editDate->hide();
    ui->edit_nom->hide();
    ui->edit_prenom->hide();
    ui->editOk->hide();
    ui->label_7->hide();
    ui->label_6->hide();
    ui->label_5->hide();
    ui->label_4->hide();
    ui->deleteLine->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->lineEdit_id->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->lineEdit_id->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->txt_id->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->idEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));

}

dialogpersonnel::~dialogpersonnel()
{
    delete ui;


}

void dialogpersonnel::on_logout_clicked()
{
    this->hide();
    dialoglogin l;
    l.exec();
}

void dialogpersonnel::on_logout_2_clicked()
{
    this->close();
}

void dialogpersonnel::on_previousmodule_clicked()
{
    this->hide();
    dialoginv res;
    res.exec();
}

void dialogpersonnel::on_back_clicked()
{
    this->hide();
    dialogmenu d;
    d.exec();
}

void dialogpersonnel::on_ajouter_clicked()
{
    int identifiant=ui->lineEdit_id->text().toInt();
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString nbrj=ui->lineEdit_nbrj->text();
    QString idr=ui->lineEdit_idr->text();

    gestion_personnel e(identifiant,nom,prenom,nbrj,idr);
    bool test=e.ajouter();
    if(test)
    {
        ui->tabcli->setModel(tmpper.affichertri1());
             ui->lineEdit_id->clear();
             ui->lineEdit_prenom->clear();
             ui->lineEdit_nbrj->clear();
             ui->lineEdit_nom->clear();
             ui->lineEdit_idr->clear();

             QMessageBox::information(nullptr, QObject::tr("PERSONNEL"),
                                   QObject::tr("PERSONNEL ADDED! ! .\n"
                                               "Click Close to exit."), QMessageBox::Close);
}             else
                 QMessageBox::critical(nullptr, QObject::tr("PERSONNEL"),
                             QObject::tr("ERROR! FILL ALL THE DATA.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialogpersonnel::on_tabWidget_currentChanged(int index)
{
    ui->tabcli->setModel(tmpper.affichertri1());
}

void dialogpersonnel::on_delete_btn_clicked()
{
    int identifiant = ui->deleteLine->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from personnel where identifiant = ?");
    query.addBindValue(identifiant);
    query.exec();
    if(query.next()) {
    bool test=tmpper.supprimer(identifiant);
    if(test)
    {
        ui->tabcli->setModel(tmpper.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("DELETE"),
                    QObject::tr("PERSONNEL DELETED SUCCESFULY !.\n"
                                "Click Cancel to exit."), QMessageBox::Close);
        ui->deleteLine->clear();
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("DELETE"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel); }
    else
        QMessageBox::critical(nullptr, QObject::tr("DELETE"),
                    QObject::tr("Erreur ID NOT FOUND !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialogpersonnel::on_tabcli_activated(const QModelIndex &index)
{
    QString val=ui->tabcli->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("Select * from personnel where identifiant ='"+val+"'");
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->txt_id->setText(qry.value(0).toString());
            ui->txt_num->setText(qry.value(1).toString());
            ui->txt_des->setText(qry.value(2).toString());
            ui->txt_mont->setText(qry.value(3).toString());
            ui->txt_type->setText(qry.value(4).toString());
            ui->txt_des ->show();
            ui-> txt_id->show();
            ui->txt_mont ->show();
            ui->txt_num ->show();
            ui->txt_type ->show();

            ui->pushButton_2 ->show();
            ui->pushButton_3 ->show();

        }
    }
}

void dialogpersonnel::on_pushButton_2_clicked()
{

    int identifiant=ui->txt_id->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from personnel  where identifiant= ?");
    query.addBindValue(identifiant);
    query.exec();
    if(query.next()) {
    bool test=tmpper.supprimer( identifiant);
    if(test)
    {
        ui->tabcli->setModel(tmpper.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("RESERVATION"),
                    QObject::tr("RESERVATION DELETE.\n"
                                "Click Cancel to exit."), QMessageBox::Close);

    }}

    else
    QMessageBox::critical(nullptr, QObject::tr("RESERVATION"),
                    QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void dialogpersonnel::on_pushButton_3_clicked()
{

    int identifiant=ui->txt_id->text().toInt();
         QString nom=ui->txt_num->text();
         QString prenom=ui->txt_des->text();
         QString nbrj=ui->txt_mont->text();
         QString idr=ui->txt_type->text();

         gestion_personnel e(identifiant,nom,prenom,nbrj,idr);
          bool test=e.modifier(identifiant);
        if(test)
        {
            ui->tabcli->setModel(tmpper.affichertri1());
            QMessageBox::information(nullptr, QObject::tr("PERSONNEL"),
                        QObject::tr("PERSONNEL MODIFIED! .\n"
                                    "Click Cancel to exit."), QMessageBox::Close);
        }
        else
        QMessageBox::critical(nullptr, QObject::tr("PERSONNEL"),
                        QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

}

void dialogpersonnel::on_search_textChanged(const QString &arg1)
{

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();
    query->prepare("SELECT * FROM personnel WHERE identifiant  LIKE'"+arg1+"%' or nom  LIKE'"+arg1+"%' or prenom  LIKE'"+arg1+"%' or nbrj  LIKE'"+arg1+"%' or idr  LIKE'"+arg1+"%'");
     query->exec();
    if(query->next())
    {
     model->setQuery(*query);
     ui->tabcli->setModel(model); }
    else {
        QMessageBox::critical(nullptr, QObject::tr("PERSONNEL"),
                        QObject::tr("NO MATCH FOUND !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        ui->search->clear();

}
}

void dialogpersonnel::on_pushButton_clicked()
{
    QPrinter *imprimante;
    QPrintDialog pd(ui->tabcli);
    if(pd.exec()== QDialog::Accepted) return;
    imprimante=pd.printer();
    imprimante->setOutputFormat(QPrinter::PdfFormat);
    imprimante->setOutputFileName("C:/Users/ME/Desktop/pdf/doc.pdf");

}

void dialogpersonnel::on_edit_clicked()
{
    QString identifiant = ui->idEdit ->text();
    QSqlQuery query;
    query.prepare("Select * from personnel where identifiant=?");
    query.addBindValue(identifiant);
    query.exec();
    if(query.next()){
    ui->edit_idc->show();
    ui->editDate->show();
    ui->edit_nom->show();
    ui->edit_prenom->show();
    ui->editOk->show();
    ui->label_7->show();
    ui->label_6->show();
    ui->label_5->show();
    ui->label_4->show(); }
    else
{
QMessageBox::critical(nullptr, QObject::tr("EDIT"),
 QObject::tr("\n ID not Found !\n"), QMessageBox::Cancel);
ui->label_4->hide();
ui->label_5->hide();
ui->label_6->hide();
ui->label_7->hide();
ui->edit_idc->hide();
ui->edit_nom->hide();
ui->edit_prenom->hide();
ui->editDate->hide();
ui->edit_idc->clear();
ui->edit_nom->clear();
ui->edit_prenom->clear();
ui->editDate->clear();
ui->editOk->hide();
ui->idEdit->clear();

}
}

void dialogpersonnel::on_editOk_clicked()
{

    int identifiant=ui->idEdit->text().toInt();
         QString nom=ui->edit_idc->text();
         QString prenom=ui->editDate->text();
         QString nbrj=ui->edit_nom->text();
         QString idr=ui->edit_prenom->text();

          gestion_personnel e(identifiant,nom,prenom,nbrj,idr);
           bool test=e.modifier(identifiant);
         if(test)
         {
             ui->tabcli->setModel(tmpper.affichertri1());
             QMessageBox::information(nullptr, QObject::tr("PERSONNEL"),
                         QObject::tr("PERSONNEL MODIFIED! .\n"
                                     "Click Cancel to exit."), QMessageBox::Close);
             ui->label_4->hide();
             ui->label_5->hide();
             ui->label_6->hide();
             ui->label_7->hide();
             ui->edit_idc->hide();
             ui->edit_nom->hide();
             ui->edit_prenom->hide();
             ui->editDate->hide();
             ui->edit_idc->clear();
             ui->edit_nom->clear();
             ui->edit_prenom->clear();
             ui->editDate->clear();
             ui->editOk->hide();
             ui->idEdit->clear();

         }
         else
         {QMessageBox::critical(nullptr, QObject::tr("PERSONNEL"),
                         QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);

         ui->label_4->hide();
         ui->label_5->hide();
         ui->label_6->hide();
         ui->label_7->hide();
         ui->edit_idc->hide();
         ui->edit_nom->hide();
         ui->edit_idc->clear();
         ui->edit_nom->clear();
         ui->edit_prenom->clear();
         ui->editDate->clear();
         ui->edit_prenom->hide();
         ui->editDate->hide();
         ui->editOk->hide();
         ui->idEdit->clear();

}


}

void dialogpersonnel::on_nextmodule_clicked()
{
    this->hide();
    dialogfin d;
    d.exec();
}

void dialogpersonnel::on_nextcrud_clicked()
{
    this->hide();
    dialogrole d;
    d.exec();
}

void dialogpersonnel::on_prevcrud_clicked()
{
    this->hide();
    dialogrole d;
    d.exec();
}

void dialogpersonnel::on_id_desc_clicked()
{
    ui->tabcli->setModel(tmpper.affichertri1_1());
    ui->id_desc->hide();
    ui->id_asc->show();
}

void dialogpersonnel::on_id_asc_clicked()
{
    ui->tabcli->setModel(tmpper.affichertri1());
    ui->id_asc->hide();
    ui->id_desc->show();
}

void dialogpersonnel::on_num_desc_clicked()
{
    ui->tabcli->setModel(tmpper.affichertri2_1());
    ui->num_desc->hide();
    ui->num_asc->show();
}

void dialogpersonnel::on_num_asc_clicked()
{
    ui->tabcli->setModel(tmpper.affichertri2());
    ui->num_asc->hide();
    ui->num_desc->show();
}

void dialogpersonnel::on_des_desc_clicked()
{
    ui->tabcli->setModel(tmpper.affichertri3_1());
    ui->des_desc->hide();
    ui->des_asc->show();
}

void dialogpersonnel::on_des_asc_clicked()
{
    ui->tabcli->setModel(tmpper.affichertri3());
    ui->des_asc->hide();
    ui->des_desc->show();
}

void dialogpersonnel::on_montant_desc_clicked()
{
    ui->tabcli->setModel(tmpper.affichertri4_1());
    ui->montant_desc->hide();
    ui->montant_asc->show();
}

void dialogpersonnel::on_montant_asc_clicked()
{
    ui->tabcli->setModel(tmpper.affichertri4());
    ui->montant_asc->hide();
    ui->montant_desc->show();
}

void dialogpersonnel::on_type_desc_clicked()
{
    ui->tabcli->setModel(tmpper.affichertri5_1());
    ui->type_desc->hide();
    ui->type_asc->show();
}

void dialogpersonnel::on_type_asc_clicked()
{
    ui->tabcli->setModel(tmpper.affichertri5());
    ui->type_asc->hide();
    ui->type_desc->show();
}
