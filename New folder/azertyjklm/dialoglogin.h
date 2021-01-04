#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class dialoglogin; }
QT_END_NAMESPACE

class dialoglogin : public QDialog
{
    Q_OBJECT

public:
    dialoglogin(QWidget *parent = nullptr);
    ~dialoglogin();



private slots:


    void on_login_clicked();

    void on_exit_clicked();

    void on_signup_clicked();





private:
    Ui::dialoglogin *ui;
};
#endif // DIALOGLOGIN_H
