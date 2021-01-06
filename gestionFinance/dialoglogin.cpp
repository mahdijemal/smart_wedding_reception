#include "dialoglogin.h"
#include "ui_dialoglogin.h"
#include "account.h"
#include "dialogaccount.h"
#include "dialogmenu.h"
#include "ui_dialogmenu.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QLabel>
#include <QPixmap>
dialoglogin::dialoglogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dialoglogin)
{
    ui->setupUi(this);
}

dialoglogin::~dialoglogin()
{
    delete ui;
}


void dialoglogin::on_login_clicked()
{
    QString username=ui->username->text();
       QString password= ui->password->text();
       QSqlQuery query;
           query.prepare("SELECT * FROM LOGIN WHERE USERNAME= ? AND PASSWORD= ?");
           query.addBindValue(username);
           query.addBindValue(password);
            query.exec();
              if(query.next())
              {
                   this->hide();
                  dialogmenu d;

                  d.exec();




                  }
                    else
                        QMessageBox::critical(nullptr, QObject::tr("LOGIN"),
                                    QObject::tr("\nUser Name or Password is incorrect try again !\n"), QMessageBox::Cancel);

              ui->username->clear();
              ui->password->clear();

}

void dialoglogin::on_exit_clicked()
{
    this->close();
}

void dialoglogin::on_signup_clicked()
{
    dialogaccount d;

     d.exec();
}

