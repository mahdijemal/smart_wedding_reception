#ifndef DIALOGFIN_H
#define DIALOGFIN_H

#include <QDialog>

namespace Ui {
class dialogfin;
}

class dialogfin : public QDialog
{
    Q_OBJECT

public:
    explicit dialogfin(QWidget *parent = nullptr);
    ~dialogfin();

private slots:
    void on_depenses_clicked();

    void on_revenus_clicked();

private:
    Ui::dialogfin *ui;
};

#endif // DIALOGFIN_H
