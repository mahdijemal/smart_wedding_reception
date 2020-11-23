#ifndef ROLE_H
#define ROLE_H
#include<QString>
#include<QSqlQueryModel>
#include <QSqlQuery>


class role
{
public:
   void setidrole(QString id);
   void setnomrole(QString nr);
   void setsalaire(QString s);

   QString getidrole();
   QString getnomrole();
   QString getsalaire();

 role();
 role(QString idrole ,QString nomrole ,QString salaire );
  bool ajouter_role();
  QSqlQueryModel *afficher_role();
  bool suprimer_role(QString idrole);
  bool  modifier_role(QString idrole , QString nomrole, QString salaire );
private:
   QString idrole , nomrole ,salaire ;




};

#endif // ROLE_H
