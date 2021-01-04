#include "dialoginv.h"
#include "ui_dialoginv.h"
#include "dialogmenu.h"
#include "dialoginvite.h"
#include "dialogsalle.h"
dialoginv::dialoginv(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialoginv)
{
    ui->setupUi(this);
}

dialoginv::~dialoginv()
{
    delete ui;
}

void dialoginv::on_invite_clicked()
{
 this->hide();
    dialoginvite d;
    d.exec();
}

void dialoginv::on_salle_clicked()
{
    this->hide();
    dialogsalle d;
    d.exec();
}
