#include "dialoginvite.h"
#include "ui_dialoginvite.h"
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
#include "dialoglogin.h"
#include "dialogmenu.h"
#include "dialogres.h"
#include "dialogper.h"
#include "dialogsalle.h"
dialoginvite::dialoginvite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialoginvite)
{
    check=false;
    ui->setupUi(this);
    ui->id_desc->hide();
    ui->num_desc->hide();
    ui->type_desc->hide();
    ui->montant_desc->hide();
    ui->des_desc->hide();

    ui->editOk->hide();

    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->designiation->hide();
    ui->type->hide();
    ui->num->hide();
    ui->montant->hide();
    ui->nom_client->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->numero_transation->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->montant_2->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->idEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->deleteLine->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->montant->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->num->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->txt_id->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->txt_des->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->txt_mont->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->txt_type->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    int ret=A.connect_arduino();
             switch(ret){
             case(0):qDebug()<< "arduino is availble and connected to :"<< A.getarduino_port_name();
                 break;
             case(1):qDebug()<< "arduino is availble but not connected to :"<< A.getarduino_port_name();
                 break;
             case(-1):qDebug()<< "arduino is not availble";
             }
             QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(alert()));
}

dialoginvite::~dialoginvite()
{
    delete ui;
}

void dialoginvite::alert(){

    data=A.read_from_arduino();
    QString DataAsString = QString(data);
    qDebug()<< data;
    if (data=="1"){
           A.write_to_arduino("1");
    }
    if (data=="0"){
           A.write_to_arduino("0");
    }
    if(data=="1"){
            check=!check;
       }
    if (data=="1"){
        QMessageBox::critical(nullptr, QObject::tr("INVITE"),
                    QObject::tr("THE GAZ IS DETECTED ! .\n"
                                "Please check your GAZ ."), QMessageBox::Ok);
    }

}


void dialoginvite::on_ajouter_clicked()
{

    QString nom_fam=ui->id_client->text();
    int id=ui->nom_client->text().toInt();
    int nbr_pers=ui->numero_transation->text().toInt();
    int nbr_ad=ui->type_2->text().toInt();
    int nbr_enf=ui->montant_2->text().toInt();

    invite e(nom_fam,id,nbr_pers,nbr_ad,nbr_enf);
    bool test=e.ajouter();
    if(test)
    {
        ui->tabrev->setModel(tmpinv.affichertri1());
             ui->id_client->clear();
             ui->nom_client->clear();
             ui->numero_transation->clear();
             ui->type_2->clear();
             ui->montant_2->clear();

             QMessageBox::information(nullptr, QObject::tr("INVITE"),
                                   QObject::tr("INVITE ADDED! ! .\n"
                                               "Click Close to exit."), QMessageBox::Close);
}             else
                 QMessageBox::critical(nullptr, QObject::tr("INVITE"),
                             QObject::tr("ERROR ! FILL ALL THE INFO.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialoginvite::on_tabrev_activated(const QModelIndex &index)
{
    QString val=ui->tabrev->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("Select * from invite where id='"+val+"'");
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->txt_num->setText(qry.value(0).toString());
            ui->txt_id->setText(qry.value(1).toString());
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

void dialoginvite::on_pushButton_2_clicked()
{
    int id = ui->txt_id->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from INVITE where id = ?");
    query.addBindValue(id);
    query.exec();
    if(query.next()) {
    bool test=tmpinv.supprimer(id);
    if(test)
    {
        ui->tabrev->setModel(tmpinv.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("INVITE"),
                    QObject::tr("DELETED SUCCESFULLY!.\n"
                                "Click Cancel to exit."), QMessageBox::Close,QMessageBox::Ok);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("INVITE"),
                    QObject::tr("ERROR FILL THE INFO !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel); }

}

void dialoginvite::on_tabWidget_tabBarClicked(int index)
{
    ui->tabrev->setModel(tmpinv.affichertri1());
}

void dialoginvite::on_pushButton_3_clicked()
{
    int id=ui->txt_id->text().toInt();
    QString nom_fam=ui->txt_num->text();
    int nbr_pers=ui->txt_des->text().toInt();
    int nbr_ad=ui->txt_mont->text().toInt();
    int nbr_enf=ui->txt_type->text().toInt();
    invite e(nom_fam,id,nbr_pers,nbr_ad,nbr_enf);
    bool test=e.modifier(id);
    if(test)
    {
        ui->tabrev->setModel(tmpinv.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("MODIFY INVITE"),
                              QObject::tr("INVITE MODIFIED ! ! .\n"
                                          "Click Close to exit."), QMessageBox::Close);
}
}

void dialoginvite::on_edit_clicked()
{
    int id = ui->idEdit ->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from invite where id=?");
    query.addBindValue(id);
    query.exec();
    if(query.next()){
     ui->editOk->show();
     ui->label_4->show();
     ui->label_5->show();
     ui->label_6->show();
     ui->label_7->show();
     ui->designiation->show();
     ui->type->show();
     ui->num->show();
      ui->montant->show();}
            else
    {
        QMessageBox::critical(nullptr, QObject::tr("EDIT"),
         QObject::tr("\n ID not Found !\n"), QMessageBox::Cancel);
        ui->idEdit->clear();

    }
}

void dialoginvite::on_editOk_clicked()
{
    int id=ui->idEdit->text().toInt();
    QString nom_fam=ui->num ->text();
    int nbr_pers=ui->designiation->text().toInt();
    int nbr_ad=ui->montant->text().toInt();
    int nbr_enf=ui->type->text().toInt();
    invite e(nom_fam,id,nbr_pers,nbr_ad,nbr_enf);
    bool test=e.modifier(id);
    if(test)
    {
        ui->editOk->hide();

        ui->label_4->hide();
        ui->label_5->hide();
        ui->label_6->hide();
        ui->label_7->hide();
        ui->designiation->hide();
        ui->type->hide();
        ui->num->hide();
        ui->montant->hide();
        ui->tabrev->setModel(tmpinv.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("EDIT"),
                              QObject::tr(" EDITED SUCCESFULLY! ! .\n"
                                          "Click Close to exit."), QMessageBox::Close);


    }
    else
        QMessageBox::critical(nullptr, QObject::tr("ERROR"),
                    QObject::tr("ERROR ! FILL ALL THE INFO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialoginvite::on_delete_btn_clicked()
{
    int id = ui->deleteLine->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from invite where id = ?");
    query.addBindValue(id);
    query.exec();
    if(query.next()) {
    bool test=tmpinv.supprimer(id);
    if(test)
    {
        ui->tabrev->setModel(tmpinv.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("DELETE"),
                    QObject::tr("INVITE DELETED.\n"
                                "Click Cancel to exit."), QMessageBox::Close);
        ui->deleteLine->clear();

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("DELETE"),
                    QObject::tr("ERROR !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->deleteLine->clear();}
    else
        QMessageBox::critical(nullptr, QObject::tr("DELETE"),
                    QObject::tr("ID NOT FOUND !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->deleteLine->clear();
}



void dialoginvite::on_search_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();
    query->prepare("SELECT * FROM invite WHERE  nom_fam LIKE'"+arg1+"%' or id  LIKE'"+arg1+"%' or nbr_pers LIKE'"+arg1+"%' or nbr_ad like'"+arg1+"%' or nbr_enf like '"+arg1+"%'");
     query->exec();
     if(query->next())
     {
      model->setQuery(*query);
      ui->tabrev->setModel(model); }
     else {
         QMessageBox::critical(nullptr, QObject::tr("INVITE"),
                         QObject::tr("NO MATCH FOUND !.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
         ui->search->clear();

     }
}

void dialoginvite::on_pushButton_clicked()
{
    QPrinter *imprimante;
    QPrintDialog pd(ui->tabrev);
    if(pd.exec()== QDialog::Accepted) return;
    imprimante=pd.printer();
    imprimante->setOutputFormat(QPrinter::PdfFormat);
    imprimante->setOutputFileName("C:/Users/ME/Desktop/pdf/doc.pdf");

}

void dialoginvite::on_close_clicked()
{
    this->close();
}

void dialoginvite::on_logout_clicked()
{
    this->hide();
    dialoglogin d;
    d.exec();
}

void dialoginvite::on_previousmodule_2_clicked()
{
    this->hide();
    dialogres d;
    d.exec();
}

void dialoginvite::on_nextmodule_clicked()
{
    this->hide();
    dialogper d;
    d.exec();
}

void dialoginvite::on_back_clicked()
{
    this->hide();
    dialogmenu d;
    d.exec();
}

void dialoginvite::on_nextcrud_clicked()
{
    this->hide();
    dialogsalle d;
    d.exec();
}

void dialoginvite::on_prevcrud_clicked()
{
    this->hide();
    dialogsalle d;
    d.exec();
}

void dialoginvite::on_id_desc_clicked()
{
    ui->tabrev->setModel(tmpinv.affichertri1_1());
    ui->id_desc->hide();
    ui->id_asc->show();

}

void dialoginvite::on_id_asc_clicked()
{
    ui->tabrev->setModel(tmpinv.affichertri1());
    ui->id_asc->hide();
    ui->id_desc->show();
}

void dialoginvite::on_num_desc_clicked()
{
    ui->tabrev->setModel(tmpinv.affichertri2_1());
    ui->num_asc->show();
    ui->num_desc->hide();
}

void dialoginvite::on_num_asc_clicked()
{
    ui->tabrev->setModel(tmpinv.affichertri2());
    ui->num_asc->hide();
    ui->num_desc->show();
}

void dialoginvite::on_des_desc_clicked()
{
    ui->tabrev->setModel(tmpinv.affichertri3_1());
    ui->des_asc->show();
    ui->des_desc->hide();
}

void dialoginvite::on_des_asc_clicked()
{
    ui->tabrev->setModel(tmpinv.affichertri3());
    ui->des_asc->hide();
    ui->des_desc->show();
}

void dialoginvite::on_montant_desc_clicked()
{
    ui->tabrev->setModel(tmpinv.affichertri4_1());
    ui->montant_asc->show();
    ui->montant_desc->hide();
}

void dialoginvite::on_montant_asc_clicked()
{
    ui->tabrev->setModel(tmpinv.affichertri4());
    ui->montant_asc->hide();
    ui->montant_desc->show();
}

void dialoginvite::on_type_desc_clicked()
{
    ui->tabrev->setModel(tmpinv.affichertri5_1());
    ui->type_asc->show();
    ui->type_desc->hide();
}

void dialoginvite::on_type_asc_clicked()
{
    ui->tabrev->setModel(tmpinv.affichertri5());
    ui->type_asc->hide();
    ui->type_desc->show();
}
