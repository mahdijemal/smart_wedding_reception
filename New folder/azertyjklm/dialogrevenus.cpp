#include "dialogrevenus.h"
#include "ui_dialogrevenus.h"
#include "dialogmenu.h"
#include "dialogfin.h"
#include "ui_dialogfin.h"
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
#include"ui_dialoglogin.h"
#include "dialogmenu.h"
#include "ui_dialogmenu.h"
#include "dialogdepenses.h"
#include "ui_dialogdepenses.h"
#include "ui_dialogres.h"
#include "dialogres.h"
#include "dialogper.h"
#include <QPrinter>
#include <QPrintDialog>
dialogrevenus::dialogrevenus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogrevenus)
{
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
    ui->id_client->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
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

}

dialogrevenus::~dialogrevenus()
{
    delete ui;
}

void dialogrevenus::on_ajouter_clicked()
{
    int id_client=ui->id_client->text().toInt();
    QString nom_client=ui->nom_client->text();
    int numero_transation=ui->numero_transation->text().toInt();
    QString type=ui->type_2->text();
    int montant=ui->montant_2->text().toInt();

    revenus e(id_client,nom_client,numero_transation,type,montant);
    bool test=e.ajouter();
    if(test)
    {
        ui->tabrev->setModel(tmprev.affichertri1());
             ui->id_client->clear();
             ui->nom_client->clear();
             ui->numero_transation->clear();
             ui->type_2->clear();
             ui->montant_2->clear();

             QMessageBox::information(nullptr, QObject::tr("Ajouter Revenus"),
                                   QObject::tr("Revenus Ajouté ! ! .\n"
                                               "Click Close to exit."), QMessageBox::Close);
}             else
                 QMessageBox::critical(nullptr, QObject::tr("Ajouter Revenus"),
                             QObject::tr("Erreur ! Remplir les informations.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialogrevenus::on_id_desc_clicked()
{
    ui->tabrev->setModel(tmprev.affichertri1_1());
    ui->id_asc->show();
    ui->id_desc->hide();
}

void dialogrevenus::on_id_asc_clicked()
{
    ui->tabrev->setModel(tmprev.affichertri1());
    ui->id_asc->hide();
    ui->id_desc->show();
}

void dialogrevenus::on_num_desc_clicked()
{
    ui->tabrev->setModel(tmprev.affichertri2_1());
    ui->num_asc->show();
    ui->num_desc->hide();
}

void dialogrevenus::on_num_asc_clicked()
{
    ui->tabrev->setModel(tmprev.affichertri2());
    ui->num_asc->hide();
    ui->num_desc->show();
}

void dialogrevenus::on_des_desc_clicked()
{
    ui->tabrev->setModel(tmprev.affichertri3_1());
    ui->des_asc->show();
    ui->des_desc->hide();
}

void dialogrevenus::on_des_asc_clicked()
{
    ui->tabrev->setModel(tmprev.affichertri3());
    ui->des_asc->hide();
    ui->des_desc->show();
}

void dialogrevenus::on_montant_desc_clicked()
{
    ui->tabrev->setModel(tmprev.affichertri4_1());
    ui->montant_asc->show();
    ui->montant_desc->hide();
}

void dialogrevenus::on_montant_asc_clicked()
{
    ui->tabrev->setModel(tmprev.affichertri4());
    ui->montant_asc->hide();
    ui->montant_desc->show();
}

void dialogrevenus::on_type_desc_clicked()
{
    ui->tabrev->setModel(tmprev.affichertri5_1());
    ui->type_asc->show();
    ui->type_desc->hide();
}

void dialogrevenus::on_type_asc_clicked()
{
    ui->tabrev->setModel(tmprev.affichertri5());
    ui->type_asc->hide();
    ui->type_desc->show();
}

void dialogrevenus::on_search_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();
    query->prepare("SELECT * FROM revenus WHERE id_client LIKE'"+arg1+"%' or nom_client LIKE'"+arg1+"%' or numero_transation LIKE'"+arg1+"%' or type like'"+arg1+"%' or montant like '"+arg1+"%'");
     query->exec();
     if (query->next())
     {model->setQuery(*query);
     ui->tabrev->setModel(model);}
     else {
         QMessageBox::critical(nullptr, QObject::tr("CLIENT"),
                         QObject::tr("NO MATCH FOUND !.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
         ui->search->clear();

     }
}

void dialogrevenus::on_edit_clicked()
{
    int id_client = ui->idEdit ->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from revenus where id_client=?");
    query.addBindValue(id_client);
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

void dialogrevenus::on_delete_btn_clicked()
{
    int id_client = ui->deleteLine->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from revenus where id_client = ?");
    query.addBindValue(id_client);
    query.exec();
    if(query.next()) {
    bool test=tmprev.supprimer(id_client);
    if(test)
    {
        ui->tabrev->setModel(tmprev.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("Supprimer une Revenus"),
                    QObject::tr("Revenus supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Close);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une Revenus"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel); }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une Revenus"),
                    QObject::tr("Erreur ID NOT FOUND !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void dialogrevenus::on_editOk_clicked()
{
    int id_client=ui->idEdit->text().toInt();
    QString nom_client=ui-> num->text();
    int numero_transation=ui->designiation->text().toInt();
    QString type=ui-> montant->text();
    int montant=ui->type->text().toInt();
    revenus e(id_client,nom_client,numero_transation,type,montant);
    bool test=e.modifier(id_client);
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
        ui->tabrev->setModel(tmprev.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("Modifier Revenus"),
                              QObject::tr("Revenu Modifié ! ! .\n"
                                          "Click Close to exit."), QMessageBox::Close);


    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Modifier Revenus"),
                    QObject::tr("Erreur ! Remplir les informations.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialogrevenus::on_logout_clicked()
{   this->hide();
    dialoglogin d;
    d.exec();
}

void dialogrevenus::on_back_clicked()
{
    this->close();
    dialogmenu d;
    d.exec();
}

void dialogrevenus::on_tabWidget_tabBarClicked(int index)
{
      ui->tabrev->setModel(tmprev.affichertri1());
}

void dialogrevenus::on_pushButton_clicked()
{
    QPrinter *imprimante;
    QPrintDialog pd(ui->tabrev);
    if(pd.exec()== QDialog::Accepted) return;
    imprimante=pd.printer();
    imprimante->setOutputFormat(QPrinter::PdfFormat);
    imprimante->setOutputFileName("C:/Users/ME/Desktop/pdf/doc.pdf");

}

void dialogrevenus::on_commandLinkButton_clicked()
{
    this->hide();
    dialogdepenses d;
    d.exec();
}

void dialogrevenus::on_close_clicked()
{
    this->close();
}

void dialogrevenus::on_prevcrud_clicked()
{
    this->hide();
    dialogdepenses d;
    d.exec();
}

void dialogrevenus::on_nextcrud_clicked()
{
    this->hide();
    dialogdepenses d;
    d.exec();
}

void dialogrevenus::on_tabrev_activated(const QModelIndex &index)
{
    QString val=ui->tabrev->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("Select * from revenus where ID_CLIENT='"+val+"'");
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

void dialogrevenus::on_pushButton_2_clicked()
{
    int id = ui->txt_id->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from revenus where id_client = ?");
    query.addBindValue(id);
    query.exec();
    if(query.next()) {
    bool test=tmprev.supprimer(id);
    if(test)
    {
        ui->tabrev->setModel(tmprev.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Revenus"),
                    QObject::tr("Revenus supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Close);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Revenus"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel); }

}

void dialogrevenus::on_pushButton_3_clicked()
{
    int id_client=ui->txt_id->text().toInt();
    QString nom_client=ui->txt_num->text();
    int numero_transation=ui->txt_des->text().toInt();
    QString type=ui->txt_mont->text();
    int montant=ui->txt_type->text().toInt();
    revenus e(id_client,nom_client,numero_transation,type,montant);
    bool test=e.modifier(id_client);
    if(test)
    {
        ui->tabrev->setModel(tmprev.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("Modifier Revenus"),
                              QObject::tr("Revenu Modifié ! ! .\n"
                                          "Click Close to exit."), QMessageBox::Close);
}

}

void dialogrevenus::on_nextmodule_clicked()
{
    this->hide();
    dialogres d;
    d.exec();
}

void dialogrevenus::on_previousmodule_2_clicked()
{
    this->hide();
    dialogper c;
    c.exec();
}
