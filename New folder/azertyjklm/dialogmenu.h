#ifndef DIALOGMENU_H
#define DIALOGMENU_H

#include <QDialog>

namespace Ui {
class dialogmenu;
}

class dialogmenu : public QDialog
{
    Q_OBJECT

public:
    explicit dialogmenu(QWidget *parent = nullptr);
    ~dialogmenu();

private slots:


    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_fin_clicked();

private:
    Ui::dialogmenu *ui;
};

#endif // DIALOGMENU_H
