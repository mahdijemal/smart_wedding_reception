#ifndef DIALOGDEPENSES_H
#define DIALOGDEPENSES_H
#include "depenses.h"
#include <QDialog>
#include <QDialog>
#include <QTimer>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QPrinter>
#include <QPrintDialog>
namespace Ui {
class dialogdepenses;
}

class dialogdepenses : public QDialog
{
    Q_OBJECT

public:
    explicit dialogdepenses(QWidget *parent = nullptr);
    ~dialogdepenses();

private slots:
    void on_ajouter_clicked();

    void on_search_textChanged(const QString &arg1);

    void on_back_clicked();

    void on_id_asc_clicked();

    void on_id_desc_clicked();

    void on_num_asc_clicked();

    void on_num_desc_clicked();

    void on_des_asc_clicked();

    void on_des_desc_clicked();

    void on_montant_asc_clicked();

    void on_type_asc_clicked();

    void on_type_desc_clicked();

    void on_montant_desc_clicked();

    void on_delete_btn_clicked();

    void on_edit_clicked();

    void on_editOk_clicked();

    void on_logout_clicked();

    void on_pushButton_clicked();

    void on_tabWidget_tabBarClicked(int index);

    void on_logout_2_clicked();

    void on_nextcrud_clicked();

    void on_prevcrud_clicked();

    void on_tabdep_activated(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_nextmodule_clicked();

    void on_previousmodule_clicked();

private:
    Ui::dialogdepenses *ui;
    depenses tmpdep;
};

#endif // DIALOGDEPENSES_H
