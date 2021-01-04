#include "dialogdepenses.h"
#include "ui_dialogdepenses.h"
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
#include "dialoglogin.h"
#include "ui_dialoglogin.h"
#include "dialogrevenus.h"
#include "ui_dialogrevenus.h"
#include "ui_dialogres.h"
#include "dialogres.h"
#include "dialogper.h"

dialogdepenses::dialogdepenses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogdepenses)
{
    ui->setupUi(this);
    ui->id_desc->hide();
    ui->num_desc->hide();
    ui->type_desc->hide();
    ui->montant_desc->hide();
    ui->des_desc->hide();
    // edit
    ui->editOk->hide();

    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->designiation->hide();
    ui->type->hide();
    ui->num->hide();
    ui->montant->hide();
    ui->txt_des ->hide();
    ui-> txt_id->hide();
    ui->txt_mont ->hide();
    ui->txt_num ->hide();
    ui->txt_type ->hide();
    ui->pushButton_2 ->hide();
    ui->pushButton_3 ->hide();
    ui->lineEdit_id->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->deleteLine->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->lineEdit_num->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->lineEdit_montant->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->idEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->num->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->montant->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->txt_id->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->txt_num->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->txt_mont->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));


}

dialogdepenses::~dialogdepenses()
{
    delete ui;
}

void dialogdepenses::on_ajouter_clicked()
{
    int id=ui->lineEdit_id->text().toInt();
    int num_transaction=ui->lineEdit_num->text().toInt();
    QString designiation=ui->lineEdit_designiation->text();
    int montant=ui->lineEdit_montant->text().toInt();
    QString type=ui->lineEdit_type->text();
    depenses e(id,num_transaction,designiation,montant,type);
    bool test=e.ajouter();
    if(test)
    {
        ui->tabdep->setModel(tmpdep.afficher());
             ui->lineEdit_id->clear();
             ui->lineEdit_num->clear();
             ui->lineEdit_designiation->clear();
             ui->lineEdit_montant->clear();
             ui->lineEdit_type->clear();

             QMessageBox::information(nullptr, QObject::tr("Ajouter Depense"),
                                   QObject::tr("Depense Ajouté ! ! .\n"
                                               "Click Close to exit."), QMessageBox::Close);
}             else
                 QMessageBox::critical(nullptr, QObject::tr("Ajouter Depense"),
                             QObject::tr("Erreur ! Remplir les informations.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);



}

void dialogdepenses::on_search_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();
    query->prepare("SELECT * FROM depenses WHERE id LIKE'"+arg1+"%' or NUM_TRANSACTION LIKE'"+arg1+"%' or DESIGNIATION LIKE'"+arg1+"%' or MONTANT like'"+arg1+"' or type like '"+arg1+"'");
     query->exec();
     if (query->next()) {
     model->setQuery(*query);
     ui->tabdep->setModel(model);
     }
     else {
         QMessageBox::critical(nullptr, QObject::tr("CLIENT"),
                         QObject::tr("NO MATCH FOUND !.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
         ui->search->clear();

     }

}

void dialogdepenses::on_back_clicked()
{
    this->hide();
    dialogmenu d;
    d.exec();
}

void dialogdepenses::on_id_asc_clicked()
{
    ui->tabdep->setModel(tmpdep.afficher());
    ui->id_asc->hide();
    ui->id_desc->show();
}

void dialogdepenses::on_id_desc_clicked()
{
    ui->tabdep->setModel(tmpdep.affichertri1());
    ui->id_asc->show();
    ui->id_desc->hide();
}

void dialogdepenses::on_num_asc_clicked()
{
    ui->tabdep->setModel(tmpdep.affichertri2());
    ui->num_asc->hide();
    ui->num_desc->show();
}

void dialogdepenses::on_num_desc_clicked()
{
    ui->tabdep->setModel(tmpdep.affichertri2_1());
    ui->num_asc->show();
    ui->num_desc->hide();
}

void dialogdepenses::on_des_asc_clicked()
{
    ui->tabdep->setModel(tmpdep.affichertri3());
    ui->des_asc->hide();
    ui->des_desc->show();
}

void dialogdepenses::on_des_desc_clicked()
{
    ui->tabdep->setModel(tmpdep.affichertri3_1());
    ui->des_asc->show();
    ui->des_desc->hide();
}

void dialogdepenses::on_montant_asc_clicked()
{
    ui->tabdep->setModel(tmpdep.affichertri4());
    ui->montant_asc->hide();
    ui->montant_desc->show();
}

void dialogdepenses::on_type_asc_clicked()
{
    ui->tabdep->setModel(tmpdep.affichertri5());
    ui->type_asc->hide();
    ui->type_desc->show();
}


void dialogdepenses::on_type_desc_clicked()
{
    ui->tabdep->setModel(tmpdep.affichertri5_1());
    ui->type_asc->show();
    ui->type_desc->hide();
}

void dialogdepenses::on_montant_desc_clicked()
{
    ui->tabdep->setModel(tmpdep.affichertri4_1());
    ui->montant_asc->show();
    ui->montant_desc->hide();
}

void dialogdepenses::on_delete_btn_clicked()
{
    int id = ui->deleteLine->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from depenses where id = ?");
    query.addBindValue(id);
    query.exec();
    if(query.next()) {
    bool test=tmpdep.supprimer(id);
    if(test)
    {
        ui->tabdep->setModel(tmpdep.afficher());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Depense"),
                    QObject::tr("Depense supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Close);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Depense"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel); }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Depense"),
                    QObject::tr("Erreur ID NOT FOUND !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialogdepenses::on_edit_clicked()
{
           int id = ui->idEdit ->text().toInt();
           QSqlQuery query;
           query.prepare("Select * from depenses where id=?");
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

           }
}

void dialogdepenses::on_editOk_clicked()
{
    int id=ui->idEdit->text().toInt();
    int num_transaction=ui->num->text().toInt();
    QString designiation=ui->designiation->text();
    int montant=ui->montant->text().toInt();
    QString type=ui->type->text();
    depenses e(id,num_transaction,designiation,montant,type);
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
        ui->tabdep->setModel(tmpdep.afficher());
        QMessageBox::information(nullptr, QObject::tr("Modifier Depenses"),
                              QObject::tr("Depense Modifié ! ! .\n"
                                          "Click Close to exit."), QMessageBox::Close);


    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Modifier Depense"),
                    QObject::tr("Erreur ! Remplir les informations.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



}

void dialogdepenses::on_logout_clicked()
{   this->hide();
    dialoglogin d;
    d.exec();
}

void dialogdepenses::on_pushButton_clicked()
{

        QPrinter *imprimante;
        QPrintDialog pd(ui->tabdep);
        if(pd.exec()== QDialog::Rejected) return;
        imprimante=pd.printer();
        imprimante->setOutputFormat(QPrinter::PdfFormat);
        imprimante->setOutputFileName("db.pdf");

}

void dialogdepenses::on_tabWidget_tabBarClicked(int index)
{
    ui->tabdep->setModel(tmpdep.afficher());
}

void dialogdepenses::on_logout_2_clicked()
{
    this->close();
}

void dialogdepenses::on_nextcrud_clicked()
{
    this->close();
    dialogrevenus d;
    d.exec();
}

void dialogdepenses::on_prevcrud_clicked()
{
    this->close();
    dialogrevenus d;
    d.exec();
}

void dialogdepenses::on_tabdep_activated(const QModelIndex &index)
{
    QString val=ui->tabdep->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("Select * from depenses where id='"+val+"'");
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

void dialogdepenses::on_pushButton_2_clicked()
{
    int id = ui->txt_id->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from depenses where id = ?");
    query.addBindValue(id);
    query.exec();
    if(query.next()) {
    bool test=tmpdep.supprimer(id);
    if(test)
    {
        ui->tabdep->setModel(tmpdep.afficher());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Depense"),
                    QObject::tr("Depense supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Close);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Depense"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel); }
}

void dialogdepenses::on_pushButton_3_clicked()
{
    int id=ui->txt_id->text().toInt();
    int num_transaction=ui->txt_num->text().toInt();
    QString designiation=ui->txt_des->text();
    int montant=ui->txt_mont->text().toInt();
    QString type=ui->txt_type->text();
    depenses e(id,num_transaction,designiation,montant,type);
    bool test=e.modifier(id);
    if(test)
    {
        ui->tabdep->setModel(tmpdep.afficher());
        QMessageBox::information(nullptr, QObject::tr("Modify un Depense"),
                    QObject::tr("Depense Modified! .\n"
                                "Click Cancel to exit."), QMessageBox::Close);
    }
}

void dialogdepenses::on_nextmodule_clicked()
{
    this->hide();
    dialogres d;
    d.exec();
}

void dialogdepenses::on_previousmodule_clicked()
{
    this->hide();
    dialogper c;
    c.exec();
}
