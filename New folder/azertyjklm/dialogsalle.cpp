#include "dialoglogin.h"
#include "dialogsalle.h"
#include "ui_dialogsalle.h"
#include "salle.h"
#include <QMessageBox>
#include "dialoginvite.h"
#include "dialogper.h"
#include "dialogres.h"
#include "dialogmenu.h"
#include <QPrinter>
#include <QPrintDialog>
dialogsalle::dialogsalle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogsalle)
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
    ui->txt_num->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));

}

dialogsalle::~dialogsalle()
{
    delete ui;
}

void dialogsalle::on_ajouter_clicked()
{
    int id_salle=ui->id_client->text().toInt();
    int nbr_tab_rd=ui->nom_client->text().toInt();
    int nbr_tab_rect=ui->numero_transation->text().toInt();
    int nbr_tab_ov=ui->type_2->text().toInt();
    int nbr_chs=ui->montant_2->text().toInt();

    salle e(id_salle,nbr_tab_rd,nbr_tab_rect,nbr_tab_ov,nbr_chs);
    bool test=e.ajouter();
    if(test)
    {
        ui->tabrev->setModel(tmpsal.affichertri1());
             ui->id_client->clear();
             ui->nom_client->clear();
             ui->numero_transation->clear();
             ui->type_2->clear();
             ui->montant_2->clear();

             QMessageBox::information(nullptr, QObject::tr("ADD"),
                                   QObject::tr("SALLE ADDED ! ! .\n"
                                               "Click Close to exit."), QMessageBox::Close);
}             else
                 QMessageBox::critical(nullptr, QObject::tr("ADD"),
                             QObject::tr("ERROR ! FILL ALL THE INFO.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);


}


void dialogsalle::on_nextcrud_clicked()
{
 this->hide();
    dialoginvite d;
    d.exec();
}

void dialogsalle::on_nextmodule_clicked()
{
    this->hide();
    dialogper d;
    d.exec();
}

void dialogsalle::on_previousmodule_2_clicked()
{
    this->hide();
    dialogres d;
    d.exec();
}

void dialogsalle::on_prevcrud_clicked()
{
    this->hide();
       dialoginvite d;
       d.exec();
}

void dialogsalle::on_back_clicked()
{
    this->hide();
    dialogmenu d;
    d.exec();
}

void dialogsalle::on_tabWidget_currentChanged(int index)
{
    ui->tabrev->setModel(tmpsal.affichertri1());
}

void dialogsalle::on_tabrev_activated(const QModelIndex &index)
{
    QString val=ui->tabrev->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("Select * from salle where id_salle='"+val+"'");
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

void dialogsalle::on_pushButton_2_clicked()
{
    int id_salle = ui->txt_id->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from salle where id_salle = ?");
    query.addBindValue(id_salle);
    query.exec();
    if(query.next()) {
    bool test=tmpsal.supprimer(id_salle);
    if(test)
    {
        ui->tabrev->setModel(tmpsal.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("DELETE"),
                    QObject::tr("DELETED SUCCESSFULY !.\n"
                                "Click Cancel to exit."), QMessageBox::Close);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("DELETE"),
                    QObject::tr("ERROR ! !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel); }

}

void dialogsalle::on_pushButton_3_clicked()
{
    int id_salle=ui->txt_id->text().toInt();
    int nbr_tab_rd=ui->txt_num->text().toInt();
    int nbr_tab_rect=ui->txt_des->text().toInt();
    int nbr_tab_ov=ui->txt_mont->text().toInt();
    int nbr_chs=ui->txt_type->text().toInt();
    salle  e(id_salle,nbr_tab_rd,nbr_tab_rect,nbr_tab_ov,nbr_chs);
    bool test=e.modifier(id_salle);
    if(test)
    {
        ui->tabrev->setModel(tmpsal.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("MODIFY"),
                              QObject::tr("MODIFIED SUCCESFULLY ! ! .\n"
                                          "Click Close to exit."), QMessageBox::Close);
       } else
        QMessageBox::critical(nullptr, QObject::tr("MODIFY"),
                        QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialogsalle::on_search_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();
    query->prepare("SELECT * FROM salle WHERE id_salle LIKE'"+arg1+"%' or nbr_tab_rd LIKE'"+arg1+"%' or nbr_tab_rect LIKE'"+arg1+"%' or nbr_tab_ov like'"+arg1+"%' or nbr_chs like '"+arg1+"%'");
     query->exec();
     if (query->next())
     {model->setQuery(*query);
     ui->tabrev->setModel(model);}
     else {
         QMessageBox::critical(nullptr, QObject::tr("SALLE"),
                         QObject::tr("NO MATCH FOUND !.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
         ui->search->clear();

     }
}

void dialogsalle::on_edit_clicked()
{

    int id_salle = ui->idEdit ->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from salle where id_salle=?");
    query.addBindValue(id_salle);
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

void dialogsalle::on_delete_btn_clicked()
{
    int id_salle = ui->deleteLine->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from salle where id_salle = ?");
    query.addBindValue(id_salle);
    query.exec();
    if(query.next()) {
    bool test=tmpsal.supprimer(id_salle);
    if(test)
    {
        ui->tabrev->setModel(tmpsal.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("DELETE"),
                    QObject::tr("DELETED SUCCESFULLY.\n"
                                "Click Cancel to exit."), QMessageBox::Close);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("DELETE"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel); }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une Revenus"),
                    QObject::tr("Erreur ID NOT FOUND !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void dialogsalle::on_editOk_clicked()
{
    int id_salle=ui->idEdit->text().toInt();
    int nbr_tab_rd=ui->num->text().toInt();
    int nbr_tab_rect=ui->designiation->text().toInt();
    int nbr_tab_ov=ui-> montant->text().toInt();
    int nbr_chs=ui-> type->text().toInt();
    salle e(id_salle,nbr_tab_rd,nbr_tab_rect,nbr_tab_ov,nbr_chs);
    bool test=e.modifier(id_salle);
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
        ui->tabrev->setModel(tmpsal.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("MODIFY"),
                              QObject::tr("MODIFIED SUCCESFULLY ! ! .\n"
                                          "Click Close to exit."), QMessageBox::Close);


    }
    else
        QMessageBox::critical(nullptr, QObject::tr("MODIFY"),
                    QObject::tr("EROOR ! FILL ALL THE INFO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
       ui->idEdit->clear();

}

void dialogsalle::on_pushButton_clicked()
{
    QPrinter *imprimante;
    QPrintDialog pd(ui->tabrev);
    if(pd.exec()== QDialog::Accepted) return;
    imprimante=pd.printer();
    imprimante->setOutputFormat(QPrinter::PdfFormat);
    imprimante->setOutputFileName("C:/Users/ME/Desktop/pdf/doc.pdf");

}

void dialogsalle::on_close_clicked()
{
    this->close();
}

void dialogsalle::on_logout_clicked()
{
    this->hide();
    dialoglogin d;
    d.exec();
}

void dialogsalle::on_id_desc_clicked()
{
    ui->tabrev->setModel(tmpsal.affichertri1_1());
    ui->id_asc->show();
    ui->id_desc->hide();
}

void dialogsalle::on_id_asc_clicked()
{
    ui->tabrev->setModel(tmpsal.affichertri1());
    ui->id_asc->hide();
    ui->id_desc->show();
}

void dialogsalle::on_num_desc_clicked()
{
    ui->tabrev->setModel(tmpsal.affichertri2_1());
    ui->num_asc->show();
    ui->num_desc->hide();
}

void dialogsalle::on_num_asc_clicked()
{
    ui->tabrev->setModel(tmpsal.affichertri2());
    ui->num_asc->hide();
    ui->num_desc->show();
}

void dialogsalle::on_des_desc_clicked()
{
    ui->tabrev->setModel(tmpsal.affichertri3_1());
    ui->des_asc->show();
    ui->des_desc->hide();
}

void dialogsalle::on_des_asc_clicked()
{
    ui->tabrev->setModel(tmpsal.affichertri3());
    ui->des_asc->hide();
    ui->des_desc->show();
}

void dialogsalle::on_montant_desc_clicked()
{
    ui->tabrev->setModel(tmpsal.affichertri4_1());
    ui->montant_asc->show();
    ui->montant_desc->hide();
}

void dialogsalle::on_montant_asc_clicked()
{
    ui->tabrev->setModel(tmpsal.affichertri4());
    ui->montant_asc->hide();
    ui->montant_desc->show();
}

void dialogsalle::on_type_desc_clicked()
{
    ui->tabrev->setModel(tmpsal.affichertri5_1());
    ui->type_asc->show();
    ui->type_desc->hide();
}

void dialogsalle::on_type_asc_clicked()
{
    ui->tabrev->setModel(tmpsal.affichertri5());
    ui->type_asc->hide();
    ui->type_desc->show();
}
