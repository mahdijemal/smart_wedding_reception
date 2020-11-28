#ifndef RESERVATION_H
#define RESERVATION_H

#include <QWidget>

namespace Ui {
class reservation;
}

class reservation : public QWidget
{
    Q_OBJECT

public:
    explicit reservation(QWidget *parent = nullptr);
    ~reservation();

private slots:


    void on_pushButton_clicked();

private:
    Ui::reservation *ui;
};

#endif // RESERVATION_H
