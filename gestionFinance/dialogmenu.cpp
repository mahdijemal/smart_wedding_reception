#include "dialogmenu.h"
#include "ui_dialogmenu.h"
#include "ui_dialogfin.h"
#include "dialogfin.h"
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

void dialogmenu::on_btn1_clicked()
{
    this->hide();
    dialogfin d;
    d.exec();
}
