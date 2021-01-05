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
    void on_depenses_clicked();

    void on_revenus_clicked();

    void on_pushButton_clicked();

    void on_btn1_clicked();

private:
    Ui::dialogmenu *ui;
};

#endif // DIALOGMENU_H
