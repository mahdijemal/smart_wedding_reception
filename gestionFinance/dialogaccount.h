#ifndef DIALOGACCOUNT_H
#define DIALOGACCOUNT_H

#include <QDialog>

namespace Ui {
class dialogaccount;
}

class dialogaccount : public QDialog
{
    Q_OBJECT

public:
    explicit dialogaccount(QWidget *parent = nullptr);
    ~dialogaccount();

private slots:
    void on_cancel_clicked();

    void on_save_clicked();

private:
    Ui::dialogaccount *ui;
};

#endif // DIALOGACCOUNT_H
