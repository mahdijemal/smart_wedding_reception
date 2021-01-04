#ifndef DIALOGPER_H
#define DIALOGPER_H

#include <QDialog>

namespace Ui {
class dialogper;
}

class dialogper : public QDialog
{
    Q_OBJECT

public:
    explicit dialogper(QWidget *parent = nullptr);
    ~dialogper();

private slots:
    void on_peronnel_clicked();

    void on_roles_clicked();

private:
    Ui::dialogper *ui;
};

#endif // DIALOGPER_H
