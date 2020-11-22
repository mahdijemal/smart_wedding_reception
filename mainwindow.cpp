#include "mainwindow.h"
#include "ui_mainwindow.h"

#include"personnel.h"
#include <QCloseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->hide();
       personnel *perso =new personnel(this);
       perso->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

