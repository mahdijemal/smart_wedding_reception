#include "dialogper.h"
#include "ui_dialogper.h"
#include "dialogpersonnel.h"
#include "dialogrole.h"
dialogper::dialogper(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogper)
{
    ui->setupUi(this);
}

dialogper::~dialogper()
{
    delete ui;
}

void dialogper::on_peronnel_clicked()
{
    this->hide();
    dialogpersonnel d;
    d.exec();
}

void dialogper::on_roles_clicked()
{
    this->hide();
    dialogrole h;
    h.exec();
}
