#include "dialogfin.h"
#include "ui_dialogfin.h"
#include "dialogdepenses.h"
#include "ui_dialogdepenses.h"
#include "dialogrevenus.h"
#include "ui_dialogrevenus.h"

dialogfin::dialogfin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogfin)
{
    ui->setupUi(this);
}

dialogfin::~dialogfin()
{
    delete ui;
}

void dialogfin::on_depenses_clicked()
{
 this->hide();
 dialogdepenses d;
 d.exec();
}

void dialogfin::on_revenus_clicked()
{
    this->hide();
    dialogrevenus d;
    d.exec();
}
