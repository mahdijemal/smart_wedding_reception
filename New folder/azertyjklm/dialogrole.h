#ifndef DIALOGROLE_H
#define DIALOGROLE_H
#include "role.h"
#include <QDialog>

namespace Ui {
class dialogrole;
}

class dialogrole : public QDialog
{
    Q_OBJECT

public:
    explicit dialogrole(QWidget *parent = nullptr);
    ~dialogrole();

private slots:
    void on_ajouter_clicked();

    void on_tabcli_activated(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_search_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_edit_clicked();

    void on_editOk_clicked();

    void on_delete_btn_clicked();

    void on_logout_clicked();

    void on_logout_2_clicked();

    void on_back_clicked();

    void on_nextmodule_clicked();

    void on_previousmodule_clicked();

    void on_nextcrud_clicked();

    void on_prevcrud_clicked();

    void on_id_desc_clicked();

    void on_id_asc_clicked();

    void on_num_desc_clicked();

    void on_num_asc_clicked();

    void on_des_desc_clicked();

    void on_des_asc_clicked();

private:
    Ui::dialogrole *ui;
    role tmprole;
};

#endif // DIALOGROLE_H
