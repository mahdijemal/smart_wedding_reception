#ifndef DIALOGINVITE_H
#define DIALOGINVITE_H

#include <QDialog>
#include "invite.h"
#include "arduino.h"
namespace Ui {
class dialoginvite;
}

class dialoginvite : public QDialog
{
    Q_OBJECT

public:
    explicit dialoginvite(QWidget *parent = nullptr);
    ~dialoginvite();

private slots:
     void alert();
    void on_ajouter_clicked();

    void on_tabrev_activated(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_tabWidget_tabBarClicked(int index);

    void on_pushButton_3_clicked();

    void on_edit_clicked();

    void on_editOk_clicked();

    void on_delete_btn_clicked();

    void on_search_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_close_clicked();

    void on_logout_clicked();

    void on_previousmodule_2_clicked();

    void on_nextmodule_clicked();

    void on_back_clicked();

    void on_nextcrud_clicked();

    void on_prevcrud_clicked();

    void on_id_desc_clicked();

    void on_id_asc_clicked();

    void on_num_desc_clicked();

    void on_num_asc_clicked();

    void on_des_desc_clicked();

    void on_des_asc_clicked();

    void on_montant_desc_clicked();

    void on_montant_asc_clicked();

    void on_type_desc_clicked();

    void on_type_asc_clicked();

private:
    Ui::dialoginvite *ui;
    invite tmpinv;
    arduino A;
    bool check;
     QByteArray data;
};

#endif // DIALOGINVITE_H
