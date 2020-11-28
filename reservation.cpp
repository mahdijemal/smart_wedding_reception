#include "reservation.h"
#include "ui_reservation.h"
#include <QMessageBox>

reservation::reservation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reservation)
{
  /*  ui->setupUi(this);

        // Add items to Combo Box
        ui->comboBox->addItem("Marassim");
        ui->comboBox->addItem("REGENCY");
        ui->comboBox->addItem("GOLF PALM LINKS ");
        ui->comboBox->addItem("TERRASSE LES CASCADES ");
        ui->comboBox->addItem("ESPACE PRESTIGE ");*/

}

reservation::~reservation()
{
    delete ui;
}



void reservation::on_pushButton_clicked()
{
   /*  QString str;
    ui->lbl_sel_text->setText(ui->combobox->currentText());*/
}
