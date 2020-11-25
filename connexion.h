#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>
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
