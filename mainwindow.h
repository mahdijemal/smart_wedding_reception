#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"client.h"
#include"reservation.h"
#include<QString>
#include "smtp.h"
#include "stqt_type.h"
#include <QFileDialog>
#include <QDialog>
#include "arduino.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_ajouter_clicked();



    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_ajouter_2_clicked();

    void on_pushButton_rechercheR_clicked();

    void on_pushButton_triR_clicked();

    void on_pushButton_supprimer_clicked();

    void on_pushButton_modifierR_clicked();

    void sendMail();
    void mailSent(QString);
    void browse();

    void on_stat_push_clicked();

     void alert();
private:
    Ui::MainWindow *ui;
    Client tmpclient;
    Reservation tmpreservation;
    QStringList files;

     stqt_type *s;
     //arduino
     QByteArray data;
     arduino A;
};
#endif // MAINWINDOW_H
