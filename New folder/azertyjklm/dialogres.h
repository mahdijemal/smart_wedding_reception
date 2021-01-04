#ifndef DIALOGRES_H
#define DIALOGRES_H

#include <QDialog>

namespace Ui {
class dialogres;
}

class dialogres : public QDialog
{
    Q_OBJECT

public:
    explicit dialogres(QWidget *parent = nullptr);
    ~dialogres();

private slots:

    void on_client_clicked();

    void on_reservation_clicked();

private:
    Ui::dialogres *ui;
};

#endif // DIALOGRES_H
