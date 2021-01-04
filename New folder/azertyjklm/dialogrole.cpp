#include "dialogrole.h"
#include "ui_dialogrole.h"
#include "role.h"
#include "dialoglogin.h"
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
#include "dialogpersonnel.h"
dialogrole::dialogrole(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogrole)
{
    ui->setupUi(this);
    ui->edit_idc->hide();
    ui->editDate->hide();
    ui->editOk->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->lineEdit_id->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->txt_id->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->idEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->deleteLine->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));

}

dialogrole::~dialogrole()
{
    delete ui;
}

void dialogrole::on_ajouter_clicked()
{
    int idrole=ui->lineEdit_id->text().toInt();
    QString nomrole=ui->lineEdit_nom->text();
    QString salaire=ui->lineEdit_salaire->text();


    role e(idrole,nomrole,salaire);
    bool test=e.ajouter();
    if(test)
    {
        ui->tabcli->setModel(tmprole.affichertri1());
             ui->lineEdit_id->clear();
             ui->lineEdit_nom->clear();
             ui->lineEdit_salaire->clear();


             QMessageBox::information(nullptr, QObject::tr("PERSONNEL"),
                                   QObject::tr("PERSONNEL ADDED! ! .\n"
                                               "Click Close to exit."), QMessageBox::Close);
}             else
                 QMessageBox::critical(nullptr, QObject::tr("PERSONNEL"),
                             QObject::tr("ERROR! FILL ALL THE DATA.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialogrole::on_tabcli_activated(const QModelIndex &index)
{
    QString val=ui->tabcli->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("Select * from role where idrole ='"+val+"'");
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->txt_id->setText(qry.value(0).toString());
            ui->txt_num->setText(qry.value(1).toString());
            ui->txt_des->setText(qry.value(2).toString());

            ui->txt_des ->show();
            ui-> txt_id->show();
            ui->txt_num ->show();

            ui->pushButton_2 ->show();
            ui->pushButton_3 ->show();

        }
    }
}

void dialogrole::on_pushButton_2_clicked()
{
    int idrole=ui->txt_id->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from role  where idrole= ?");
    query.addBindValue(idrole);
    query.exec();
    if(query.next()) {
    bool test=tmprole.supprimer( idrole);
    if(test)
    {
        ui->tabcli->setModel(tmprole.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("ROLES"),
                    QObject::tr("ROLE DELETE.\n"
                                "Click Cancel to exit."), QMessageBox::Close);

    }}

    else
    QMessageBox::critical(nullptr, QObject::tr("ROLE"),
                    QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void dialogrole::on_pushButton_3_clicked()
{
    int idrole=ui->txt_id->text().toInt();
         QString nomrole=ui->txt_num->text();
         QString salaire=ui->txt_des->text();

         role e(idrole,nomrole,salaire);
          bool test=e.modifier(idrole);
        if(test)
        {
            ui->tabcli->setModel(tmprole.affichertri1());
            QMessageBox::information(nullptr, QObject::tr("ROLES"),
                        QObject::tr("ROLE MODIFIED! .\n"
                                    "Click Cancel to exit."), QMessageBox::Close);
        }
        else
        QMessageBox::critical(nullptr, QObject::tr("ROLE"),
                        QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

}

void dialogrole::on_tabWidget_currentChanged(int index)
{
    ui->tabcli->setModel(tmprole.affichertri1());

}

void dialogrole::on_search_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();
    query->prepare("SELECT * FROM role WHERE idrole  LIKE'"+arg1+"%' or nomrole  LIKE'"+arg1+"%' or salaire  LIKE'"+arg1+"%'");
     query->exec();
    if(query->next())
    {
     model->setQuery(*query);
     ui->tabcli->setModel(model); }
    else {
        QMessageBox::critical(nullptr, QObject::tr("ROLES"),
                        QObject::tr("NO MATCH FOUND !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        ui->search->clear();

}
}

void dialogrole::on_pushButton_clicked()
{
    QPrinter *imprimante;
    QPrintDialog pd(ui->tabcli);
    if(pd.exec()== QDialog::Accepted) return;
    imprimante=pd.printer();
    imprimante->setOutputFormat(QPrinter::PdfFormat);
    imprimante->setOutputFileName("C:/Users/ME/Desktop/pdf/doc.pdf");

}

void dialogrole::on_edit_clicked()
{
    QString idrole = ui->idEdit ->text();
    QSqlQuery query;
    query.prepare("Select * from role where idrole=?");
    query.addBindValue(idrole);
    query.exec();
    if(query.next()){
    ui->edit_idc->show();
    ui->editDate->show();
    ui->editOk->show();
    ui->label_5->show();
    ui->label_4->show(); }
    else
{
QMessageBox::critical(nullptr, QObject::tr("EDIT"),
 QObject::tr("\n ID not Found !\n"), QMessageBox::Cancel);
ui->label_4->hide();
ui->label_5->hide();
ui->edit_idc->hide();
ui->editDate->hide();
ui->edit_idc->clear();
ui->editDate->clear();
ui->editOk->hide();
ui->idEdit->clear();

}
}

void dialogrole::on_editOk_clicked()
{
    int idrole=ui->idEdit->text().toInt();
         QString nomrole=ui->edit_idc->text();
         QString salaire=ui->editDate->text();

          role e(idrole,nomrole,salaire);
           bool test=e.modifier(idrole);
         if(test)
         {
             ui->tabcli->setModel(tmprole.affichertri1());
             QMessageBox::information(nullptr, QObject::tr("ROLES"),
                         QObject::tr("ROLE MODIFIED! .\n"
                                     "Click Cancel to exit."), QMessageBox::Close);
             ui->label_4->hide();
             ui->label_5->hide();
             ui->edit_idc->hide();
             ui->editDate->hide();
             ui->edit_idc->clear();
             ui->editDate->clear();
             ui->editOk->hide();
             ui->idEdit->clear();

         }
         else
         {QMessageBox::critical(nullptr, QObject::tr("ROLES"),
                         QObject::tr("ERROR PLEASE FILL ALL THE INFO !.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);

         ui->label_4->hide();
         ui->label_5->hide();
         ui->edit_idc->hide();
         ui->edit_idc->clear();
         ui->editDate->clear();
         ui->editDate->hide();
         ui->editOk->hide();
         ui->idEdit->clear();

}

}

void dialogrole::on_delete_btn_clicked()
{
    int idrole = ui->deleteLine->text().toInt();
    QSqlQuery query;
    query.prepare("Select * from role where idrole = ?");
    query.addBindValue(idrole);
    query.exec();
    if(query.next()) {
    bool test=tmprole.supprimer(idrole);
    if(test)
    {
        ui->tabcli->setModel(tmprole.affichertri1());
        QMessageBox::information(nullptr, QObject::tr("DELETE"),
                    QObject::tr("ROLE DELETED SUCCESFULY !.\n"
                                "Click Cancel to exit."), QMessageBox::Close);
        ui->deleteLine->clear();
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("DELETE"),
                    QObject::tr("ERROR !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel); }
    else
        QMessageBox::critical(nullptr, QObject::tr("DELETE"),
                    QObject::tr("ERROR ! ID NOT FOUND !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void dialogrole::on_logout_clicked()
{
    this->hide();
    dialoglogin h;
    h.exec();
}

void dialogrole::on_logout_2_clicked()
{
    this->close();
}

void dialogrole::on_back_clicked()
{
    this->hide();
    dialogmenu d;
    d.exec();
}

void dialogrole::on_nextmodule_clicked()
{
    this->hide();
    dialogfin f;
    f.exec();
}

void dialogrole::on_previousmodule_clicked()
{

}

void dialogrole::on_nextcrud_clicked()
{
    this->hide();
    dialogpersonnel h;
    h.exec();
}

void dialogrole::on_prevcrud_clicked()
{
    this->hide();
    dialogpersonnel h;
    h.exec();
}

void dialogrole::on_id_desc_clicked()
{
    ui->tabcli->setModel(tmprole.affichertri1_1());
    ui->id_desc->hide();
    ui->id_asc->show();
}

void dialogrole::on_id_asc_clicked()
{
    ui->tabcli->setModel(tmprole.affichertri1());
    ui->id_desc->show();
    ui->id_asc->hide();
}

void dialogrole::on_num_desc_clicked()
{
    ui->tabcli->setModel(tmprole.affichertri2_1());
    ui->num_desc->hide();
    ui->num_asc->show();
}

void dialogrole::on_num_asc_clicked()
{
    ui->tabcli->setModel(tmprole.affichertri2());
    ui->num_desc->show();
    ui->num_asc->hide();
}

void dialogrole::on_des_desc_clicked()
{
    ui->tabcli->setModel(tmprole.affichertri3_1());
    ui->des_desc->hide();
    ui->des_asc->show();
}

void dialogrole::on_des_asc_clicked()
{
    ui->tabcli->setModel(tmprole.affichertri3());
    ui->des_desc->show();
    ui->des_asc->hide();
}
