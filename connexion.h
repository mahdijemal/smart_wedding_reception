#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>
#include<QMessageBox>
//essai
class connecion
{
private:
    QSqlDatabase db;
public:
    connecion();
    bool ouvrirconnexion();
    void fermerconnexion();

};

#endif // CONNECION_H
