#include "dialogres.h"
#include "ui_dialogres.h"
#include "ui_dialogreservation.h"
#include "dialogreservation.h"
#include "ui_dialogclient.h"
#include "dialogclient.h"
dialogres::dialogres(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogres)
{
    ui->setupUi(this);
}

dialogres::~dialogres()
{
    delete ui;
}


void dialogres::on_client_clicked()
{
    this->hide();
    dialogclient c;
    c.exec();
}

void dialogres::on_reservation_clicked()
{
    this->hide();
    dialogreservation c;
    c.exec();
}
