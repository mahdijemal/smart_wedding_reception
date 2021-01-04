#ifndef DIALOGINV_H
#define DIALOGINV_H

#include <QDialog>

namespace Ui {
class dialoginv;
}

class dialoginv : public QDialog
{
    Q_OBJECT

public:
    explicit dialoginv(QWidget *parent = nullptr);
    ~dialoginv();

private slots:
    void on_invite_clicked();

    void on_salle_clicked();

private:
    Ui::dialoginv *ui;
};

#endif // DIALOGINV_H
