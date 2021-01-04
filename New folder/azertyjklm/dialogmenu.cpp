#include "dialogmenu.h"
#include "ui_dialogmenu.h"
#include "dialoginv.h"
#include "dialogfin.h"
#include "dialogres.h"
#include "dialogper.h"

dialogmenu::dialogmenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogmenu)
{
    ui->setupUi(this);
}

dialogmenu::~dialogmenu()
{
    delete ui;
}



void dialogmenu::on_pushButton_2_clicked()
{
    this->hide();
    dialogres c;
    c.exec();

}

void dialogmenu::on_pushButton_3_clicked()
{
 this->hide();
    dialoginv d;
    d.exec();
}

void dialogmenu::on_pushButton_4_clicked()
{
 this->hide();
  dialogper d;
  d.exec();
}

void dialogmenu::on_fin_clicked()
{
    this->hide();
    dialogfin c;
    c.exec();
}
