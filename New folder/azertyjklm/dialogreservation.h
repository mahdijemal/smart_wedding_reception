#ifndef DIALOGRESERVATION_H
#define DIALOGRESERVATION_H
#include "reservation.h"
#include <QDialog>
#include <QTimer>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class dialogreservation;
}

class dialogreservation : public QDialog
{
    Q_OBJECT

public:
    explicit dialogreservation(QWidget *parent = nullptr);
    ~dialogreservation();

private slots:
    void on_search_textChanged(const QString &arg1);

    void on_ajouter_clicked();

    void on_nextcrud_clicked();

    void on_prevcrud_clicked();

    void on_logout_2_clicked();

    void on_logout_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_tabcli_activated(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_delete_btn_clicked();

    void on_pushButton_3_clicked();

    void on_edit_clicked();

    void on_editOk_clicked();

    void on_previousmodule_clicked();

    void on_back_clicked();

    void on_id_desc_clicked();

    void on_id_asc_clicked();

    void on_montant_asc_clicked();

    void on_montant_desc_clicked();

    void on_num_asc_clicked();

    void on_num_desc_clicked();

    void on_type_asc_clicked();

    void on_type_desc_clicked();

    void on_des_asc_clicked();

    void on_des_desc_clicked();

    void on_type_asc_2_clicked();

    void on_type_desc_2_clicked();

    void on_type_asc_3_clicked();

    void on_type_desc_3_clicked();

    void on_pushButton_clicked();

    void on_nextmodule_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::dialogreservation *ui;
    reservation tmpres;
};

#endif // DIALOGRESERVATION_H
