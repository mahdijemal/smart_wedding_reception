#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}


void login::on_connecter_clicked()
{
    MainWindow m;
    hide();
    m.exec();
}
